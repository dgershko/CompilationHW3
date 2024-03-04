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

class Function {
    std::string name;
    std::string arg_type;
    std::string ret_type;
public:
    Function(const std::string& name, const std::string& ret_type, const std::string& arg_type) : name(name), ret_type(ret_type), arg_type(arg_type) { }
    ~Function() = default;

    const std::string& get_arg_type() { return this->arg_type; }
    const std::string& get_ret_type() { return this->ret_type; }
    const std::string& get_name() { return this->name; }
};
#endif 