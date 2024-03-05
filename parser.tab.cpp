/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.ypp"

    #include <iostream>
    #include "hw3_output.hpp"
    #include "scope.hpp"
    #include "node.cpp"
    #include "Symbol.hpp"
    // #define YYSTYPE Node*
    using namespace std;
    using namespace output;
    ScopeManager scopeManager;
    extern int yylineno;
    extern char* yytext;
    extern size_t yyleng;
    extern int yylex();
    void yyerror(const char* msg);
    scopeManager.insert_function("print", "void", "string");
    scopeManager.insert_function("printi", "void", "int");
    scopeManager.insert_function("readi", "int", "int");
    int loop_counter = 0;
    bool is_numeric(string type){
        return type == "int" || type == "byte";
    }
    bool can_implicit_cast(string from, string to){
        return (from == "byte" && to == "int");
    }
    string dominant(string left, string right) { 
        if (left == "bool" && right == "bool") {
            return "bool";
        }
        if (left == "int" || right == "int") {
            return "int";
        }
        else {
            return "byte";
        }
    }


#line 110 "parser.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_int = 3,                        /* int  */
  YYSYMBOL_byte = 4,                       /* byte  */
  YYSYMBOL_B = 5,                          /* B  */
  YYSYMBOL_bool = 6,                       /* bool  */
  YYSYMBOL_TRUE = 7,                       /* TRUE  */
  YYSYMBOL_FALSE = 8,                      /* FALSE  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_BREAK = 10,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 11,                  /* CONTINUE  */
  YYSYMBOL_WHILE = 12,                     /* WHILE  */
  YYSYMBOL_SC = 13,                        /* SC  */
  YYSYMBOL_STRING = 14,                    /* STRING  */
  YYSYMBOL_ID = 15,                        /* ID  */
  YYSYMBOL_NUM = 16,                       /* NUM  */
  YYSYMBOL_LBRACE = 17,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 18,                    /* RBRACE  */
  YYSYMBOL_ASSIGN = 19,                    /* ASSIGN  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NEQ = 23,                       /* NEQ  */
  YYSYMBOL_GT = 24,                        /* GT  */
  YYSYMBOL_GTE = 25,                       /* GTE  */
  YYSYMBOL_LT = 26,                        /* LT  */
  YYSYMBOL_LTE = 27,                       /* LTE  */
  YYSYMBOL_ADD = 28,                       /* ADD  */
  YYSYMBOL_SUB = 29,                       /* SUB  */
  YYSYMBOL_MUL = 30,                       /* MUL  */
  YYSYMBOL_DIV = 31,                       /* DIV  */
  YYSYMBOL_NOT = 32,                       /* NOT  */
  YYSYMBOL_LPAREN = 33,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 34,                    /* RPAREN  */
  YYSYMBOL_IF = 35,                        /* IF  */
  YYSYMBOL_ELSE = 36,                      /* ELSE  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_prog = 38,                      /* prog  */
  YYSYMBOL_stmts = 39,                     /* stmts  */
  YYSYMBOL_stmt = 40,                      /* stmt  */
  YYSYMBOL_startScope = 41,                /* startScope  */
  YYSYMBOL_endScope = 42,                  /* endScope  */
  YYSYMBOL_call = 43,                      /* call  */
  YYSYMBOL_type = 44,                      /* type  */
  YYSYMBOL_expr = 45                       /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  9
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  86

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    75,    75,    78,    79,    89,   106,   122,
     123,   126,   135,   136,   147,   154,   163,   166,   168,   183,
     186,   189,   198,   201,   213,   225,   237,   249,   259,   265,
     269,   278,   279,   280,   281,   289,   300,   311,   322,   333,
     344,   355,   366,   377
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "int", "byte", "B",
  "bool", "TRUE", "FALSE", "RETURN", "BREAK", "CONTINUE", "WHILE", "SC",
  "STRING", "ID", "NUM", "LBRACE", "RBRACE", "ASSIGN", "OR", "AND", "EQ",
  "NEQ", "GT", "GTE", "LT", "LTE", "ADD", "SUB", "MUL", "DIV", "NOT",
  "LPAREN", "RPAREN", "IF", "ELSE", "$accept", "prog", "stmts", "stmt",
  "startScope", "endScope", "call", "type", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-14)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,   -14,   -14,   -14,    -9,     2,    16,   -10,   -13,   -14,
      -2,    33,    15,   -14,    31,    34,   -14,   -14,   -14,    71,
      71,    71,    15,    71,   -14,   -14,   -14,    -6,   -14,   -14,
     -14,    18,    51,    71,    39,   -14,   118,    87,   133,    -1,
     148,   -14,    71,   -14,   -14,    23,   163,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    15,
     -14,   -14,   -14,    15,   106,    71,   -14,   177,   187,   195,
     195,     7,     7,     7,     7,    10,    10,   -14,   -14,   -14,
     -14,    22,   -14,   -14,    15,   -14
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    19,    20,    21,     0,     0,     0,     0,     0,    16,
       0,     0,     2,     3,     0,     0,    10,    14,    15,     0,
       0,     0,     0,     0,     1,     4,     9,     0,    32,    33,
      31,    27,    29,     0,     0,    28,     0,     0,     0,     0,
       0,     6,     0,    30,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,    18,    17,     0,     0,     0,    22,    36,    35,    37,
      38,    39,    40,    41,    42,    23,    24,    25,    26,    13,
       5,    11,     7,    43,     0,    12
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -14,   -14,    38,   -11,   -14,   -14,     0,    32,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    11,    12,    13,    22,    80,    35,    15,    36
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      14,    25,     1,     2,    16,     3,    20,    41,     4,     5,
       6,     7,    14,    42,     8,    17,     9,    62,     1,     2,
      21,     3,    14,    19,     4,     5,     6,     7,    25,    18,
       8,    23,     9,    24,    10,    55,    56,    57,    58,    14,
      57,    58,     1,     2,    26,     3,    28,    29,    79,    27,
      10,    21,    81,    30,    31,    32,    43,    65,    84,    14,
      39,    37,    38,    14,    40,     0,    45,     0,     0,     0,
       0,    33,    34,    85,    44,    46,     0,     0,    28,    29,
       0,     0,     0,    64,    14,    30,    31,    32,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      60,     0,     0,    33,    34,     0,    83,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    82,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
       0,     0,    59,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,     0,     0,    61,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
       0,     0,    63,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,     0,     0,    66,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    51,
      52,    53,    54,    55,    56,    57,    58
};

