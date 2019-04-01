/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EOFnum = 0,
     DECLARATIONSnum = 258,
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
#define DECLARATIONSnum 258
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




/* Copy the first part of user declarations.  */
#line 1 "Grammar.y"
 /*Definition*/
#include "proj2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "tokens.h"
int lineNumber,columnNumber;
int yydebug=1; 
int error = 0;
tree temp_tree1, temp_tree2, type_tree, DisplayTree; /* defined two tree variable for temporary usage*/


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 202 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   187

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNRULES -- Number of states.  */
#define YYNSTATES  204

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    11,    13,    17,    21,    24,    29,
      33,    34,    35,    38,    40,    43,    45,    46,    48,    56,
      64,    68,    69,    71,    73,    74,    76,    78,    82,    88,
      94,   100,   108,   116,   119,   124,   129,   134,   141,   148,
     151,   154,   157,   160,   165,   170,   172,   174,   177,   181,
     182,   186,   188,   190,   193,   197,   199,   203,   204,   206,
     208,   210,   212,   214,   216,   220,   222,   226,   228,   231,
     234,   238,   240,   242,   244,   248,   250,   254,   257,   260,
     262,   266,   270,   275,   277,   281,   282,   284,   288,   292,
     296,   300,   304,   308,   310,   312,   314,   318,   321,   323,
     327,   331,   335,   337,   339,   341,   344,   347,   349,   353,
     357,   361,   363,   366,   370,   373,   378,   384,   386,   389,
     393,   399,   403
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,     5,     6,     7,    44,    -1,    44,    45,
      -1,    45,    -1,    23,     6,    46,    -1,    31,    47,    37,
      -1,    31,    37,    -1,    31,    47,    49,    37,    -1,     3,
      48,    10,    -1,    -1,    -1,    48,    52,    -1,    52,    -1,
      49,    51,    -1,    50,    -1,    -1,    51,    -1,    16,    41,
       6,    15,    53,    20,    60,    -1,    16,    57,     6,    15,
      54,    20,    60,    -1,    57,    64,     7,    -1,    -1,    55,
      -1,    56,    -1,    -1,    55,    -1,    56,    -1,    21,    13,
       6,    -1,    21,    13,     6,     7,    55,    -1,    21,    13,
       6,     7,    56,    -1,    21,    13,     6,    24,    59,    -1,
      21,    13,     6,    24,    59,     7,    55,    -1,    21,    13,
       6,    24,    59,     7,    56,    -1,    13,     6,    -1,    13,
       6,     7,    55,    -1,    13,     6,     7,    56,    -1,    13,
       6,    24,    59,    -1,    13,     6,    24,    59,     7,    56,
      -1,    13,     6,    24,    59,     7,    55,    -1,    13,    67,
      -1,     6,    67,    -1,    13,    58,    -1,     6,    58,    -1,
       6,    58,     9,    57,    -1,    13,    58,     9,    57,    -1,
       6,    -1,    13,    -1,    14,    19,    -1,    58,    14,    19,
      -1,    -1,     6,    24,    59,    -1,     6,    -1,    61,    -1,
      47,    61,    -1,    31,    62,    37,    -1,    63,    -1,    62,
       7,    63,    -1,    -1,    74,    -1,    75,    -1,    85,    -1,
      86,    -1,    87,    -1,    65,    -1,    64,    24,    65,    -1,
      66,    -1,    66,    11,    68,    -1,     6,    -1,     6,    67,
      -1,    14,    19,    -1,    67,    14,    19,    -1,    77,    -1,
      69,    -1,    71,    -1,    31,    70,    37,    -1,    68,    -1,
      70,    24,    68,    -1,    13,    72,    -1,    72,    73,    -1,
      73,    -1,    14,    77,    19,    -1,    83,     4,    77,    -1,
      83,    15,    76,    20,    -1,    77,    -1,    77,    24,    76,
      -1,    -1,    81,    -1,    81,    33,    81,    -1,    81,    32,
      81,    -1,    81,    27,    81,    -1,    81,    17,    81,    -1,
      81,    12,    81,    -1,    81,    28,    81,    -1,    80,    -1,
      83,    -1,    75,    -1,    15,    77,    20,    -1,    35,    78,
      -1,    78,    -1,    78,     8,    79,    -1,    78,    25,    79,
      -1,    78,    40,    79,    -1,    29,    -1,    39,    -1,    82,
      -1,    36,    82,    -1,    34,    82,    -1,    79,    -1,    82,
      36,    79,    -1,    82,    34,    79,    -1,    82,    18,    79,
      -1,     6,    -1,     6,    84,    -1,    84,     9,     6,    -1,
       9,     6,    -1,    14,    77,    76,    19,    -1,    84,    14,
      77,    76,    19,    -1,    38,    -1,    38,    77,    -1,    30,
      77,    61,    -1,    86,    26,    30,    77,    61,    -1,    86,
      26,    61,    -1,    22,    77,    61,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    29,    29,    35,    39,    45,    52,    56,    60,    66,
      71,    77,    82,    86,    93,    97,   105,   108,   114,   120,
     129,   136,   140,   144,   152,   155,   159,   165,   169,   173,
     177,   181,   185,   191,   195,   199,   203,   207,   211,   218,
     223,   228,   233,   238,   242,   246,   251,   257,   261,   266,
     271,   276,   283,   287,   293,   298,   302,   311,   314,   318,
     322,   326,   330,   336,   340,   346,   355,   365,   369,   375,
     379,   384,   388,   391,   397,   402,   406,   413,   418,   422,
     428,   434,   439,   444,   448,   453,   458,   462,   466,   470,
     474,   478,   482,   488,   492,   496,   500,   504,   510,   514,
     518,   522,   529,   533,   539,   543,   547,   553,   557,   561,
     565,   572,   576,   582,   586,   591,   595,   603,   607,   613,
     617,   621,   635
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "EOFnum", "error", "$undefined", "DECLARATIONSnum", "ASSGNnum",
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
  "IfStatement", "WhileStatement", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    46,    46,    46,    47,
      47,    48,    48,    48,    49,    49,    50,    50,    51,    51,
      52,    53,    53,    53,    54,    54,    54,    55,    55,    55,
      55,    55,    55,    56,    56,    56,    56,    56,    56,    57,
      57,    57,    57,    57,    57,    57,    57,    58,    58,    58,
      59,    59,    60,    60,    61,    62,    62,    63,    63,    63,
      63,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    69,    70,    70,    71,    72,    72,
      73,    74,    75,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    78,    78,    78,    79,    79,
      79,    79,    80,    80,    81,    81,    81,    82,    82,    82,
      82,    83,    83,    84,    84,    84,    84,    85,    85,    86,
      86,    86,    87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     1,     3,     3,     2,     4,     3,
       0,     0,     2,     1,     2,     1,     0,     1,     7,     7,
       3,     0,     1,     1,     0,     1,     1,     3,     5,     5,
       5,     7,     7,     2,     4,     4,     4,     6,     6,     2,
       2,     2,     2,     4,     4,     1,     1,     2,     3,     0,
       3,     1,     1,     2,     3,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     2,     2,
       3,     1,     1,     1,     3,     1,     3,     2,     2,     1,
       3,     3,     4,     1,     3,     0,     1,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     3,     2,     1,     3,
       3,     3,     1,     1,     1,     2,     2,     1,     3,     3,
       3,     1,     2,     3,     2,     4,     5,     1,     2,     3,
       5,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     2,     4,     0,
       3,    10,     5,    11,     7,     0,    45,    46,     0,    13,
       0,     0,     6,     0,    15,    17,     0,    42,    40,    41,
      39,     9,    12,    67,     0,    63,    65,     0,     0,     8,
      14,    47,     0,     0,     0,     0,     0,    68,    20,     0,
       0,     0,     0,    43,    48,    70,    44,    69,    64,   111,
       0,     0,   102,     0,     0,     0,     0,   103,    66,    72,
      73,    95,    71,    98,   107,    93,    86,   104,    94,    21,
      24,     0,     0,   112,     0,    77,    79,     0,    75,     0,
     106,    97,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,     0,    22,
      23,     0,    25,    26,   114,    85,     0,     0,     0,    78,
      96,     0,    74,    99,   100,   101,    91,    90,    89,    92,
      88,    87,   110,   109,   108,     0,    83,    33,     0,     0,
       0,     0,   113,    85,    80,    76,    82,    85,     0,     0,
      27,    57,     0,    18,    52,    19,   115,     0,    84,    34,
      35,    51,    36,     0,     0,     0,     0,   117,     0,    55,
      58,    59,     0,    60,    61,    62,    53,   116,     0,     0,
      28,    29,    30,     0,     0,   118,    57,    54,     0,     0,
      50,    38,    37,     0,   122,   119,    56,    81,     0,   121,
      31,    32,     0,   120
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

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -149
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

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,   166,  -149,   165,  -149,  -149,  -149,   162,
     168,  -149,  -149,   -79,   -75,    53,   163,  -108,    35,  -148,
    -149,   -20,  -149,   129,  -149,    -5,   -61,  -149,  -149,  -149,
    -149,    97,  -149,  -144,   -53,   -50,   122,    26,  -149,    36,
     -47,  -143,  -149,  -149,  -149,  -149
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -50
static const yytype_int16 yytable[] =
{
      72,   112,    88,    16,   176,   113,    13,   171,   172,    13,
      17,    87,    30,    72,   186,   188,    93,    90,     1,    92,
      16,     3,    59,     4,    31,    21,   105,    17,    47,    60,
      59,    61,   115,    94,   118,   194,   195,   151,    37,    61,
      14,   199,   171,   172,   187,    62,    22,    63,    95,    59,
      64,    65,    66,    62,   203,    67,   182,     5,    61,    65,
     145,   -49,   141,    67,    21,    59,    26,   143,   106,   159,
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

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 30 "Grammar.y"
    {
	DisplayTree = MakeTree(ProgramOp,(yyvsp[(4) - (4)].tptr),MakeLeaf(IDNode,(yyvsp[(2) - (4)].intg)));
	/*printtree(DisplayTree,0);*/
}
    break;

  case 3:
#line 36 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(ClassOp,(yyvsp[(1) - (2)].tptr),(yyvsp[(2) - (2)].tptr));	
}
    break;

  case 4:
