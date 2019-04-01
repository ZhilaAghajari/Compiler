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
#line 1 "grammar.y" /* yacc.c:339  */

#include "proj2.h"
#include <stdio.h>

  tree root;
  tree type_method, argtype, bractemp, type_tree; /* globals used to store treenode pointers */
  int type_record;
  int error = 0;


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
    PROGRAMnum = 258,
    IDnum = 259,
    SEMInum = 260,
    CLASSnum = 261,
    DECLARATIONSnum = 262,
    ENDDECLARATIONSnum = 263,
    COMMAnum = 264,
    EQUALnum = 265,
    LBRACEnum = 266,
    RBRACEnum = 267,
    LBRACnum = 268,
    RBRACnum = 269,
    LPARENnum = 270,
    RPARENnum = 271,
    VOIDnum = 272,
    INTnum = 273,
    METHODnum = 274,
    VALnum = 275,
    DOTnum = 276,
    ASSGNnum = 277,
    RETURNnum = 278,
    IFnum = 279,
    ELSEnum = 280,
    WHILEnum = 281,
    LTnum = 282,
    LEnum = 283,
    EQnum = 284,
    NEnum = 285,
    GEnum = 286,
    GTnum = 287,
    PLUSnum = 288,
    MINUSnum = 289,
    ORnum = 290,
    TIMESnum = 291,
    DIVIDEnum = 292,
    ANDnum = 293,
    NOTnum = 294,
    ICONSTnum = 295,
    SCONSTnum = 296
  };
#endif
/* Tokens.  */
#define PROGRAMnum 258
#define IDnum 259
#define SEMInum 260
#define CLASSnum 261
#define DECLARATIONSnum 262
#define ENDDECLARATIONSnum 263
#define COMMAnum 264
#define EQUALnum 265
#define LBRACEnum 266
#define RBRACEnum 267
#define LBRACnum 268
#define RBRACnum 269
#define LPARENnum 270
#define RPARENnum 271
#define VOIDnum 272
#define INTnum 273
#define METHODnum 274
#define VALnum 275
#define DOTnum 276
#define ASSGNnum 277
#define RETURNnum 278
#define IFnum 279
#define ELSEnum 280
#define WHILEnum 281
#define LTnum 282
#define LEnum 283
#define EQnum 284
#define NEnum 285
#define GEnum 286
#define GTnum 287
#define PLUSnum 288
#define MINUSnum 289
#define ORnum 290
#define TIMESnum 291
#define DIVIDEnum 292
#define ANDnum 293
#define NOTnum 294
#define ICONSTnum 295
#define SCONSTnum 296

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 202 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  192

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
       0,    35,    35,    42,    46,    51,    56,    66,    70,    76,
      79,    84,    91,    91,   100,   104,   108,   117,   128,   131,
     135,   141,   144,   149,   153,   158,   158,   166,   166,   172,
     182,   195,   199,   204,   209,   213,   223,   226,   230,   234,
     238,   242,   248,   251,   258,   266,   270,   275,   280,   284,
     289,   294,   300,   304,   309,   313,   318,   322,   326,   331,
     336,   340,   345,   350,   354,   359,   364,   370,   376,   379,
     383,   388,   392,   397,   402,   408,   416,   421,   425,   429,
     433,   437,   441,   445,   450,   454,   458,   462,   466,   471,
     475,   480,   488,   496,   507,   510,   519,   523,   527,   532,
     542,   545,   554,   558,   562,   567,   573,   576,   580,   585,
     590,   595,   599
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAMnum", "IDnum", "SEMInum",
  "CLASSnum", "DECLARATIONSnum", "ENDDECLARATIONSnum", "COMMAnum",
  "EQUALnum", "LBRACEnum", "RBRACEnum", "LBRACnum", "RBRACnum",
  "LPARENnum", "RPARENnum", "VOIDnum", "INTnum", "METHODnum", "VALnum",
  "DOTnum", "ASSGNnum", "RETURNnum", "IFnum", "ELSEnum", "WHILEnum",
  "LTnum", "LEnum", "EQnum", "NEnum", "GEnum", "GTnum", "PLUSnum",
  "MINUSnum", "ORnum", "TIMESnum", "DIVIDEnum", "ANDnum", "NOTnum",
  "ICONSTnum", "SCONSTnum", "$accept", "Program", "ClassDecl_rec",
  "ClassDecl", "ClassBody", "MethodDecl_List", "MethodDecl_z1",
  "MethodDecl", "$@1", "Type", "Type_rec", "Formal_Parameter_List",
  "Formal_Parameter_List_rec", "Formal_Parameter", "$@2", "$@3",
  "Formal_Parameter_rec", "Block", "StatementList", "StatementList_rec",
  "Statement", "Decls", "FieldDecl_List", "FieldDecl", "FieldDecl_rec",
  "FieldDecl_Id", "VariableDeclId", "BracketLoop", "VariableInitializer",
  "ArrayInitializer", "ArrayInitializer_rec", "ArrayCreationExpression",
  "ArrayCreationExpression_rec", "ArrayExpression", "AssignmentStatement",
  "MethodCallStatement", "ParameterList", "ReturnStatement", "IfStatement",
  "WhileStatement", "Expression", "Factor", "UnsignedConstant",
  "SimpleExpression", "SimpleExpression_Op_rec", "SimpleExpression_Op",
  "Term", "Term_Op_rec", "Term_Op", "Variable", "Variable_rec", "Field",
  "Index", "Index_rec", YY_NULLPTR
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

