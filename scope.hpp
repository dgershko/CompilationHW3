#ifndef _SCOPE
#define _SCOPE

#include <string>
#include <map>
#include <stack>
#include <deque>
#include "Symbol.hpp"

class Scope;

class ScopeManager {
    std::deque<Scope*> scopes;
    std::map<std::string, Function*> functions;
    std::stack<int> offsets;
    int num_scopes;
public:
    ScopeManager();
    ~ScopeManager();
    void add_scope();
    void delete_scope();
    bool is_declared_in_current_scope(const std::string& symbol_name);
    bool is_declared(const std::string& symbol_name);
    bool insert_symbol(const std::string& name, const std::string& type);
    bool insert_function(const std::string& name, const std::string& ret_type, const std::string& arg_type);
    Symbol* get_symbol(const std::string& name);
    bool has_function(const std::string& name);
    Function* get_function(const std::string& name);
};

class Scope {
private:
    std::map<std::string, Symbol*> scope_symbols;
public:
    Scope();
    ~Scope();
    bool is_declared(const std::string& symbol_name);
    bool insert_symbol(const std::string& name, const std::string& type, int offset);
    bool insert_function(const std::string& name, const std::string& type, int offset, const std::string& arg_type);
    Symbol* get_symbol(const std::string& name);
    // function to call printID(id, offset, type) for each declared symbol, in order
    void print_symbols();
};

#endif