#line 40 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(ClassOp,NullExp(),(yyvsp[(1) - (1)].tptr));
}
    break;

  case 5:
#line 46 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(ClassDefOp,(yyvsp[(3) - (3)].tptr),MakeLeaf(IDNode,(yyvsp[(2) - (3)].intg)));
	/*$$ = MakeTree(ClassDefOp,$2,MakeLeaf(IDNode,$2));*/
}
    break;

  case 6:
#line 53 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(2) - (3)].tptr);
}
    break;

  case 7:
#line 57 "Grammar.y"
    {
	(yyval.tptr) = NullExp();
}
    break;

  case 8:
#line 61 "Grammar.y"
    {
	(yyval.tptr) = MkLeftC((yyvsp[(2) - (4)].tptr),(yyvsp[(3) - (4)].tptr));
}
    break;

  case 9:
#line 67 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(2) - (3)].tptr);
}
    break;

  case 10:
#line 71 "Grammar.y"
    {
	(yyval.tptr) = NullExp();
}
    break;

  case 11:
#line 77 "Grammar.y"
    {
	(yyval.tptr) = NullExp();
	/*in this condition we need to make a tree which has no children, but shows that this FieldDecl  can be a tree */
	/*$$ = MakeTree(BodyOp,NullExp(),NullExp());*/
}
    break;

  case 12:
