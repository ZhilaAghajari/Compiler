/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "Grammar.y" /* yacc.c:339  */
 /*Definition*/
#include "proj2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "tokens.h"
int lineNumber,columnNumber,yyleng;
int yydebug=1; 
tree temp_tree1, temp_tree2, type_tree; /* defined two tree variable for temporary usage*/

#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    EOFnum = 0,
    DECLARATIONnum = 258,
    ASSGNnum = 259,
    PROGRAMnum = 260,
    IDnum = 261,
    SEMInum = 262,
    ANDnum = 263,
    DOTnum = 264,
    ENDDECLARATIONSnum = 265,
    EQUALnum = 266,
    GTnum = 267,
    INTnum = 268,
    LBRACnum = 269,
    LPARENnum = 270,
    METHODnum = 271,
    NEnum = 272,
    ORnum = 273,
    RBRACnum = 274,
    RPARENnum = 275,
    VALnum = 276,
    WHILEnum = 277,
    CLASSnum = 278,
    COMMAnum = 279,
    DIVIDEnum = 280,
    ELSEnum = 281,
    EQnum = 282,
    GEnum = 283,
    ICONSTnum = 284,
    IFnum = 285,
    LBRACEnum = 286,
    LEnum = 287,
    LTnum = 288,
    MINUSnum = 289,
    NOTnum = 290,
    PLUSnum = 291,
    RBRACEnum = 292,
    RETURNnum = 293,
    SCONSTnum = 294,
    TIMESnum = 295,
    VOIDnum = 296
  };
#endif
/* Tokens.  */
#define EOFnum 0
#define DECLARATIONnum 258
#define ASSGNnum 259
#define PROGRAMnum 260
#define IDnum 261
#define SEMInum 262
#define ANDnum 263
#define DOTnum 264
#define ENDDECLARATIONSnum 265
#define EQUALnum 266
#define GTnum 267
#define INTnum 268
#define LBRACnum 269
#define LPARENnum 270
#define METHODnum 271
#define NEnum 272
#define ORnum 273
#define RBRACnum 274
#define RPARENnum 275
#define VALnum 276
#define WHILEnum 277
#define CLASSnum 278
#define COMMAnum 279
#define DIVIDEnum 280
#define ELSEnum 281
#define EQnum 282
#define GEnum 283
#define ICONSTnum 284
#define IFnum 285
#define LBRACEnum 286
#define LEnum 287
#define LTnum 288
#define MINUSnum 289
#define NOTnum 290
#define PLUSnum 291
#define RBRACEnum 292
#define RETURNnum 293
#define SCONSTnum 294
#define TIMESnum 295
#define VOIDnum 296

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 204 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   187

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  204

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    34,    38,    44,    51,    55,    59,    65,
      70,    75,    79,    86,    90,    98,   101,   107,   113,   122,
     129,   133,   137,   145,   148,   152,   158,   162,   166,   170,
     174,   178,   184,   188,   192,   196,   200,   204,   211,   216,
     221,   226,   231,   235,   239,   244,   250,   254,   259,   264,
     269,   276,   280,   286,   291,   295,   304,   307,   311,   315,
     319,   323,   329,   333,   339,   348,   358,   362,   368,   372,
     377,   381,   384,   390,   395,   399,   406,   411,   415,   421,
     427,   432,   437,   441,   446,   451,   455,   459,   463,   467,
     471,   475,   481,   485,   489,   493,   497,   503,   507,   511,
     515,   522,   526,   532,   536,   540,   546,   550,   554,   558,
     565,   569,   575,   579,   584,   588,   596,   600,   606,   610,
     614,   628
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "EOFnum", "error", "$undefined", "DECLARATIONnum", "ASSGNnum",
  "PROGRAMnum", "IDnum", "SEMInum", "ANDnum", "DOTnum",
  "ENDDECLARATIONSnum", "EQUALnum", "GTnum", "INTnum", "LBRACnum",
  "LPARENnum", "METHODnum", "NEnum", "ORnum", "RBRACnum", "RPARENnum",
  "VALnum", "WHILEnum", "CLASSnum", "COMMAnum", "DIVIDEnum", "ELSEnum",
  "EQnum", "GEnum", "ICONSTnum", "IFnum", "LBRACEnum", "LEnum", "LTnum",
  "MINUSnum", "NOTnum", "PLUSnum", "RBRACEnum", "RETURNnum", "SCONSTnum",
  "TIMESnum", "VOIDnum", "$accept", "Program", "ClassDeclLoop",
  "ClassDecl", "ClassBody", "Decls", "DeclsLoop", "MethodDeclLoop",
  "MethodDeclLoop2", "MethodDecl", "FieldDecl",
  "FormalParameterListNoType", "FormalParameterListWithType",
  "FormalParameterListLoopWithVal", "FormalParameterListLoopNoVal", "Type",
  "TypeList", "ValLoop", "Block", "StatementList", "StatementLoop",
  "Statement", "FieldDeclInner", "FieldDeclLoop2", "VariableDeclId",
  "BrackLoop", "VariableInitializer", "ArrayIntializer",
  "VariableInitializerLoop", "ArrayCreationExpression",
  "ArrayCreationExpressionLoop", "ArrayCreationExpressionLoop2",
  "AssignmentStatement", "MethodCallStatement", "ExpressionLoop",
  "Expression", "Factor", "Term", "UnsignedConstant", "SimpleExpression",
  "SimpleExpressionList", "Variable", "VariableLoop", "ReturnStatement",
  "IfStatement", "WhileStatement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

