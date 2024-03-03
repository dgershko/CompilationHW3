#ifndef _SCOPE
#define _SCOPE

#include <string>
#include <map>
#include <stack>
#include "Symbol.hpp"

class Scope;

class ScopeManager {
    std::stack<Scope*> scopes;
    std::stack<int> offsets;
    int num_scopes;
    bool has_main_func;
public:
    ScopeManager();
    ~ScopeManager();
    void add_scope();
    void delete_scope();
    bool is_declared_in_current_scope(const std::string& symbol_name);
    bool is_declared(const std::string& symbol_name);
    bool insert_symbol(const std::string& name, const std::string& type);
    bool insert_function(const std::string& name, const std::string& type, const std::string& arg_type);
    bool has_main() { return has_main_func; }
    Symbol get_symbol(const std::string& name);
};

class Scope {
private:
    std::map<std::string, Symbol&> scope_symbols;

public:
    bool is_declared(const std::string& symbol_name);
    bool insert_symbol(const std::string& name, const std::string& type, int offset);
    bool insert_function(const std::string& name, const std::string& type, int offset, const std::string& arg_type);
    Symbol get_symbol(const std::string& name);
};

#endif