#line 83 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(BodyOp,(yyvsp[(1) - (2)].tptr),(yyvsp[(2) - (2)].tptr));	
}
    break;

  case 13:
#line 87 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(BodyOp,NullExp(),(yyvsp[(1) - (1)].tptr));	
}
    break;

  case 14:
#line 94 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(BodyOp,(yyvsp[(1) - (2)].tptr),(yyvsp[(2) - (2)].tptr));
}
    break;

  case 15:
#line 98 "Grammar.y"
    {
	/*$$ = MakeTree(BodyOp,NullExp(),$1);	moved to method declloop2*/
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);
}
    break;

  case 16:
#line 105 "Grammar.y"
    {
	(yyval.tptr) = NullExp();	
}
    break;

  case 17:
#line 109 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(BodyOp,NullExp(),(yyvsp[(1) - (1)].tptr));
}
    break;

  case 18:
#line 115 "Grammar.y"
    {
	/*left leaf is a tree of FormalParameterListNoType and right leaf is Block */
	(yyval.tptr) = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,(yyvsp[(3) - (7)].intg)),(yyvsp[(5) - (7)].tptr)),(yyvsp[(7) - (7)].tptr));
	/*$$ = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,$4),MakeTree(SpecOp,$6,type_tree)),$8);*/
}
    break;

  case 19:
#line 121 "Grammar.y"
    {
	/*left leaf is a tree of FormalParameterListWithType and right leaf is Block */
	/*$$ = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,$3),MakeTree(SpecOp,$5,type_tree)),$7);	*/
	(yyval.tptr) = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,(yyvsp[(3) - (7)].intg)),(yyvsp[(5) - (7)].tptr)),(yyvsp[(7) - (7)].tptr));
}
    break;

  case 20:
#line 130 "Grammar.y"
    {
	/* recall FieldDeclLoop many times */
	(yyval.tptr) = (yyvsp[(2) - (3)].tptr);
}
    break;

  case 21:
#line 136 "Grammar.y"
    {
	/*no leaf and end tree here*/
	(yyval.tptr) = MakeTree(SpecOp, NullExp(),NullExp());	
}
    break;

  case 22:
#line 141 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(SpecOp, (yyvsp[(1) - (1)].tptr),NullExp());		
}
    break;

  case 23:
#line 145 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(SpecOp, (yyvsp[(1) - (1)].tptr),NullExp());		
}
    break;

  case 24:
#line 152 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(SpecOp, NullExp(),type_tree);	
}
    break;

  case 25:
#line 156 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(SpecOp, (yyvsp[(1) - (1)].tptr),type_tree);		
}
    break;

  case 26:
#line 160 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(SpecOp, (yyvsp[(1) - (1)].tptr),type_tree);		
}
    break;

  case 27:
#line 166 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[(3) - (3)].intg)), MakeLeaf(INTEGERTNode, INTnum)), NullExp());
}
    break;

  case 28:
#line 170 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[(3) - (5)].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[(5) - (5)].tptr));
}
    break;

  case 29:
#line 174 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[(3) - (5)].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[(5) - (5)].tptr));
}
    break;

  case 30:
#line 178 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[(3) - (5)].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[(5) - (5)].tptr));	
}
    break;

  case 31:
#line 182 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[(3) - (7)].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[(7) - (7)].tptr));
}
    break;

  case 32:
#line 186 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[(3) - (7)].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[(7) - (7)].tptr));
}
    break;

  case 33:
#line 192 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[(2) - (2)].intg)), MakeLeaf(INTEGERTNode, INTnum)), NullExp());	
}
    break;

  case 34:
#line 196 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[(2) - (4)].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[(4) - (4)].tptr));
}
    break;

  case 35:
#line 200 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[(2) - (4)].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[(4) - (4)].tptr));
}
    break;

  case 36:
#line 204 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, (yyvsp[(2) - (4)].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[(4) - (4)].tptr));	
}
    break;

  case 37:
#line 208 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, (yyvsp[(2) - (6)].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[(4) - (6)].tptr)), (yyvsp[(6) - (6)].tptr));
}
    break;

  case 38:
#line 212 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, (yyvsp[(2) - (6)].intg)), MakeLeaf(INTEGERTNode, INTnum)), (yyvsp[(4) - (6)].tptr)), (yyvsp[(6) - (6)].tptr));
}
    break;

  case 39:
#line 219 "Grammar.y"
    {
	type_tree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, (yyvsp[(1) - (2)].intg)), (yyvsp[(2) - (2)].tptr));
	(yyval.tptr) = type_tree;
}
    break;

  case 40:
#line 224 "Grammar.y"
    {
	type_tree = MakeTree(TypeIdOp, MakeLeaf(IDNode, (yyvsp[(1) - (2)].intg)), (yyvsp[(2) - (2)].tptr));
	(yyval.tptr) = type_tree;
}
    break;

  case 41:
#line 229 "Grammar.y"
    {
	type_tree = MakeTree(TypeIdOp,MakeLeaf(INTEGERTNode,(yyvsp[(1) - (2)].intg)),(yyvsp[(2) - (2)].tptr));
	(yyval.tptr) = type_tree;
}
    break;

  case 42:
#line 234 "Grammar.y"
    {
	type_tree = MakeTree(TypeIdOp,MakeLeaf(IDNode,(yyvsp[(1) - (2)].intg)),(yyvsp[(2) - (2)].tptr));
	(yyval.tptr) = type_tree;
}
    break;

  case 43:
#line 239 "Grammar.y"
    {
	(yyval.tptr) = type_tree = MkRightC((yyvsp[(4) - (4)].tptr), MakeTree(TypeIdOp, MakeLeaf(IDNode, (yyvsp[(1) - (4)].intg)), (yyvsp[(2) - (4)].tptr)));
}
    break;

  case 44:
#line 243 "Grammar.y"
    {
	(yyval.tptr) = type_tree = MkRightC((yyvsp[(4) - (4)].tptr), MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, (yyvsp[(1) - (4)].intg)), (yyvsp[(2) - (4)].tptr)));
}
    break;

  case 45:
#line 247 "Grammar.y"
    {
	type_tree = MakeTree(TypeIdOp, MakeLeaf(IDNode, (yyvsp[(1) - (1)].intg)), NullExp());
	(yyval.tptr) = type_tree;
}
    break;

  case 46:
#line 252 "Grammar.y"
    {
	(yyval.tptr) = type_tree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, (yyvsp[(1) - (1)].intg)), NullExp());
}
    break;

  case 47:
#line 258 "Grammar.y"
    {
	(yyval.tptr) = type_tree = MakeTree(IndexOp, NullExp(), NullExp());
}
    break;

  case 48:
#line 262 "Grammar.y"
    {
	(yyval.tptr) = type_tree = MakeTree(IndexOp, NullExp(), (yyvsp[(1) - (3)].tptr));
}
    break;

  case 49:
#line 266 "Grammar.y"
    {
	(yyval.tptr) = type_tree = NullExp();
}
    break;

  case 50:
#line 272 "Grammar.y"
    {
	/* make a loop to continue*/
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode,(yyvsp[(1) - (3)].intg)),MakeLeaf(INTEGERTNode,INTnum)),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 51:
#line 277 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode,(yyvsp[(1) - (1)].intg)),MakeLeaf(INTEGERTNode,INTnum)),NullExp());
}
    break;

  case 52:
#line 284 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(BodyOp,NullExp(),(yyvsp[(1) - (1)].tptr));
}
    break;

  case 53:
#line 288 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(BodyOp,(yyvsp[(1) - (2)].tptr),(yyvsp[(2) - (2)].tptr));
}
    break;

  case 54:
#line 294 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(2) - (3)].tptr);
}
    break;

  case 55:
#line 299 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(StmtOp,NullExp(),(yyvsp[(1) - (1)].tptr));
}
    break;

  case 56:
#line 303 "Grammar.y"
    {
	/*if there is nothing as for statment, then just return StatementLoop. Otherwise, return the whole tree*/
	if((yyvsp[(3) - (3)].tptr) == NullExp()){(yyval.tptr) = (yyvsp[(1) - (3)].tptr);}
	else {(yyval.tptr) = MakeTree(StmtOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));}
}
    break;

  case 57:
#line 311 "Grammar.y"
    {
	(yyval.tptr) = NullExp();	
}
    break;

  case 58:
#line 315 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);
}
    break;

  case 59:
#line 319 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);
}
    break;

  case 60:
#line 323 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);
}
    break;

  case 61:
#line 327 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);
}
    break;

  case 62:
#line 331 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);
}
    break;

  case 63:
#line 337 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(DeclOp,NullExp(),(yyvsp[(1) - (1)].tptr));
}
    break;

  case 64:
#line 341 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(DeclOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 65:
#line 347 "Grammar.y"
    {
	/*in this case we have only VariableDeclId and then ';' */
	/*the right leaf is a tree of CommaOp and type_tree we make general, but there is no left leaf(tree). so I make a CommaOpTree as the right part and just add as the right leaf for the return tree*/
	/*$$ = MakeTree(DeclOp,NullExp(),CommaOpTree);*/
	
	tree CommaOpTree = MakeTree(CommaOp,(yyvsp[(1) - (1)].tptr),MakeTree(CommaOp, type_tree, NullExp()));
	(yyval.tptr) = CommaOpTree;
}
    break;

  case 66:
#line 356 "Grammar.y"
    {
	/*this case is when we have 'variable = variableinitializer' */
	/*the right leaf is again a tree but in its right leaf there should not be null but 3rd argumet, this time we got variableInitalizer as the leaf */
	tree CommaOpTree = MakeTree(CommaOp,(yyvsp[(1) - (3)].tptr),MakeTree(CommaOp, type_tree,(yyvsp[(3) - (3)].tptr)));
	/*$$ = MakeTree(DeclOp,NullExp(),CommaOpTree);*/
	(yyval.tptr) = CommaOpTree;
}
    break;

  case 67:
#line 366 "Grammar.y"
    {
	(yyval.tptr) = MakeLeaf(IDNode,(yyvsp[(1) - (1)].intg));
}
    break;

  case 68:
#line 370 "Grammar.y"
    {
	(yyval.tptr) = MakeLeaf(IDNode,(yyvsp[(1) - (2)].intg));
}
    break;

  case 69:
#line 376 "Grammar.y"
    {
	(yyval.tptr) = (yyval.tptr);	
}
    break;

  case 70:
#line 380 "Grammar.y"
    {
	(yyval.tptr) = (yyval.tptr);	
}
    break;

  case 71:
#line 385 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);	
}
    break;

  case 72:
#line 389 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);	
}
    break;

  case 73:
#line 392 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);	
}
    break;

  case 74:
#line 398 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(ArrayTypeOp,(yyvsp[(2) - (3)].tptr),type_tree);	
}
    break;

  case 75:
#line 403 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(CommaOp,NullExp(),(yyvsp[(1) - (1)].tptr));
}
    break;

  case 76:
#line 407 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(CommaOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 77:
#line 414 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(ArrayTypeOp, (yyvsp[(2) - (2)].tptr), MakeLeaf(INTEGERTNode,(yyvsp[(1) - (2)].intg)));	
}
    break;

  case 78:
#line 419 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(BoundOp,(yyvsp[(1) - (2)].tptr),(yyvsp[(2) - (2)].tptr));
}
    break;

  case 79:
#line 423 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(BoundOp,NullExp(),(yyvsp[(1) - (1)].tptr));	
}
    break;

  case 80:
#line 429 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(2) - (3)].tptr);
}
    break;

  case 81:
#line 435 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(AssignOp,MakeTree(AssignOp,NullExp(),(yyvsp[(1) - (3)].tptr)),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 82:
#line 440 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(RoutineCallOp,(yyvsp[(1) - (4)].tptr),(yyvsp[(3) - (4)].tptr));
}
    break;

  case 83:
#line 445 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(CommaOp,(yyvsp[(1) - (1)].tptr),NullExp());	
}
    break;

  case 84:
#line 449 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(CommaOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));		
}
    break;

  case 85:
#line 453 "Grammar.y"
    {
	(yyval.tptr) = NullExp();		
}
    break;

  case 86:
#line 459 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);
}
    break;

  case 87:
#line 463 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(LTOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 88:
#line 467 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(LEOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));	
}
    break;

  case 89:
#line 471 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(EQOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 90:
#line 475 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(NEOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 91:
#line 479 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(GTOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 92:
#line 483 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(GEOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 93:
#line 489 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);
}
    break;

  case 94:
#line 493 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);	
}
    break;

  case 95:
#line 497 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);
}
    break;

  case 96:
#line 501 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(2) - (3)].tptr);
}
    break;

  case 97:
#line 505 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(NotOp,(yyvsp[(2) - (2)].tptr),NullExp());
}
    break;

  case 98:
#line 511 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);	
}
    break;

  case 99:
#line 515 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(AndOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 100:
#line 519 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(DivOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));	
}
    break;

  case 101:
#line 523 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(MultOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 102:
#line 530 "Grammar.y"
    {
	(yyval.tptr) = MakeLeaf(NUMNode,(yyvsp[(1) - (1)].intg));
}
    break;

  case 103:
#line 534 "Grammar.y"
    {
	(yyval.tptr) = MakeLeaf(STRINGNode,(yyvsp[(1) - (1)].intg));
}
    break;

  case 104:
#line 540 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);
}
    break;

  case 105:
#line 544 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(2) - (2)].tptr);
}
    break;

  case 106:
#line 548 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(UnaryNegOp,(yyvsp[(2) - (2)].tptr),NullExp());
}
    break;

  case 107:
#line 554 "Grammar.y"
    {
	(yyval.tptr) = (yyvsp[(1) - (1)].tptr);
}
    break;

  case 108:
#line 558 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(AddOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 109:
#line 562 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(SubOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));	
}
    break;

  case 110:
#line 566 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(OrOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 111:
#line 573 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(VarOp, MakeLeaf(IDNode, (yyvsp[(1) - (1)].intg)), NullExp());
}
    break;

  case 112:
#line 577 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(VarOp, MakeLeaf(IDNode, (yyvsp[(1) - (2)].intg)), (yyvsp[(2) - (2)].tptr));	
}
    break;

  case 113:
#line 583 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, (yyvsp[(2) - (3)].intg)), NullExp()), (yyvsp[(1) - (3)].tptr));
}
    break;

  case 114:
#line 587 "Grammar.y"
    {
	/*printf("point0");*/
	(yyval.tptr) = MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, (yyvsp[(2) - (2)].intg)), NullExp()), NullExp());
}
    break;

  case 115:
#line 592 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(SelectOp, MakeTree(IndexOp, (yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr)), NullExp());
}
    break;

  case 116:
#line 596 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(SelectOp, MakeTree(IndexOp, (yyvsp[(3) - (5)].tptr), (yyvsp[(4) - (5)].tptr)), (yyvsp[(1) - (5)].tptr));
}
    break;

  case 117:
#line 604 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(ReturnOp,NullExp(),NullExp());
}
    break;

  case 118:
#line 608 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(ReturnOp,(yyvsp[(2) - (2)].tptr),NullExp());	
}
    break;

  case 119:
#line 614 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(IfElseOp,NullExp(),MakeTree(CommaOp,(yyvsp[(2) - (3)].tptr),(yyvsp[(3) - (3)].tptr)));
}
    break;

  case 120:
#line 618 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(IfElseOp,(yyvsp[(1) - (5)].tptr),MakeTree(CommaOp,(yyvsp[(4) - (5)].tptr),(yyvsp[(5) - (5)].tptr)));
}
    break;

  case 121:
#line 622 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(IfElseOp,(yyvsp[(1) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;

  case 122:
#line 636 "Grammar.y"
    {
	(yyval.tptr) = MakeTree(LoopOp,(yyvsp[(2) - (3)].tptr),(yyvsp[(3) - (3)].tptr));
}
    break;


/* Line 1267 of yacc.c.  */
#line 2476 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 640 "Grammar.y"



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE *treelst;	
//extern FILE *yyin;
//extern char* yytext;


yyerror(char *str)
{
	printf("yerror: %s at line %d and Column %d\n ",str,lineNumber,columnNumber);
}
#include "lex.yy.c"