#define YYPACT_NINF -153

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-153)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,    55,   101,    97,  -153,    98,   109,    98,  -153,    94,
    -153,   107,  -153,    48,    96,   103,   103,   113,     9,  -153,
      53,    57,  -153,  -153,   104,    11,    47,   106,    74,  -153,
     110,  -153,  -153,  -153,   120,  -153,  -153,  -153,   111,    48,
      48,   112,   114,  -153,   113,     1,   124,   115,  -153,  -153,
    -153,  -153,   117,  -153,    51,    14,    14,   116,    10,    10,
      10,  -153,  -153,  -153,  -153,  -153,  -153,  -153,    71,  -153,
      61,    77,   118,   119,    67,  -153,    14,   128,  -153,    51,
      51,    91,  -153,   121,    14,   116,  -153,    77,    77,  -153,
      10,    10,    10,  -153,    71,    14,    14,    14,    14,    14,
      14,    10,    10,    10,  -153,    77,    14,    67,  -153,  -153,
     122,  -153,   130,   127,   126,  -153,  -153,  -153,    14,  -153,
    -153,   129,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,   125,
     133,   131,   140,   132,    73,    67,    14,  -153,  -153,  -153,
    -153,    14,    73,   136,  -153,   140,    39,  -153,  -153,   135,
    -153,  -153,  -153,  -153,   140,  -153,    14,    14,    14,    69,
    -153,  -153,  -153,  -153,  -153,  -153,    60,  -153,  -153,  -153,
     135,   135,    39,  -153,    14,   123,  -153,  -153,  -153,     4,
    -153,  -153
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     2,     3,     0,
       4,    42,     5,    44,     9,    18,    18,     0,     0,    45,
       0,     0,     7,    10,     0,    14,    15,    52,     0,    48,
      50,    43,    46,    12,     0,     6,     8,    19,     0,     0,
       0,     0,    53,    47,     0,     0,     0,     0,    20,    16,
      17,    54,     0,    49,   106,     0,     0,     0,     0,     0,
       0,    89,    90,    51,    57,    58,    86,    56,   100,    84,
      77,    94,    85,     0,    21,    55,     0,     0,   105,   106,
     106,     0,    60,     0,     0,    62,    63,    94,    94,    88,
       0,     0,     0,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    94,    68,    21,    27,    25,
       0,    22,    23,   111,     0,   109,   108,   107,     0,    59,
      87,     0,    64,    92,    93,   102,   103,   104,   101,    78,
      79,    80,    81,    82,    83,    96,    97,    98,    95,     0,
      69,     0,     0,     0,     0,     0,     0,   110,    61,    65,
      67,    68,     0,    29,    28,     0,    36,    11,    31,     0,
      24,   112,    70,    13,     0,    26,    71,     0,     0,     0,
      34,    37,    38,    39,    40,    41,     0,    32,    30,    72,
       0,     0,    36,    33,     0,    73,    76,    35,    66,     0,
      74,    75
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,  -153,   142,  -153,  -153,  -153,   134,  -153,   -17,
     137,    44,     7,  -153,  -153,  -153,   -97,     2,  -103,  -153,
     -26,   146,  -153,   141,  -153,   138,  -153,  -153,  -153,  -153,
    -153,  -153,  -153,    75,  -153,  -152,    12,  -153,   -31,  -153,
     -45,   -54,  -153,    -1,   -79,  -153,   -57,    68,  -153,  -149,
     -59,  -153,  -153,    15
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    12,    21,    22,    23,    46,    17,
      25,   110,   111,   112,   143,   142,   154,   157,   158,   169,
     170,   159,    18,    19,    28,    29,    30,    42,    63,    64,
      81,    65,    85,    86,   171,    66,   139,   173,   174,   175,
     113,    68,    69,    70,   104,   105,    71,    93,    94,    72,
      78,    79,    80,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      67,    87,    88,    34,   172,    54,    89,   176,   123,   124,
      82,    83,    55,    15,    54,   156,    56,    31,    54,    57,
     116,   117,    49,    50,    38,    56,   138,    16,   167,    56,
     172,     1,    39,   176,    58,    59,   125,   126,   127,   121,
      60,    61,    62,    54,   135,   136,   137,    58,    59,    60,
      61,    62,    15,    60,    61,    62,   177,    15,   165,     3,
      38,   140,   166,   167,    76,   168,    16,   178,    40,    35,
      33,    16,    77,   148,   182,   106,    20,   185,   186,    43,
      13,   183,   184,    44,   156,   108,   190,   109,    95,    96,
      97,    98,    99,   100,   129,   130,   131,   132,   133,   134,
     118,     4,     5,   119,     6,    11,   140,    90,    91,    92,
     101,   102,   103,     9,    13,    20,    24,    27,    37,    41,
      45,   179,   180,   181,    47,    48,    51,    52,    73,    84,
      74,    75,   115,   106,   107,   145,   146,   120,   144,   188,
     147,   150,   151,   149,   153,   164,   156,   152,   189,    10,
     155,   141,   160,    26,   163,    36,   187,    14,   191,    32,
     122,   161,   128,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53
};