static const yytype_int8 yycheck[] =
{
       0,    12,     3,     4,    13,     6,    19,    13,     9,    10,
      11,    12,    12,    19,    15,    13,    17,    18,     3,     4,
      33,     6,    22,    33,     9,    10,    11,    12,    39,    13,
      15,    33,    17,     0,    35,    28,    29,    30,    31,    39,
      30,    31,     3,     4,    13,     6,     7,     8,    59,    15,
      35,    33,    63,    14,    15,    16,     5,    34,    36,    59,
      22,    20,    21,    63,    23,    -1,    34,    -1,    -1,    -1,
      -1,    32,    33,    84,    33,    34,    -1,    -1,     7,     8,
      -1,    -1,    -1,    42,    84,    14,    15,    16,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      13,    -1,    -1,    32,    33,    -1,    65,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    24,
      25,    26,    27,    28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     6,     9,    10,    11,    12,    15,    17,
      35,    38,    39,    40,    43,    44,    13,    13,    13,    33,
      19,    33,    41,    33,     0,    40,    13,    15,     7,     8,
      14,    15,    16,    32,    33,    43,    45,    45,    45,    39,
      45,    13,    19,     5,    45,    44,    45,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    34,
      13,    34,    18,    34,    45,    34,    34,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    40,
      42,    40,    13,    45,    36,    40
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    41,    42,    43,    44,
      44,    44,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     5,     3,     5,     4,     2,
       2,     5,     7,     5,     2,     2,     0,     0,     4,     1,
       1,     1,     3,     3,     3,     3,     3,     1,     1,     1,
       2,     1,     1,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* prog: stmts  */
#line 73 "parser.ypp"
            { printProductionRule(1); }
#line 1216 "parser.tab.cpp"
    break;

  case 3: /* stmts: stmt  */
#line 75 "parser.ypp"
            { printProductionRule(2); }
#line 1222 "parser.tab.cpp"
    break;

  case 4: /* stmts: stmts stmt  */
#line 75 "parser.ypp"
                                                     { printProductionRule(3); }
#line 1228 "parser.tab.cpp"
    break;

  case 6: /* stmt: type ID SC  */
#line 79 "parser.ypp"
                                            { 
                                            string type = ((Ntype*)(yyvsp[-2].type))->get();
                                            string name = ((NIdentifier*)(yyvsp[-1].id))->get();
                                            delete (yyvsp[-2].type);
                                            delete (yyvsp[-1].id);
                                            if (not scopeManager.insert_symbol(name, type)){
                                                errorDef(yylineno, name);
                                                exit(1);
                                            }
                                            }
#line 1243 "parser.tab.cpp"
    break;

  case 7: /* stmt: type ID ASSIGN expr SC  */
#line 89 "parser.ypp"
                                            { 
                                            string type = ((Ntype*)(yyvsp[-4].type))->get();
                                            string name = ((NIdentifier*)(yyvsp[-3].id))->get();
                                            string expr_type = ((NExpression*)(yyvsp[-1].expr))->getType();
                                            delete (yyvsp[-4].type);
                                            delete (yyvsp[-3].id);
                                            delete (yyvsp[-1].expr);
                                            // add casting
                                            if (type != expr_type && !can_implicit_cast(expr_type, type)){
                                                errorMismatch(yylineno);
                                                exit(1);
                                            }
                                            if (not scopeManager.insert_symbol(name, type)){
                                                errorDef(yylineno, name);
                                                exit(1);
                                            }
                                            }
#line 1265 "parser.tab.cpp"
    break;

  case 8: /* stmt: ID ASSIGN expr SC  */
#line 106 "parser.ypp"
                                            { 
                                            string name = ((NIdentifier*)(yyvsp[-3].id))->get();
                                            if (not scopeManager.is_declared(name)){
                                                errorUndef(yylineno, name);
                                                exit(1);
                                            }
                                            string type = scopeManager.get_type(name);
                                            string val_type = ((NExpression*)(yyvsp[-1].expr))->getType();
                                            delete (yyvsp[-3].id);
                                            delete (yyvsp[-1].expr);
                                            // add casting
                                            if (type != val_type){
                                                errorMismatch(yylineno);
                                                exit(1);
                                            }
                                            }
#line 1286 "parser.tab.cpp"
    break;

  case 9: /* stmt: call SC  */
#line 122 "parser.ypp"
                                            { (yyval.stmt) = (yyvsp[-1].expr); }
#line 1292 "parser.tab.cpp"
    break;

  case 10: /* stmt: RETURN SC  */
#line 123 "parser.ypp"
                                            { 
                                            // does nothing?
                                            }
#line 1300 "parser.tab.cpp"
    break;

  case 11: /* stmt: IF LPAREN expr RPAREN stmt  */
#line 126 "parser.ypp"
                                            { 
                                            if ((yyvsp[-2].expr)->getType() != "bool"){
                                                errorMismatch(yylineno);
                                                exit(1);
                                            }
                                            scopeManager.add_scope();
                                            (yyval.stmt) = (yyvsp[0].stmt);
                                            scopeManager.delete_scope();
                                            }
#line 1314 "parser.tab.cpp"
    break;

  case 12: /* stmt: IF LPAREN expr RPAREN stmt ELSE stmt  */
#line 135 "parser.ypp"
                                            { printProductionRule(11); }
#line 1320 "parser.tab.cpp"
    break;

  case 13: /* stmt: WHILE LPAREN expr RPAREN stmt  */
#line 136 "parser.ypp"
                                            { 
                                            if ((yyvsp[-2].expr)->getType() != "bool"){
                                                errorMismatch(yylineno);
                                                exit(1);
                                            }
                                            loop_counter++;
                                            scopeManager.add_scope();
                                            (yyval.stmt) = (yyvsp[0].stmt);
                                            scopeManager.delete_scope();
                                            loop_counter--;
                                            }
#line 1336 "parser.tab.cpp"
    break;

  case 14: /* stmt: BREAK SC  */
#line 147 "parser.ypp"
                                            { 
                                            if (loop_counter == 0){
                                                errorUnexpectedBreak(yylineno);
                                                exit(1);
                                            }
                                            // loop_counter--;
                                            }
#line 1348 "parser.tab.cpp"
    break;

  case 15: /* stmt: CONTINUE SC  */
#line 154 "parser.ypp"
                                            { 
                                            if (loop_counter == 0){
                                                errorUnexpectedContinue(yylineno);
                                                exit(1);
                                            }
                                            // loop_counter--;
                                            }
#line 1360 "parser.tab.cpp"
    break;

  case 16: /* startScope: %empty  */
#line 163 "parser.ypp"
    { scopeManager.add_scope(); }
#line 1366 "parser.tab.cpp"
    break;

  case 17: /* endScope: %empty  */
#line 166 "parser.ypp"
    { scopeManager.delete_scope(); }
#line 1372 "parser.tab.cpp"
    break;

  case 18: /* call: ID LPAREN expr RPAREN  */
#line 168 "parser.ypp"
                            { 
                            string name = ((NIdentifier*)(yyvsp[-3].id))->get();
                            string arg_type = ((NExpression*)(yyvsp[-1].expr))->get_arg_type();
                            if (not scopeManager.is_function(name)){
                                errorUndef(yylineno, name);
                                exit(1);
                            }
                            if (not scopeManager.get_func(name).get_arg_type() == arg_type){
                                errorPrototypeMismatch(yylineno, name, scopeManager.get_func(name).get_arg(), arg_type);
                                exit(1);
                            }
                            (yyval.expr) = new NExpression(scopeManager.get_func(name).get_ret_type());
                            }
#line 1390 "parser.tab.cpp"
    break;

  case 19: /* type: int  */
#line 183 "parser.ypp"
        { 
    (yyval.type) = new Ntype("int"); 
    }
#line 1398 "parser.tab.cpp"
    break;

  case 20: /* type: byte  */
#line 186 "parser.ypp"
         { 
    (yyval.type) = new Ntype("byte"); 
    }
#line 1406 "parser.tab.cpp"
    break;

  case 21: /* type: bool  */
#line 189 "parser.ypp"
         { 
    (yyval.type) = new Ntype("bool"); 
    }
#line 1414 "parser.tab.cpp"
    break;

  case 22: /* expr: LPAREN expr RPAREN  */
#line 198 "parser.ypp"
                            { 
                            (yyval.expr) = (yyvsp[-1].expr);
                            }
#line 1422 "parser.tab.cpp"
    break;

  case 23: /* expr: expr ADD expr  */
#line 201 "parser.ypp"
                            {
                            string leftType = ((NExpression*)(yyvsp[-2].expr))->getType();
                            string rightType = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            delete (yyvsp[-2].expr);
                            if (!numType(leftType) || !numType(rightType)){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            string newType = dominant(rightType, leftType);
                            (yyval.expr) = new NExpression(newType);
                            }
#line 1439 "parser.tab.cpp"
    break;

  case 24: /* expr: expr SUB expr  */
#line 213 "parser.ypp"
                            { 
                            string leftType = ((NExpression*)(yyvsp[-2].expr))->getType();
                            string rightType = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            delete (yyvsp[-2].expr);
                            if (!numType(leftType) || !numType(rightType)){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            string newType = dominant(rightType, leftType);
                            (yyval.expr) = new NExpression(newType);
                            }
#line 1456 "parser.tab.cpp"
    break;

  case 25: /* expr: expr MUL expr  */
#line 225 "parser.ypp"
                            { 
                            string leftType = ((NExpression*)(yyvsp[-2].expr))->getType();
                            string rightType = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            delete (yyvsp[-2].expr);
                            if (!numType(leftType) || !numType(rightType)){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            string newType = dominant(rightType, leftType);
                            (yyval.expr) = new NExpression(newType);
                            }
#line 1473 "parser.tab.cpp"
    break;

  case 26: /* expr: expr DIV expr  */
#line 237 "parser.ypp"
                            { 
                            string leftType = ((NExpression*)(yyvsp[-2].expr))->getType();
                            string rightType = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            delete (yyvsp[-2].expr);
                            if (!numType(leftType) || !numType(rightType)){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            string newType = dominant(rightType, leftType);
                            (yyval.expr) = new NExpression(newType);
                            }
#line 1490 "parser.tab.cpp"
    break;

  case 27: /* expr: ID  */
#line 249 "parser.ypp"
                            { 
                            string name = ((IDNode*)(yyvsp[0].id))->get();
                            delete (yyvsp[0].id);
                            if(!scopeManager.isDeclared(name)  || !scopeManager.isFunction(name)){
                                errorUndef(yylineno, id);
                                exit(1);
                            }
                            string type = scopeManager.getType(id);
                            (yyval.expr) = new NExpression(type);
                            }
#line 1505 "parser.tab.cpp"
    break;

  case 28: /* expr: call  */
#line 259 "parser.ypp"
                            { 
                            string name = ((NCall*)(yyvsp[0].expr))->get();
                            string type = scopeManager.getType(name);
                            delete (yyvsp[0].expr);
                            (yyval.expr) = new NExpression(type);
                            }
#line 1516 "parser.tab.cpp"
    break;

  case 29: /* expr: NUM  */
#line 265 "parser.ypp"
                            { 
                            delete (yyvsp[0].integer);
                            (yyval.expr) = new NExpression("int");
                            }
#line 1525 "parser.tab.cpp"
    break;

  case 30: /* expr: NUM B  */
#line 269 "parser.ypp"
                            { 
                            int val = ((NInteger*)(yyvsp[-1].integer))->get();
                            delete (yyvsp[-1].integer);
                            if (val > 255){
                                errorByteTooLarge(yylineno, val);
                                exit(1);
                            }
                            (yyval.expr) = new NExpression("byte");
                            }
#line 1539 "parser.tab.cpp"
    break;

  case 31: /* expr: STRING  */
#line 278 "parser.ypp"
                            { (yyval.expr) = new NExpression("string"); }
#line 1545 "parser.tab.cpp"
    break;

  case 32: /* expr: TRUE  */
#line 279 "parser.ypp"
                            { (yyval.expr) = new NExpression("bool"); }
#line 1551 "parser.tab.cpp"
    break;

  case 33: /* expr: FALSE  */
#line 280 "parser.ypp"
                            { (yyval.expr) = new NExpression("bool") }
#line 1557 "parser.tab.cpp"
    break;

  case 34: /* expr: NOT expr  */
#line 281 "parser.ypp"
                            { 
                            if ((yyvsp[0].expr)->getType() != "bool"){
                                errorMismatch(yylineno);
                                delete (yyvsp[0].expr);
                                exit(1);
                            }
                            (yyval.expr) = (yyvsp[0].expr);
                            }
#line 1570 "parser.tab.cpp"
    break;

  case 35: /* expr: expr AND expr  */
#line 289 "parser.ypp"
                            { 
                            string leftType = ((NExpression*)(yyvsp[-2].expr))->getType();
                            string rightType = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            delete (yyvsp[-2].expr);
                            if (leftType != "bool" || rightType != "bool"){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            (yyval.expr) = new NExpression("bool");
                            }
#line 1586 "parser.tab.cpp"
    break;

  case 36: /* expr: expr OR expr  */
#line 300 "parser.ypp"
                            { 
                            string leftType = ((NExpression*)(yyvsp[-2].expr))->getType();
                            string rightType = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            delete (yyvsp[-2].expr);
                            if (leftType != "bool" || rightType != "bool"){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            (yyval.expr) = new NExpression("bool");
                            }
#line 1602 "parser.tab.cpp"
    break;

  case 37: /* expr: expr EQ expr  */
#line 311 "parser.ypp"
                            {                             
                            string leftType = ((NExpression*)(yyvsp[-2].expr))->getType();
                            string rightType = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            delete (yyvsp[-2].expr);
                            if (!is_numeric(leftType) || !is_numeric(rightType)){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            (yyval.expr) = new NExpression("bool"); 
                            }
#line 1618 "parser.tab.cpp"
    break;

  case 38: /* expr: expr NEQ expr  */
#line 322 "parser.ypp"
                            {                             
                            string leftType = ((NExpression*)(yyvsp[-2].expr))->getType();
                            string rightType = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            delete (yyvsp[-2].expr);
                            if (!is_numeric(leftType) || !is_numeric(rightType)){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            (yyval.expr) = new NExpression("bool"); 
                            }
#line 1634 "parser.tab.cpp"
    break;

  case 39: /* expr: expr GT expr  */
#line 333 "parser.ypp"
                            {                             
                            string leftType = ((NExpression*)(yyvsp[-2].expr))->getType();
                            string rightType = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            delete (yyvsp[-2].expr);
                            if (!is_numeric(leftType) || !is_numeric(rightType)){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            (yyval.expr) = new NExpression("bool"); 
                            }
#line 1650 "parser.tab.cpp"
    break;

  case 40: /* expr: expr GTE expr  */
#line 344 "parser.ypp"
                            {                             
                            string leftType = ((NExpression*)(yyvsp[-2].expr))->getType();
                            string rightType = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            delete (yyvsp[-2].expr);
                            if (!is_numeric(leftType) || !is_numeric(rightType)){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            (yyval.expr) = new NExpression("bool"); 
                            }
#line 1666 "parser.tab.cpp"
    break;

  case 41: /* expr: expr LT expr  */
#line 355 "parser.ypp"
                            {                             
                            string leftType = ((NExpression*)(yyvsp[-2].expr))->getType();
                            string rightType = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            delete (yyvsp[-2].expr);
                            if (!is_numeric(leftType) || !is_numeric(rightType)){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            (yyval.expr) = new NExpression("bool"); 
                            }
#line 1682 "parser.tab.cpp"
    break;

  case 42: /* expr: expr LTE expr  */
#line 366 "parser.ypp"
                            {                             
                            string leftType = ((NExpression*)(yyvsp[-2].expr))->getType();
                            string rightType = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            delete (yyvsp[-2].expr);
                            if (!is_numeric(leftType) || !is_numeric(rightType)){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            (yyval.expr) = new NExpression("bool"); 
                            }
#line 1698 "parser.tab.cpp"
    break;

  case 43: /* expr: LPAREN type RPAREN expr  */
#line 377 "parser.ypp"
                            { 
                            string type = ((Ntype*)(yyvsp[-2].type))->get();
                            delete (yyvsp[-2].type);
                            string expr_type = ((NExpression*)(yyvsp[0].expr))->getType();
                            delete (yyvsp[0].expr);
                            if (type != "int" && type != "byte"){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            if (expr_type != "int" && expr_type != "byte"){
                                errorMismatch(yylineno);
                                exit(1);
                            }
                            (yyval.expr) = new NExpression(type);
                            }
#line 1718 "parser.tab.cpp"
    break;


#line 1722 "parser.tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 393 "parser.ypp"


void yyerror(const char* msg) {
    errorSyn(yylineno);
    exit(0);
}

int main() {
    return yyparse();
}