#define YYPACT_NINF -149

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-149)))

#define YYTABLE_NINF -49

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    15,    23,    50,  -149,    57,    77,    57,  -149,    80,
    -149,     3,  -149,   118,  -149,     9,    52,    52,    14,  -149,
     117,    -3,  -149,    48,  -149,  -149,   106,   113,   112,   130,
     112,  -149,  -149,   128,    68,  -149,   136,   137,   143,  -149,
    -149,  -149,   118,   133,   134,   118,   135,   112,  -149,   117,
      16,   140,   141,  -149,  -149,  -149,  -149,  -149,  -149,   131,
     144,    43,  -149,    16,    24,    24,    24,  -149,  -149,  -149,
    -149,  -149,  -149,     8,  -149,  -149,    74,    69,   142,    55,
      55,   145,    43,   132,    43,   144,  -149,   139,  -149,    75,
     146,  -149,   146,    24,    24,    24,    43,    43,    43,    43,
      43,    43,    24,    24,    24,    43,   154,   148,   147,  -149,
    -149,   149,  -149,  -149,  -149,    43,   156,    43,   151,  -149,
    -149,    16,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,   152,   126,    86,   157,     6,
       6,   155,  -149,    43,  -149,  -149,  -149,    43,    55,   159,
      89,    59,   150,  -149,  -149,  -149,  -149,   158,  -149,  -149,
    -149,   160,   161,    55,   159,    43,    43,    43,     7,  -149,
    -149,  -149,    11,  -149,   153,  -149,  -149,  -149,   159,    55,
    -149,  -149,   164,   150,   150,  -149,    59,  -149,    43,    78,
    -149,  -149,  -149,    55,  -149,  -149,  -149,  -149,    43,  -149,
    -149,  -149,   150,  -149
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     2,     4,     0,
       3,    10,     5,     0,     7,     0,    44,    45,     0,    12,
       0,     0,     6,     0,    14,    16,     0,    41,    39,    40,
      38,     9,    11,    66,     0,    62,    64,     0,     0,     8,
      13,    46,     0,     0,     0,     0,     0,    67,    19,     0,
       0,     0,     0,    42,    47,    69,    43,    68,    63,   110,
       0,     0,   101,     0,     0,     0,     0,   102,    65,    71,
      72,    94,    70,    97,   106,    92,    85,   103,    93,    20,
      23,     0,     0,   111,     0,    76,    78,     0,    74,     0,
     105,    96,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,    21,
      22,     0,    24,    25,   113,    84,     0,     0,     0,    77,
      95,     0,    73,    98,    99,   100,    90,    89,    88,    91,
      87,    86,   109,   108,   107,     0,    82,    32,     0,     0,
       0,     0,   112,    84,    79,    75,    81,    84,     0,     0,
      26,    56,     0,    17,    51,    18,   114,     0,    83,    33,
      34,    50,    35,     0,     0,     0,     0,   116,     0,    54,
      57,    58,     0,    59,    60,    61,    52,   115,     0,     0,
      27,    28,    29,     0,     0,   117,    56,    53,     0,     0,
      49,    37,    36,     0,   121,   118,    55,    80,     0,   120,
      30,    31,     0,   119
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,   166,  -149,   165,  -149,  -149,  -149,   162,
     168,  -149,  -149,   -79,   -75,    53,   163,  -108,    35,  -148,
    -149,   -20,  -149,   129,  -149,    -5,   -61,  -149,  -149,  -149,
    -149,    97,  -149,  -144,   -53,   -50,   122,    26,  -149,    36,
     -47,  -143,  -149,  -149,  -149,  -149
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    12,   152,    18,    23,    24,    25,
      19,   108,   111,   109,   110,    20,    27,   162,   153,   154,
     168,   169,    34,    35,    36,    28,    68,    69,    89,    70,
      85,    86,   170,    71,   135,   136,    73,    74,    75,    76,
      77,    78,    83,   173,   174,   175
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,   112,    88,    16,   176,   113,    13,   171,   172,    13,
      17,    87,    30,    72,   186,   188,    93,    90,     1,    92,
      16,     3,    59,     4,    31,    21,   105,    17,    47,    60,
      59,    61,   115,    94,   118,   194,   195,   151,    37,    61,
      14,   199,   171,   172,   187,    62,    22,    63,    95,    59,
      64,    65,    66,    62,   203,    67,   182,     5,    61,    65,
     145,   -48,   141,    67,    21,    59,    26,   143,   106,   159,
     190,    72,    62,   160,    38,    48,   107,    64,    65,    66,
       6,   165,    67,     9,   180,    39,    96,   102,   181,   166,
     157,    97,    49,   148,   158,    53,   163,   167,    56,   121,
     191,    98,    99,   103,   192,   104,   100,   101,   198,   151,
     149,    11,   122,   164,   200,   183,   184,   185,   201,   123,
     124,   125,    42,    33,    16,    41,    44,    43,   132,   133,
     134,    17,   126,   127,   128,   129,   130,   131,   197,    45,
      81,   116,    46,    51,    43,    82,   117,    50,   202,    52,
     147,   114,    54,    55,    57,    79,    80,   105,    84,   120,
     137,   138,   142,   150,   102,   161,   196,   139,   179,   140,
     144,   193,   146,    10,   156,   155,    15,   177,    58,   189,
      29,   151,   119,     0,   178,    40,    32,    91
};