static const yytype_int16 yycheck[] =
{
      45,    58,    59,    20,   156,     4,    60,   156,    87,    88,
      55,    56,    11,     4,     4,    11,    15,     8,     4,    18,
      79,    80,    39,    40,    13,    15,   105,    18,    24,    15,
     182,     3,    21,   182,    33,    34,    90,    91,    92,    84,
      39,    40,    41,     4,   101,   102,   103,    33,    34,    39,
      40,    41,     4,    39,    40,    41,   159,     4,   155,     4,
      13,   106,    23,    24,    13,    26,    18,   164,    21,    12,
      17,    18,    21,   118,     5,    15,    19,   180,   181,     5,
       7,    12,    22,     9,    11,    18,   189,    20,    27,    28,
      29,    30,    31,    32,    95,    96,    97,    98,    99,   100,
       9,     0,     5,    12,     6,    11,   151,    36,    37,    38,
      33,    34,    35,     4,     7,    19,    13,     4,    14,    13,
      10,   166,   167,   168,     4,    14,    14,    13,     4,    13,
      15,    14,     4,    15,    15,     5,     9,    16,    16,   184,
      14,    16,     9,    14,     4,     9,    11,    16,    25,     7,
      18,   107,   145,    16,   152,    21,   182,    11,   189,    18,
      85,   146,    94,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    43,     4,     0,     5,     6,    44,    45,     4,
      45,    11,    46,     7,    63,     4,    18,    51,    64,    65,
      19,    47,    48,    49,    13,    52,    52,     4,    66,    67,
      68,     8,    65,    17,    51,    12,    49,    14,    13,    21,
      21,    13,    69,     5,     9,    10,    50,     4,    14,    51,
      51,    14,    13,    67,     4,    11,    15,    18,    33,    34,
      39,    40,    41,    70,    71,    73,    77,    82,    83,    84,
      85,    88,    91,     4,    15,    14,    13,    21,    92,    93,
      94,    72,    82,    82,    13,    74,    75,    88,    88,    83,
      36,    37,    38,    89,    90,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    86,    87,    15,    15,    18,    20,
      53,    54,    55,    82,    95,     4,    92,    92,     9,    12,
      16,    82,    75,    86,    86,    83,    83,    83,    89,    85,
      85,    85,    85,    85,    85,    88,    88,    88,    86,    78,
      82,    53,    57,    56,    16,     5,     9,    14,    82,    14,
      16,     9,    16,     4,    58,    18,    11,    59,    60,    63,
      54,    95,    78,    59,     9,    58,    23,    24,    26,    61,
      62,    76,    77,    79,    80,    81,    91,    60,    58,    82,
      82,    82,     5,    12,    22,    60,    60,    62,    82,    25,
      60,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    46,    47,    47,    48,
      48,    49,    50,    49,    51,    51,    51,    51,    52,    52,
      52,    53,    53,    54,    54,    56,    55,    57,    55,    58,
      58,    59,    59,    60,    61,    61,    62,    62,    62,    62,
      62,    62,    63,    63,    64,    64,    64,    65,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    70,    71,
      72,    72,    73,    74,    74,    75,    76,    77,    78,    78,
      78,    79,    79,    80,    80,    80,    81,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    83,    83,    84,
      84,    85,    85,    85,    86,    86,    87,    87,    87,    88,
      89,    89,    90,    90,    90,    91,    92,    92,    92,    93,
      94,    95,    95
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     2,     3,     4,     1,     2,     0,
       1,     7,     0,     8,     2,     2,     4,     4,     0,     2,
       3,     0,     1,     1,     3,     0,     4,     0,     3,     1,
       3,     1,     2,     3,     1,     3,     0,     1,     1,     1,
       1,     1,     0,     3,     0,     1,     2,     3,     1,     3,
       1,     3,     1,     2,     2,     3,     1,     1,     1,     3,
       1,     3,     2,     1,     2,     3,     3,     4,     0,     1,
       3,     1,     2,     3,     5,     5,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     3,     2,     1,
       1,     2,     3,     3,     0,     2,     2,     2,     2,     2,
       0,     2,     2,     2,     2,     2,     0,     2,     2,     2,
       3,     1,     3
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
#line 36 "grammar.y" /* yacc.c:1646  */
    {  
                       		(yyval.tptr) = MakeTree(ProgramOp, (yyvsp[0].tptr), MakeLeaf(IDNode, (yyvsp[-2].intg))); 
                      		//printtree($$, 0);
                      		root = (yyval.tptr);
			}
#line 1434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(ClassOp, NullExp(), (yyvsp[0].tptr));
			}
