#ifndef __SYMBOL
#define __SYMBOL

#include <string>
#include <vector>

class Symbol {
protected:
    std::string name;
    std::string type;
    int offset;
public:
    Symbol(const std::string& name, const std::string& type, int offset) : name(name), type(type) { }
    virtual ~Symbol() = default;

    const std::string& get_name() { return this->name; }
    const std::string& get_type() { return this->type; }
};

class FunctionSymbol : public Symbol {
    std::string arg_type;
public:
    FunctionSymbol(const std::string& name, const std::string& type, const std::string& arg_type) : Symbol(name, type, -1), arg_type(arg_type) { }
    ~FunctionSymbol() = default;

    const std::string& get_arg_type() { return this->arg_type; }
};
#endif 