static const yytype_int16 yycheck[] =
{
      50,    80,    63,     6,   152,    80,     3,   151,   151,     3,
      13,    61,    17,    63,     7,     4,     8,    64,     5,    66,
       6,     6,     6,     0,    10,    16,    15,    13,    33,    13,
       6,    15,    82,    25,    84,   183,   184,    31,    41,    15,
      37,   189,   186,   186,    37,    29,    37,    31,    40,     6,
      34,    35,    36,    29,   202,    39,   164,     7,    15,    35,
     121,     9,   115,    39,    16,     6,    14,   117,    13,   148,
     178,   121,    29,   148,    21,     7,    21,    34,    35,    36,
      23,    22,    39,     6,   163,    37,    12,    18,   163,    30,
     143,    17,    24,     7,   147,    42,     7,    38,    45,    24,
     179,    27,    28,    34,   179,    36,    32,    33,    30,    31,
      24,    31,    37,    24,   193,   165,   166,   167,   193,    93,
      94,    95,     9,     6,     6,    19,    14,    14,   102,   103,
     104,    13,    96,    97,    98,    99,   100,   101,   188,     9,
       9,     9,    14,     6,    14,    14,    14,    11,   198,     6,
      24,     6,    19,    19,    19,    15,    15,    15,    14,    20,
       6,    13,     6,     6,    18,     6,   186,    20,     7,    20,
      19,     7,    20,     7,    19,   140,    11,    19,    49,    26,
      17,    31,    85,    -1,    24,    23,    18,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    43,     6,     0,     7,    23,    44,    45,     6,
      45,    31,    46,     3,    37,    47,     6,    13,    48,    52,
      57,    16,    37,    49,    50,    51,    14,    58,    67,    58,
      67,    10,    52,     6,    64,    65,    66,    41,    57,    37,
      51,    19,     9,    14,    14,     9,    14,    67,     7,    24,
      11,     6,     6,    57,    19,    19,    57,    19,    65,     6,
      13,    15,    29,    31,    34,    35,    36,    39,    68,    69,
      71,    75,    77,    78,    79,    80,    81,    82,    83,    15,
      15,     9,    14,    84,    14,    72,    73,    77,    68,    70,
      82,    78,    82,     8,    25,    40,    12,    17,    27,    28,
      32,    33,    18,    34,    36,    15,    13,    21,    53,    55,
      56,    54,    55,    56,     6,    77,     9,    14,    77,    73,
      20,    24,    37,    79,    79,    79,    81,    81,    81,    81,
      81,    81,    79,    79,    79,    76,    77,     6,    13,    20,
      20,    76,     6,    77,    19,    68,    20,    24,     7,    24,
       6,    31,    47,    60,    61,    60,    19,    76,    76,    55,
      56,     6,    59,     7,    24,    22,    30,    38,    62,    63,
      74,    75,    83,    85,    86,    87,    61,    19,    24,     7,
      55,    56,    59,    77,    77,    77,     7,    37,     4,    26,
      59,    55,    56,     7,    61,    61,    63,    77,    30,    61,
      55,    56,    77,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    46,    46,    46,    47,
      47,    48,    48,    49,    49,    50,    50,    51,    51,    52,
      53,    53,    53,    54,    54,    54,    55,    55,    55,    55,
      55,    55,    56,    56,    56,    56,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    57,    58,    58,    58,    59,
      59,    60,    60,    61,    62,    62,    63,    63,    63,    63,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    68,    69,    70,    70,    71,    72,    72,    73,
      74,    75,    76,    76,    76,    77,    77,    77,    77,    77,
      77,    77,    78,    78,    78,    78,    78,    79,    79,    79,
      79,    80,    80,    81,    81,    81,    82,    82,    82,    82,
      83,    83,    84,    84,    84,    84,    85,    85,    86,    86,
      86,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     1,     3,     3,     2,     4,     3,
       0,     2,     1,     2,     1,     0,     1,     7,     7,     3,
       0,     1,     1,     0,     1,     1,     3,     5,     5,     5,
       7,     7,     2,     4,     4,     4,     6,     6,     2,     2,
       2,     2,     4,     4,     1,     1,     2,     3,     0,     3,
       1,     1,     2,     3,     1,     3,     0,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     2,     2,     3,
       1,     1,     1,     3,     1,     3,     2,     2,     1,     3,
       3,     4,     1,     3,     0,     1,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     3,     2,     1,     3,     3,
       3,     1,     1,     1,     2,     2,     1,     3,     3,     3,
       1,     2,     3,     2,     4,     5,     1,     2,     3,     5,
       3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 29 "Grammar.y" /* yacc.c:1646  */
    {
	tree DisplayTree = MakeTree(ProgramOp,(yyvsp[0].tptr),MakeLeaf(IDNode,(yyvsp[-2].intg)));
	printtree(DisplayTree,0);
}
#line 1439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 35 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(ClassOp,(yyvsp[-1].tptr),(yyvsp[0].tptr));	
}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 39 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(ClassOp,NullExp(),(yyvsp[0].tptr));
}
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 45 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(ClassDefOp,(yyvsp[0].tptr),MakeLeaf(IDNode,(yyvsp[-1].intg)));
	/*$$ = MakeTree(ClassDefOp,$2,MakeLeaf(IDNode,$2));*/
}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 52 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[-1].tptr);
}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 56 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = NullExp();
}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 60 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MkLeftC((yyvsp[-2].tptr),(yyvsp[-1].tptr));
}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 66 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[-1].tptr);
}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(BodyOp, NullExp(), NullExp());
}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 76 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(BodyOp,(yyvsp[-1].tptr),(yyvsp[0].tptr));
}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 80 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(BodyOp,NullExp(),(yyvsp[0].tptr));
}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 87 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(BodyOp,(yyvsp[-1].tptr),(yyvsp[0].tptr));
}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 91 "Grammar.y" /* yacc.c:1646  */
    {
	/*$$ = MakeTree(BodyOp,NullExp(),$1);	moved to method declloop2*/
	(yyval.tptr) = (yyvsp[0].tptr);
}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 98 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = NullExp();	
}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 102 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(BodyOp,NullExp(),(yyvsp[0].tptr));
}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 108 "Grammar.y" /* yacc.c:1646  */
    {
	/*left leaf is a tree of FormalParameterListNoType and right leaf is Block */
	(yyval.tptr) = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,(yyvsp[-4].intg)),(yyvsp[-2].tptr)),(yyvsp[0].tptr));
	/*$$ = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,$4),MakeTree(SpecOp,$6,type_tree)),$8);*/
}
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 114 "Grammar.y" /* yacc.c:1646  */
    {
	/*left leaf is a tree of FormalParameterListWithType and right leaf is Block */
	/*$$ = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,$3),MakeTree(SpecOp,$5,type_tree)),$7);	*/
	(yyval.tptr) = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,(yyvsp[-4].intg)),(yyvsp[-2].tptr)),(yyvsp[0].tptr));
}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 123 "Grammar.y" /* yacc.c:1646  */
    {
	/* recall FieldDeclLoop many times */
	(yyval.tptr) = (yyvsp[-1].tptr);
}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 129 "Grammar.y" /* yacc.c:1646  */
    {
	/*no leaf and end tree here*/
	(yyval.tptr) = MakeTree(SpecOp, NullExp(),NullExp());	
}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 134 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(SpecOp, (yyvsp[0].tptr),NullExp());		
}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 138 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(SpecOp, (yyvsp[0].tptr),NullExp());		
}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 145 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(SpecOp, NullExp(),type_tree);	
}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 149 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(SpecOp, (yyvsp[0].tptr),type_tree);		
}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 153 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(SpecOp, (yyvsp[0].tptr),type_tree);		
}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 159 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[0].intg)), MakeLeaf(INTEGERTNode, INTnum)), NullExp());
}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 163 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[-2].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[0].tptr));
}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 167 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[-2].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[0].tptr));
}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 171 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[-2].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[0].tptr));	
}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 175 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[-4].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[0].tptr));
}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 179 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[-4].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[0].tptr));
}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 185 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[0].intg)), MakeLeaf(INTEGERTNode, INTnum)), NullExp());	
}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 189 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[-2].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[0].tptr));
}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 193 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[-2].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[0].tptr));
}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 197 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[-2].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[0].tptr));	
}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 201 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, (yyvsp[-4].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[-2].tptr)), (yyvsp[0].tptr));
}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 205 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, (yyvsp[-4].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[-2].tptr)), (yyvsp[0].tptr));
}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 212 "Grammar.y" /* yacc.c:1646  */
    {
	type_tree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, (yyvsp[-1].intg)), (yyvsp[0].tptr));
	(yyval.tptr) = type_tree;
}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 217 "Grammar.y" /* yacc.c:1646  */
    {
	type_tree = MakeTree(TypeIdOp, MakeLeaf(IDNode, (yyvsp[-1].intg)), (yyvsp[0].tptr));
	(yyval.tptr) = type_tree;
}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 222 "Grammar.y" /* yacc.c:1646  */
    {
	type_tree = MakeTree(TypeIdOp,MakeLeaf(INTEGERTNode,(yyvsp[-1].intg)),(yyvsp[0].tptr));
	(yyval.tptr) = type_tree;
}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 227 "Grammar.y" /* yacc.c:1646  */
    {
	type_tree = MakeTree(TypeIdOp,MakeLeaf(IDNode,(yyvsp[-1].intg)),(yyvsp[0].tptr));
	(yyval.tptr) = type_tree;
}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 232 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = type_tree = MkRightC((yyvsp[0].tptr), MakeTree(TypeIdOp, MakeLeaf(IDNode, (yyvsp[-3].intg)), (yyvsp[-2].tptr)));
}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 236 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = type_tree = MkRightC((yyvsp[0].tptr), MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, (yyvsp[-3].intg)), (yyvsp[-2].tptr)));
}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 240 "Grammar.y" /* yacc.c:1646  */
    {
	type_tree = MakeTree(TypeIdOp, MakeLeaf(IDNode, (yyvsp[0].intg)), NullExp());
	(yyval.tptr) = type_tree;
}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 245 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = type_tree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, (yyvsp[0].intg)), NullExp());
}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 251 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = type_tree = MakeTree(IndexOp, NullExp(), NullExp());
}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 255 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = type_tree = MakeTree(IndexOp, NullExp(), (yyvsp[-2].tptr));
}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 259 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = type_tree = NullExp();
}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 265 "Grammar.y" /* yacc.c:1646  */
    {
	/* make a loop to continue*/
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode,(yyvsp[-2].intg)),MakeLeaf(INTEGERTNode,INTnum)),(yyvsp[0].tptr));
}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 270 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode,(yyvsp[0].intg)),MakeLeaf(INTEGERTNode,INTnum)),NullExp());
}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 277 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(BodyOp,NullExp(),(yyvsp[0].tptr));
}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 281 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(BodyOp,(yyvsp[-1].tptr),(yyvsp[0].tptr));
}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 287 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[-1].tptr);
}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 292 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(StmtOp,NullExp(),(yyvsp[0].tptr));
}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 296 "Grammar.y" /* yacc.c:1646  */
    {
	/*if there is nothing as for statment, then just return StatementLoop. Otherwise, return the whole tree*/
	if((yyvsp[0].tptr) == NullExp()){(yyval.tptr) = (yyvsp[-2].tptr);}
	else {(yyval.tptr) = MakeTree(StmtOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));}
}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 304 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = NullExp();	
}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 308 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);
}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 312 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);
}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 316 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);
}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 320 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);
}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 324 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);
}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 330 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(DeclOp,NullExp(),(yyvsp[0].tptr));
}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 334 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(DeclOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));
}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 340 "Grammar.y" /* yacc.c:1646  */
    {
	/*in this case we have only VariableDeclId and then ';' */
	/*the right leaf is a tree of CommaOp and type_tree we make general, but there is no left leaf(tree). so I make a CommaOpTree as the right part and just add as the right leaf for the return tree*/
	/*$$ = MakeTree(DeclOp,NullExp(),CommaOpTree);*/
	
	tree CommaOpTree = MakeTree(CommaOp,(yyvsp[0].tptr),MakeTree(CommaOp, type_tree, NullExp()));
	(yyval.tptr) = CommaOpTree;
}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 349 "Grammar.y" /* yacc.c:1646  */
    {
	/*this case is when we have 'variable = variableinitializer' */
	/*the right leaf is again a tree but in its right leaf there should not be null but 3rd argumet, this time we got variableInitalizer as the leaf */
	tree CommaOpTree = MakeTree(CommaOp,(yyvsp[-2].tptr),MakeTree(CommaOp, type_tree,(yyvsp[0].tptr)));
	/*$$ = MakeTree(DeclOp,NullExp(),CommaOpTree);*/
	(yyval.tptr) = CommaOpTree;
}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 359 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeLeaf(IDNode,(yyvsp[0].intg));
}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 363 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeLeaf(IDNode,(yyvsp[-1].intg));
}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 369 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyval.tptr);	
}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 373 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyval.tptr);	
}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 378 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);	
}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 382 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);	
}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 385 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);	
}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 391 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(ArrayTypeOp,(yyvsp[-1].tptr),type_tree);	
}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 396 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(CommaOp,NullExp(),(yyvsp[0].tptr));
}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 400 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(CommaOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));
}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 407 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(ArrayTypeOp, (yyvsp[0].tptr), MakeLeaf(INTEGERTNode,(yyvsp[-1].intg)));	
}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 412 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(BoundOp,(yyvsp[-1].tptr),(yyvsp[0].tptr));
}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 416 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(BoundOp,NullExp(),(yyvsp[0].tptr));	
}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 422 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[-1].tptr);
}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 428 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(AssignOp,MakeTree(AssignOp,NullExp(),(yyvsp[-2].tptr)),(yyvsp[0].tptr));
}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 433 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(RoutineCallOp,(yyvsp[-3].tptr),(yyvsp[-1].tptr));
}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 438 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(CommaOp,(yyvsp[0].tptr),NullExp());	
}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 442 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(CommaOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));		
}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 446 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = NullExp();		
}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 452 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);
}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 456 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(LTOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));
}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 460 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(LEOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));	
}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 464 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(EQOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));
}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 468 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(NEOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));
}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 472 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(GTOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));
}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 476 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(GEOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));
}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 482 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);
}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 486 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);	
}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 490 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);
}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 494 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[-1].tptr);
}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 498 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(NotOp,(yyvsp[0].tptr),NullExp());
}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 504 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);	
}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 508 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(AndOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));
}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 512 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(DivOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));	
}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 516 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(MultOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));
}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 523 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeLeaf(NUMNode,(yyvsp[0].intg));
}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 527 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeLeaf(STRINGNode,(yyvsp[0].intg));
}
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 533 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);
}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 537 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);
}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 541 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(UnaryNegOp,(yyvsp[0].tptr),NullExp());
}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 547 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = (yyvsp[0].tptr);
}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 551 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(AddOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));
}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 555 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(SubOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));	
}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 559 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(OrOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));
}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 566 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(VarOp, MakeLeaf(IDNode, (yyvsp[0].intg)), NullExp());
}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 570 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(VarOp, MakeLeaf(IDNode, (yyvsp[-1].intg)), (yyvsp[0].tptr));	
}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 576 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, (yyvsp[-1].intg)), NullExp()), (yyvsp[-2].tptr));
}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 580 "Grammar.y" /* yacc.c:1646  */
    {
	/*printf("point0");*/
	(yyval.tptr) = MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, (yyvsp[0].intg)), NullExp()), NullExp());
}
#line 2353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 585 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(SelectOp, MakeTree(IndexOp, (yyvsp[-2].tptr), (yyvsp[-1].tptr)), NullExp());
}
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 589 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(SelectOp, MakeTree(IndexOp, (yyvsp[-2].tptr), (yyvsp[-1].tptr)), (yyvsp[-4].tptr));
}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 597 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(ReturnOp,NullExp(),NullExp());
}
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 601 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(ReturnOp,(yyvsp[0].tptr),NullExp());	
}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 607 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(IfElseOp,NullExp(),MakeTree(CommaOp,(yyvsp[-1].tptr),(yyvsp[0].tptr)));
}
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 611 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(IfElseOp,(yyvsp[-4].tptr),MakeTree(CommaOp,(yyvsp[-1].tptr),(yyvsp[0].tptr)));
}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 615 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(IfElseOp,(yyvsp[-2].tptr),(yyvsp[0].tptr));
}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 629 "Grammar.y" /* yacc.c:1646  */
    {
	(yyval.tptr) = MakeTree(LoopOp,(yyvsp[-1].tptr),(yyvsp[0].tptr));
}
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2421 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 633 "Grammar.y" /* yacc.c:1906  */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE *treelst;	
extern FILE *yyin;
extern char* yytext;

int main(int argc, char *argv[])
{
	
	FILE *f = fopen(argv[1],"r");
	yyin = f; 
	treelst = stdout;
	//printf("test test");
	//do{
	yyparse();
	//}while(!feof(yyin));

	return 0;
}
yyerror(char *str)
{
	printf("yerror: %s at line %d and Column %d\n ",str,lineNumber,columnNumber);
}
#include "lex.yy.c"