#line 1442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(ClassOp, (yyvsp[-1].tptr), (yyvsp[0].tptr));
			}
#line 1450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 52 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(ClassDefOp, (yyvsp[0].tptr), MakeLeaf(IDNode, (yyvsp[-1].intg)));
			}
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 57 "grammar.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-1].tptr) == NullExp()) {
					(yyval.tptr) = (yyvsp[-2].tptr);
				}
				else {
					(yyval.tptr) = MkLeftC((yyvsp[-2].tptr), (yyvsp[-1].tptr));
				}
			}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 67 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 71 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(BodyOp, (yyvsp[-1].tptr), (yyvsp[0].tptr));
			}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 76 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = NullExp();
			}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 80 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(BodyOp, NullExp(), (yyvsp[0].tptr));
			}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 85 "grammar.y" /* yacc.c:1646  */
    {
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, (yyvsp[-4].intg)), (yyvsp[-2].tptr));
				(yyval.tptr) = MakeTree(MethodOp, headOp, (yyvsp[0].tptr));
			}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 91 "grammar.y" /* yacc.c:1646  */
    {type_tree = NullExp();}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 92 "grammar.y" /* yacc.c:1646  */
    {
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, (yyvsp[-4].intg)), (yyvsp[-2].tptr));
				(yyval.tptr) = MakeTree(MethodOp, headOp, (yyvsp[0].tptr));
			}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 101 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = type_tree = MakeTree(TypeIdOp, MakeLeaf(IDNode, (yyvsp[-1].intg)), (yyvsp[0].tptr));
			}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 105 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = type_tree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, (yyvsp[-1].intg)), (yyvsp[0].tptr));
			}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 109 "grammar.y" /* yacc.c:1646  */
    {
				tree typeTree = MakeTree(TypeIdOp, MakeLeaf(IDNode, (yyvsp[-3].intg)), (yyvsp[-2].tptr));
				/* This code creates a tree that looks like the assignment pdf */			
				tree fieldTree = MakeTree(FieldOp, (yyvsp[0].tptr), NullExp());
				(yyval.tptr) = type_tree = MkRightC(fieldTree, typeTree); 
				/* This code creates a tree that looks like the example parser */
				//$$ = type_tree = MkRightC($4, typeTree);
			}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 118 "grammar.y" /* yacc.c:1646  */
    {
				tree typeTree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, (yyvsp[-3].intg)), (yyvsp[-2].tptr));
				/* This code creates a tree that looks like the assignment pdf */
				tree fieldTree = MakeTree(FieldOp, (yyvsp[0].tptr), NullExp());
				(yyval.tptr) = type_tree = MkRightC(fieldTree, typeTree);
				/* This code creates a tree that looks like the example parser */
				//$$ = type_tree = MkRightC($4, typeTree);
			}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 128 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = type_tree = NullExp();
			}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 132 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = type_tree = MakeTree(IndexOp, NullExp(), NullExp());
			}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 136 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = type_tree = MakeTree(IndexOp, NullExp(), (yyvsp[-2].tptr));
			}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 141 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(SpecOp, NullExp(), type_tree);
			}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 145 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(SpecOp, (yyvsp[0].tptr), type_tree);
			}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 150 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 154 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MkRightC((yyvsp[0].tptr), (yyvsp[-2].tptr));
			}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 158 "grammar.y" /* yacc.c:1646  */
    {type_record = 1;}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 159 "grammar.y" /* yacc.c:1646  */
    {
				// This was an old approach that changed the tree if a VAL
				// was found. I did not know you could take symantic actions 
				// in the grammer matching part.
				//$$ = MakeVal($3);
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 166 "grammar.y" /* yacc.c:1646  */
    {type_record = 0;}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 167 "grammar.y" /* yacc.c:1646  */
    {
				//$$ = $2;
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 173 "grammar.y" /* yacc.c:1646  */
    {
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, (yyvsp[0].intg)), MakeLeaf(INTEGERTNode, 0));
				if (type_record == 1) {
					(yyval.tptr) = MakeTree(VArgTypeOp, idTree, NullExp());
				} else {
					(yyval.tptr) = MakeTree(RArgTypeOp, idTree, NullExp());
				}
				//$$ = MakeTree(RArgTypeOp, idTree, NullExp());
			}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 183 "grammar.y" /* yacc.c:1646  */
    {
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, (yyvsp[-2].intg)), MakeLeaf(INTEGERTNode, 0));
				tree formalParameter;
				if (type_record == 1) {
					formalParameter = MakeTree(VArgTypeOp, idTree, NullExp());
				} else {
					formalParameter = MakeTree(RArgTypeOp, idTree, NullExp());
				}
				//tree formalParameter = MakeTree(RArgTypeOp, idTree, NullExp());
				(yyval.tptr) = MkRightC((yyvsp[0].tptr), formalParameter);
			}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 196 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(BodyOp, NullExp(), (yyvsp[0].tptr));
			}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 200 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(BodyOp, (yyvsp[-1].tptr), (yyvsp[0].tptr));
			}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 205 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[-1].tptr);
			}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 210 "grammar.y" /* yacc.c:1646  */
    {	
				(yyval.tptr) = MakeTree(StmtOp, NullExp(), (yyvsp[0].tptr));
			}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 214 "grammar.y" /* yacc.c:1646  */
    {	
				if ((yyvsp[0].tptr) == NullExp()) {
					(yyval.tptr) = (yyvsp[-2].tptr);
				} else { 
					(yyval.tptr) = MakeTree(StmtOp, (yyvsp[-2].tptr), (yyvsp[0].tptr));
				}
			}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 223 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = NullExp();
			}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 227 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 231 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 235 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 239 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 243 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 248 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = NullExp();
			}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 252 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[-1].tptr);
			}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 258 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = NullExp();
			}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 267 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(BodyOp, NullExp(), (yyvsp[0].tptr));
			}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 271 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(BodyOp, (yyvsp[-1].tptr), (yyvsp[0].tptr));
			}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 276 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[-1].tptr);
			}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 281 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(DeclOp, NullExp(), (yyvsp[0].tptr));
			}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 285 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(DeclOp, (yyvsp[-2].tptr), (yyvsp[0].tptr));
			}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 290 "grammar.y" /* yacc.c:1646  */
    {
				tree commaTree = MakeTree(CommaOp, type_tree, NullExp());
				(yyval.tptr) = MakeTree(CommaOp, (yyvsp[0].tptr), commaTree);
			}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 295 "grammar.y" /* yacc.c:1646  */
    {
				tree commaTree = MakeTree(CommaOp, type_tree, (yyvsp[0].tptr));
				(yyval.tptr) = MakeTree(CommaOp, (yyvsp[-2].tptr), commaTree);
			}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 301 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeLeaf(IDNode, (yyvsp[0].intg));
			}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 305 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeLeaf(IDNode, (yyvsp[-1].intg));
			}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 310 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyval.tptr);
			}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 314 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyval.tptr);
			}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 319 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 323 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 327 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 332 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(ArrayTypeOp, (yyvsp[-1].tptr), type_tree);
			}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 337 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(CommaOp, NullExp(), (yyvsp[0].tptr));
			}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 341 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(CommaOp, (yyvsp[-2].tptr), (yyvsp[0].tptr));
			}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 346 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(ArrayTypeOp, (yyvsp[0].tptr), MakeLeaf(INTEGERTNode, (yyvsp[-1].intg)));
			}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 351 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(BoundOp, NullExp(), (yyvsp[0].tptr));
			}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 355 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(BoundOp, (yyvsp[-1].tptr), (yyvsp[0].tptr));
			}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 360 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[-1].tptr);
			}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 365 "grammar.y" /* yacc.c:1646  */
    {
				tree assignOp = MakeTree(AssignOp, NullExp(), (yyvsp[-2].tptr));
				(yyval.tptr) = MakeTree(AssignOp, assignOp, (yyvsp[0].tptr));
			}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 371 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(RoutineCallOp, (yyvsp[-3].tptr), (yyvsp[-1].tptr));
			}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 376 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = NullExp();
			}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 380 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(CommaOp, (yyvsp[0].tptr), NullExp());
			}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 384 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(CommaOp, (yyvsp[-2].tptr), (yyvsp[0].tptr));
			}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 389 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(ReturnOp, NullExp(), NullExp());
			}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 393 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(ReturnOp, (yyvsp[0].tptr), NullExp());
			}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 398 "grammar.y" /* yacc.c:1646  */
    {
				tree commaTree = MakeTree(CommaOp, (yyvsp[-1].tptr), (yyvsp[0].tptr));
				(yyval.tptr) = MakeTree(IfElseOp, NullExp(), commaTree);
			}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 403 "grammar.y" /* yacc.c:1646  */
    {
				tree commaTree = MakeTree(CommaOp, (yyvsp[-3].tptr), (yyvsp[-2].tptr));
				tree ifTree = MakeTree(IfElseOp, NullExp(), commaTree);
				(yyval.tptr) = MakeTree(IfElseOp, ifTree, (yyvsp[0].tptr));	
			}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 409 "grammar.y" /* yacc.c:1646  */
    {
				tree commaTree = MakeTree(CommaOp, (yyvsp[-3].tptr), (yyvsp[-2].tptr));
				tree ifTree = MakeTree(IfElseOp, NullExp(), commaTree);
				MkLeftC(ifTree, (yyvsp[0].tptr));
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 417 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(LoopOp, (yyvsp[-1].tptr), (yyvsp[0].tptr));
			}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 422 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 426 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(LTOp, (yyvsp[-2].tptr), (yyvsp[0].tptr));
			}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 430 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(LEOp, (yyvsp[-2].tptr), (yyvsp[0].tptr));
			}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 434 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(EQOp, (yyvsp[-2].tptr), (yyvsp[0].tptr));
			}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 438 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(NEOp, (yyvsp[-2].tptr), (yyvsp[0].tptr));
			}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 442 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(GEOp, (yyvsp[-2].tptr), (yyvsp[0].tptr));
			}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 446 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(GTOp, (yyvsp[-2].tptr), (yyvsp[0].tptr));
			}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 451 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 455 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 459 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[0].tptr);
			}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 463 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[-1].tptr);
			}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 467 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(NotOp, (yyvsp[0].tptr), NullExp());
			}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 472 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeLeaf(NUMNode, (yyvsp[0].intg));
			}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 476 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeLeaf(STRINGNode, (yyvsp[0].intg));
			}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 481 "grammar.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tptr) == NullExp()) {
					(yyval.tptr) = (yyvsp[-1].tptr);
				} else {
					(yyval.tptr) = MkLeftC((yyvsp[-1].tptr), (yyvsp[0].tptr));
				}
			}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 489 "grammar.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tptr) == NullExp()) {
					(yyval.tptr) = (yyvsp[-1].tptr);
				} else {
					(yyval.tptr) = MkLeftC((yyvsp[-1].tptr), (yyvsp[0].tptr));
				}
			}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 497 "grammar.y" /* yacc.c:1646  */
    {
				tree neg = MakeTree(UnaryNegOp, (yyvsp[-1].tptr), NullExp());
				if ((yyvsp[0].tptr) == NullExp()) {
					(yyval.tptr) = neg;
				} else {
					(yyval.tptr) = MkLeftC(neg, (yyvsp[0].tptr));
				}
			}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 507 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = NullExp();
			}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 511 "grammar.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tptr) == NullExp()) {
					(yyval.tptr) = (yyvsp[-1].tptr);
				} else {
					(yyval.tptr) = MkLeftC((yyvsp[-1].tptr), (yyvsp[0].tptr));
				}
			}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 520 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(AddOp, NullExp(), (yyvsp[0].tptr));
			}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 524 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(SubOp, NullExp(), (yyvsp[0].tptr));
			}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 528 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(OrOp, NullExp(), (yyvsp[0].tptr));
			}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 533 "grammar.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tptr) == NullExp()) {
					(yyval.tptr) = (yyvsp[-1].tptr);
				} else {
					(yyval.tptr) = MkLeftC((yyvsp[-1].tptr), (yyvsp[0].tptr));
				}
			}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 542 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = NullExp();
			}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 546 "grammar.y" /* yacc.c:1646  */
    {
				if ((yyvsp[0].tptr) == NullExp()) {
					(yyval.tptr) = (yyvsp[-1].tptr);
				} else {
					(yyval.tptr) = MkLeftC((yyvsp[-1].tptr), (yyvsp[0].tptr));
				}
			}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 555 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(MultOp, NullExp(), (yyvsp[0].tptr));
			}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 559 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(DivOp, NullExp(), (yyvsp[0].tptr));
			}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 563 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(AndOp, NullExp(), (yyvsp[0].tptr));
			}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 568 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(VarOp, MakeLeaf(IDNode, (yyvsp[-1].intg)), (yyvsp[0].tptr));
			}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 573 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = NullExp();
			}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 577 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(SelectOp, (yyvsp[-1].tptr), (yyvsp[0].tptr));
			}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 581 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(SelectOp, (yyvsp[-1].tptr), (yyvsp[0].tptr));
			}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 586 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(FieldOp, MakeLeaf(IDNode, (yyvsp[0].intg)), NullExp());
			}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 591 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = (yyvsp[-1].tptr);
			}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 596 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(IndexOp, (yyvsp[0].tptr), NullExp());
			}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 600 "grammar.y" /* yacc.c:1646  */
    {
				(yyval.tptr) = MakeTree(IndexOp, (yyvsp[-2].tptr), (yyvsp[0].tptr));
			}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2386 "y.tab.c" /* yacc.c:1646  */
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
#line 604 "grammar.y" /* yacc.c:1906  */


int yycolumn, yyline;

FILE * treelst;

yyerror(char *str)
{
  printf("yyerror: %s at line %d\n", str, yyline);
  error = 1;
}

#include "lex.yy.c"
