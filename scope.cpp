#include "scope.hpp"


ScopeManager::ScopeManager() : num_scopes(0) {
    scopes.push(new Scope());
    num_scopes++;
    offsets = std::stack<int>();
    offsets.push(0);
}

ScopeManager::~ScopeManager() {
    while (!scopes.empty()) {
        delete scopes.top();
        scopes.pop();
    }
}

void ScopeManager::add_scope() {
    scopes.push(new Scope());
    num_scopes++;
    offsets.push(offsets.top());
}


void ScopeManager::delete_scope() {
    if (scopes.empty()) {
        return;
    }
    delete scopes.top();
    scopes.pop();
    num_scopes--;
    offsets.pop();
}

bool ScopeManager::is_declared_in_current_scope(const std::string& symbol_name) {
    if (scopes.empty()) {
        return false;
    }
    return scopes.top()->is_declared(symbol_name);
}

bool ScopeManager::is_declared(const std::string& symbol_name) {
    for (int i = 0; i < num_scopes; i++) {
        if (scopes.top()->is_declared(symbol_name)) {
            return true;
        }
    }
    return false;
}

bool ScopeManager::insert_symbol(const std::string& name, const std::string& type) {
    if (scopes.empty()) {
        return false;
    }
    offsets.top() += 1;
    return scopes.top()->insert_symbol(name, type, offsets.top());
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
    if (!has_function(name)) {
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
    for (int i = 0; i < num_scopes; i++) {
        if (scopes.top()->is_declared(name)) {
            return scopes.top()->get_symbol(name);
        }
    }
    return new Symbol("error", "error", -1);
}

Symbol* Scope::get_symbol(const std::string& name) {
    return scope_symbols[name];
}
