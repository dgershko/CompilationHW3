#include "scope.hpp"
#include "hw3_output.hpp"
#include <iostream>

ScopeManager::ScopeManager() : num_scopes(0) {
    scopes.push_back(new Scope());
    num_scopes++;
    offsets = std::stack<int>();
    offsets.push(0);
}

ScopeManager::~ScopeManager() {
    while (!scopes.empty()) {
        delete scopes.back();
        scopes.pop_back();
    }
}

void ScopeManager::add_scope() {
    scopes.push_back(new Scope());
    num_scopes++;
    offsets.push(offsets.top());
}


void ScopeManager::delete_scope() {
    if (scopes.empty()) {
        return;
    }
    Scope* s = scopes.back();
    output::endScope();
    s->print_symbols();
    delete s;
    scopes.pop_back();
    num_scopes--;
    offsets.pop();
}

bool ScopeManager::is_declared_in_current_scope(const std::string& symbol_name) {
    if (scopes.empty()) {
        return false;
    }
    return scopes.back()->is_declared(symbol_name);
}

bool ScopeManager::is_declared(const std::string& symbol_name) {
    // iterate over scopes in the stack
    for(int i = 0; i < num_scopes; i++){
        if (scopes[i]->is_declared(symbol_name)) {
            return true;
        }
    }
    return false;
}

bool ScopeManager::insert_symbol(const std::string& name, const std::string& type) {
    // std::cout << "inserting symbol " << name << " of type " << type << std::endl;
    if (scopes.empty()) {
        return false;
    }
    offsets.top() += 1;
    return scopes.back()->insert_symbol(name, type, offsets.top());
}

bool ScopeManager::insert_function(const std::string& name, const std::string& ret_type, const std::string& arg_type) {
    if (functions.find(name) != functions.end()) {
        return false;
    }
    functions[name] = new Function(name, ret_type, arg_type);
    return true;
}

bool ScopeManager::has_function(const std::string& name) {
    return functions.find(name) != functions.end();
}

Function* ScopeManager::get_function(const std::string& name) {
    // std::cout << "getting function " << name << std::endl;
    if (!has_function(name)) {
        // std::cout << "function " << name << " not found" << std::endl;
        return new Function("error", "error", "error");
    }
    return functions[name];
}

Scope::Scope() {
    scope_symbols = std::map<std::string, Symbol*>();
}

Scope::~Scope() {
    for (auto it = scope_symbols.begin(); it != scope_symbols.end(); it++) {
        delete it->second;
    }
}

bool Scope::is_declared(const std::string& symbol_name) {
    return scope_symbols.find(symbol_name) != scope_symbols.end();
}

bool Scope::insert_symbol(const std::string& name, const std::string& type, int offset) {
    if (is_declared(name)) {
        return false;
    }
    scope_symbols[name] = new Symbol(name, type, offset);
    return true;
}

Symbol* ScopeManager::get_symbol(const std::string& name) {
    for (int i = num_scopes - 1; i >= 0; i--) {
        if (scopes[i]->is_declared(name)) {
            return scopes[i]->get_symbol(name);
        }
    }
    return new Symbol("error", "error", -1);
}

Symbol* Scope::get_symbol(const std::string& name) {
    return scope_symbols[name];
}


// function to call printID(id, offset, type) for each declared symbol, in order
void Scope::print_symbols(){
    for (auto it = scope_symbols.begin(); it != scope_symbols.end(); it++) {
        output::printID(it->first, it->second->get_offset(), it->second->get_type());
    }
}
