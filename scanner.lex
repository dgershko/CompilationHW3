%{
// #include"tokens.hpp"
#include "node.hpp"
#define YYSTYPE Node*
#include "parser.tab.hpp"
#include "hw3_output.hpp"
%}
%option yylineno
%option noyywrap
digit                               ([0-9])
num                       (0|[1-9]{digit}*)	
letter                           ([a-zA-Z])
whitespace                      ([\t\n\r ])
string        \"([^\n\r\"\\]|\\[rnt"\\])+\"
id             {letter}+({letter}|{digit})*

%%

{whitespace}                              ;
\/\/[^\r\n]*[ \r|\n|\r\n]?                ;
int                             return INT;
byte                           return BYTE;
b                                 return B;
bool                           return BOOL;
and                             return AND;
or                               return OR;
not                             return NOT;
true                           return TRUE;
false                         return FALSE;
return                       return RETURN;
if                               return IF;
else                           return ELSE;
while                         return WHILE;
break                         return BREAK;
continue                   return CONTINUE;
;                                return SC;
\(                           return LPAREN;
\)                           return RPAREN;
"{"                          return LBRACE;
"}"                          return RBRACE;
"=="                             return EQ;
"!="                            return NEQ;
">"                              return GT;
">="                            return GTE;
"<"                              return LT;
"<="                            return LTE;
"="                          return ASSIGN;
"+"                             return ADD;
"-"                             return SUB;
"*"                             return MUL;
"/"                             return DIV;
{num}                           {
                                    yylval = new NInteger(yytext);
                                    return NUM;
                                }
{id}                            {
                                    yylval = new NIdentifier(yytext);
                                    return ID;
                                }
{string}                     return STRING;
.  { output::errorLex(yylineno); exit(0);};

%%
