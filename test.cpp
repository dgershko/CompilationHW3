#include "Symbol.hpp"
#include "scope.hpp"
#include <iostream>
#include <string>


int main() {
    ScopeManager scopeManager;
    scopeManager.insert_function("print", "void", {"string"});
    scopeManager.insert_function("printi", "void", {"int"});
    scopeManager.insert_function("readi", "int", {"int"});
    bool is_declared = scopeManager.is_declared("print");
    printf("%d\n", is_declared);
    is_declared = scopeManager.is_declared("printi");
    printf("%d\n", is_declared);
    is_declared = scopeManager.is_declared("readi");
    printf("%d\n", is_declared);
    std::cout << scopeManager.get_function("readi")->get_retType() << std::endl;
}