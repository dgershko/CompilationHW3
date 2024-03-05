#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <vector>
#include <string>

using std::string;

// class NExpression;
// class Ntype;
// class Ninteger;
// class NIdentifier;
// class NifElse;
// class NCall;

typedef enum binop
{
    ADD,
    SUB,
    MUL,
    DIV
} BinOp;
typedef enum relop
{
    EQ,
    NEQ,
    GT,
    GTE,
    LT,
    LTE
} RelOp;
typedef enum numtype
{
    INT,
    BYTE,
    BOOL
} NumType;

// typedef NIdentifier callNode;
class Node
{
public:
    explicit Node() {}
    virtual ~Node() {}
};

class NExpression : public Node
{
    string type;
    NExpression *nextNode;

public:
    explicit NExpression(const string &type) : Node(), type(type), nextNode(NULL) {}
    ~NExpression() = default;
    const string &getType()
    {
        return this->type;
    }
    void typeIs(const string &type)
    {
        this->type = type;
    }
    NExpression *next()
    {
        return this->nextNode;
    }
    void nextIs(NExpression *nextNode)
    {
        this->nextNode = nextNode;
    }
};
class NifElse : public Node
{
    NExpression *ifBranch;
    NExpression *elseBranch;

public:
    ~NifElse() = default;
    explicit NifElse() = default;
    NExpression *getIf()
    {
        return this->ifBranch;
    }
    void setIf(NExpression *newIf)
    {
        this->ifBranch = newIf;
    }
    NExpression *getElse()
    {
        return this->elseBranch;
    }
    void setElse(NExpression *newElse)
    {
        this->elseBranch = newElse;
    }
};
class Ntype : public Node
{
    string type;

public:
    ~Ntype() = default;
    explicit Ntype(const string &type) : Node(), type(type) {}
    const string &get()
    {
        return this->type;
    }
    void set(const string &newType)
    {
        this->type = newType;
    }
};
class Ninteger : public Node
{
public:
    int val;

public:
    explicit Ninteger(const string &input) : Node()
    {
        this->val = stoi(input);
    }
    ~Ninteger() = default;
    int get()
    {
        return this->val;
    }
    void set(int newValue)
    {
        this->val = newValue;
    }
};

class NIdentifier : public Node
{
    string name;

public:
    ~NIdentifier() = default;
    explicit NIdentifier(const std::string &name) : name(name) {}
    const string &get()
    {
        return this->name;
    }
    void set(const string &newName)
    {
        this->name = newName;
    }
};
class NStatement : public Node
{
};
/*
class NCast : public Node {
public:
    NumType to;
    NExpression& expr;
    NCast(NumType to, NExpression& expr) : to(to), expr(expr) {}
};

class NCall : public Node
{
public:
    const NIdentifier &id;
    NExpression &arg;
    NCall(const NIdentifier &id, NExpression &argument) : id(id), arg(argument) {}
    // NCall(const NIdentifier& id) : id(id) {}
};

class NAnd : public Node
{
public:
    NExpression &left;
    NExpression &right;
    NAnd(NExpression &left, NExpression &right) : left(left), right(right) {}
};

class NOr : public Node
{
public:
    NExpression &left;
    NExpression &right;
    NOr(NExpression &left, NExpression &right) : left(left), right(right) {}
};

class NNot : public Node
{
public:
    NExpression &expr;
    NNot(NExpression &expr) : expr(expr) {}
};

class NBinOp : public Node
{
public:
    const BinOp op_type;
    NExpression &left;
    NExpression &right;
    NBinOp(NExpression &left, BinOp op, NExpression &right) : left(left), op_type(op), right(right) {}
};

class NRelOp : public Node
{
public:
    const RelOp op_type;
    NExpression &left;
    NExpression &right;
    NRelOp(NExpression &left, RelOp op, NExpression &right) : left(left), op_type(op), right(right) {}
};

class NAssign : public Node
{
    NIdentifier &left;
    NIdentifier &right;
    NAssign(NIdentifier &left, NIdentifier &right) : left(left), right(right) {}
};
*/
// class NBlock : public Node {
// public:
//     StatementList statements;
//     NBlock() {}
// };

// #define YYSTYPE Node *
#endif