#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20070509

#define YYEMPTY (-1)
#define yyclearin    (yychar = YYEMPTY)
#define yyerrok      (yyerrflag = 0)
#define YYRECOVERING (yyerrflag != 0)

extern int yyparse(void);

static int yygrowstack(void);
#define YYPREFIX "yy"
#line 1 "Grammar.y"
 /*Definition*/
#include "proj2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*#include "tokens.h"*/
int lineNumber,columnNumber;
int yydebug=1; 
int error = 0;
tree temp_tree1, temp_tree2, type_tree, DisplayTree; /* defined two tree variable for temporary usage*/
#line 34 "y.tab.c"
#define DECLARATIONSnum 257
#define ASSGNnum 258
#define PROGRAMnum 259
#define IDnum 260
#define SEMInum 261
#define ANDnum 262
#define DOTnum 263
#define ENDDECLARATIONSnum 264
#define EQUALnum 265
#define GTnum 266
#define INTnum 267
#define LBRACnum 268
#define LPARENnum 269
#define METHODnum 270
#define NEnum 271
#define ORnum 272
#define RBRACnum 273
#define RPARENnum 274
#define VALnum 275
#define WHILEnum 276
#define CLASSnum 277
#define COMMAnum 278
#define DIVIDEnum 279
#define ELSEnum 280
#define EQnum 281
#define GEnum 282
#define ICONSTnum 283
#define IFnum 284
#define LBRACEnum 285
#define LEnum 286
#define LTnum 287
#define MINUSnum 288
#define NOTnum 289
#define PLUSnum 290
#define RBRACEnum 291
#define RETURNnum 292
#define SCONSTnum 293
#define TIMESnum 294
#define VOIDnum 295
#define EOFnum 0
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    2,    2,    1,    3,    3,    3,    4,    4,   44,
   44,   44,    9,    9,   39,   39,    6,    6,    5,   22,
   22,   22,   23,   23,   23,   20,   20,   20,   20,   20,
   20,   19,   19,   19,   19,   19,   19,    7,    7,    7,
    7,    7,    7,    7,    7,   25,   25,   25,   21,   21,
    8,    8,   24,   26,   26,   27,   27,   27,   27,   27,
   27,   42,   42,   10,   10,   11,   11,   13,   13,   12,
   12,   12,   15,   17,   17,   16,   18,   18,   43,   28,
   41,   37,   37,   37,   14,   14,   14,   14,   14,   14,
   14,   35,   35,   35,   35,   35,   34,   34,   34,   34,
   36,   36,   32,   32,   32,   33,   33,   33,   33,   31,
   31,   38,   38,   38,   38,   29,   29,   30,   30,   30,
   40,
};
short yylen[] = {                                         2,
    4,    2,    1,    3,    3,    2,    4,    3,    0,    0,
    2,    1,    2,    1,    0,    1,    7,    7,    3,    0,
    1,    1,    0,    1,    1,    3,    5,    5,    5,    7,
    7,    2,    4,    4,    4,    6,    6,    2,    2,    2,
    2,    4,    4,    1,    1,    2,    3,    0,    3,    1,
    1,    2,    3,    1,    3,    0,    1,    1,    1,    1,
    1,    1,    3,    1,    3,    1,    2,    2,    3,    1,
    1,    1,    3,    1,    3,    2,    2,    1,    3,    3,
    4,    1,    3,    0,    1,    3,    3,    3,    3,    3,
    3,    1,    1,    1,    3,    2,    1,    3,    3,    3,
    1,    1,    1,    2,    2,    1,    3,    3,    3,    1,
    2,    3,    2,    4,    5,    1,    2,    3,    5,    3,
    3,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,    3,    0,    0,    2,    0,
    4,    0,    6,    0,    0,    0,   12,    0,    0,    0,
    5,   16,    0,   14,    0,    0,    0,    0,    0,    0,
   62,    0,    0,    8,   11,    0,    0,    7,   13,   46,
    0,    0,    0,    0,    0,    0,    0,   19,    0,    0,
    0,   69,   42,   47,   43,   68,    0,    0,    0,  101,
    0,    0,    0,    0,  102,   65,   70,   71,   72,    0,
    0,    0,  106,    0,   92,   94,   63,    0,    0,    0,
    0,    0,    0,    0,   78,    0,   74,    0,    0,   96,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   22,   21,    0,   25,
   24,    0,  113,    0,    0,    0,    0,   77,   95,    0,
   73,    0,    0,   90,   89,   88,   91,   87,   86,  109,
  108,  107,   98,   99,  100,    0,    0,    0,    0,    0,
  112,    0,   79,   75,    0,   81,    0,    0,    0,    0,
    0,   17,   51,   18,  114,    0,   83,   34,   33,    0,
    0,    0,    0,    0,    0,    0,    0,   54,   57,   59,
    0,    0,   61,   58,   52,  115,    0,    0,   28,   27,
    0,    0,    0,  117,    0,   53,    0,    0,   49,   36,
   37,    0,  121,  118,   55,    0,  120,   80,   31,   30,
    0,  119,
};
short yydgoto[] = {                                       2,
    6,    7,   11,  151,   17,   22,   18,  152,   23,   31,
   32,   66,   26,  122,   68,   69,   88,   84,  107,  108,
  161,  109,  112,  153,   27,  167,  168,  169,  170,  171,
   70,   71,   72,   73,   74,   75,  123,   82,   24,  173,
   76,   33,   85,   19,
};
short yysindex[] = {                                   -195,
 -245,    0, -193, -203, -162,    0, -203, -177,    0, -250,
    0,  -90,    0, -265, -111, -111,    0, -127,  -25, -256,
    0,    0, -209,    0, -101,  -67,  -51,  -67,  -34,  -55,
    0,  -58, -202,    0,    0,  -39,  -20,    0,    0,    0,
  -69,  -90,  -22,  -90,  -17,  -67, -238,    0, -127,  -21,
   -5,    0,    0,    0,    0,    0,  -19,    1, -179,    0,
 -238,   47,   47,   47,    0,    0,    0,    0,    0,   -1,
   87, -148,    0, -159,    0,    0,    0,  -61,  -61,   10,
 -179,  -16, -179,    1,    0,   -3,    0, -268,    2,    0,
    2, -179, -179, -179, -179, -179, -179, -179,   47,   47,
   47,   47,   47,   47,   13,    9,    0,    0,    4,    0,
    0,    7,    0, -179,   22, -179,   12,    0,    0, -238,
    0,    8,   16,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -156,   23, -232, -232,   25,
    0, -179,    0,    0, -179,    0,  -61,   42, -149, -244,
   18,    0,    0,    0,    0,   31,    0,    0,    0,   27,
   49,  -61,   42, -179, -179, -179, -237,    0,    0,    0,
   28,  -64,    0,    0,    0,    0,   42,  -61,    0,    0,
   51,   18,   18,    0, -244,    0, -118, -179,    0,    0,
    0,  -61,    0,    0,    0, -179,    0,    0,    0,    0,
   18,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,  315,    0,    0,   50,
    0,   53,    0,    0, -198,  -81,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   59,   64,   68,   72, -248,
    0,  -92,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -100,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -135,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -63,
   74,   40,    0, -194,    0,    0,    0,   63,   65,    0,
    0,  -98,    0, -178,    0,    0,    0,    0,  -28,    0,
    6,   67,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   69,    0,    0,    0,    0,    0,    0,
    0, -254,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   70,    0,    0,    0,    0,
    0,   69,    0,    0,  -37,    0,    0,    0,   71, -234,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -129,
   75,    0,    0,    0,    0, -233,    0,    0,    0,    0,
 -228,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   76,    0,    0,    0, -234,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
short yygindex[] = {                                      0,
  331,    0,    0,  336,  332,  333,   86,  215,    0,  306,
    0,  -60,    5,  -47,    0,    0,    0,    0,  -77,  -76,
  -56,    0,    0, -145,  344,    0,  176,    0,    0,    0,
 -142,  282,  138,  283,  303,    0,  -96,    0,    0,    0,
 -141,    0,  286,    0,
};
#define YYTABLESIZE 387
short yytable[] = {                                      67,
   87,  110,  111,   15,   20,  175,   12,  172,  174,  120,
   16,   86,   66,   67,    3,   57,   66,  140,   82,   82,
   28,   57,  121,  185,   12,   21,   56,  116,   58,   66,
   59,  164,   60,  114,   46,  117,  193,  194,   36,  165,
   13,  197,  172,  174,   60,  156,   61,  166,  157,   62,
   63,   64,  150,  186,   65,  202,   56,  116,   48,  144,
   20,   44,   60,    1,   48,   97,   97,    4,  142,  158,
  159,   97,   67,    5,   97,   49,   97,   97,   97,   97,
   57,   38,   76,   97,  179,  180,   97,   97,   97,   59,
   97,   97,   97,   97,   97,   97,   97,    8,   97,   76,
  190,  191,  102,   60,  147,   37,  181,   10,   62,   63,
   64,  162,   76,   65,  199,  200,  182,  183,  184,  103,
  189,  148,  110,   99,  110,  110,  110,   53,  163,   55,
  110,   50,   30,  110,  104,  110,  110,  110,  110,  100,
  198,  101,  110,  110,   50,  110,  110,  110,  201,  110,
  110,  110,  110,  110,  110,  110,   25,  110,  110,  111,
   67,  111,  111,  111,   67,  196,  150,  111,   64,   15,
  111,   40,  111,  111,  111,  111,   16,   67,   45,  111,
  111,   48,  111,  111,  111,   64,  111,  111,  111,  111,
  111,  111,  111,  188,  111,  111,   93,   93,   93,   89,
   41,   91,   93,   52,   92,  105,   47,   93,   93,   93,
   93,   42,   45,  106,   93,   93,   43,   93,   93,   93,
   50,   93,   93,   93,   93,   93,   93,   93,   44,   93,
   93,  105,  105,   43,   15,   84,   84,  105,   34,   51,
  105,   16,  105,   80,  105,  105,  115,   78,   81,  105,
   54,  116,  105,  105,  105,   56,  105,  105,  105,  105,
  105,  105,  105,   79,  105,  104,  104,   92,   83,  113,
  119,  104,  136,   99,  104,  137,  104,  138,  104,  104,
  139,  141,  149,  104,  143,  145,  104,  104,  104,  146,
  104,  104,  104,  104,  104,  104,  104,  155,  104,  103,
  103,  160,  150,  176,  177,  103,   57,  187,  103,  178,
  103,  192,  103,  103,    1,   59,   10,  103,   39,    9,
  103,  103,  103,   41,  103,  103,  103,   38,  103,   60,
  103,   40,  103,   85,   85,   63,   20,    9,   23,   65,
   84,   84,   85,   32,   26,   14,   85,   85,   35,   29,
   35,   85,   93,  154,   77,   39,   85,   94,   85,   29,
  195,   85,   85,   85,   85,   90,   85,   95,   96,  118,
    0,    0,   97,   98,  124,  125,  126,  127,  128,  129,
    0,  130,  131,  132,  133,  134,  135,
};
short yycheck[] = {                                      47,
   61,   79,   79,  260,  270,  151,  257,  150,  150,  278,
  267,   59,  261,   61,  260,  260,  265,  114,  273,  274,
   16,  260,  291,  261,  257,  291,  261,  261,  267,  278,
  269,  276,  261,   81,   30,   83,  182,  183,  295,  284,
  291,  187,  185,  185,  283,  142,  285,  292,  145,  288,
  289,  290,  285,  291,  293,  201,  291,  291,  261,  120,
  270,  260,  291,  259,  263,  260,  261,  261,  116,  147,
  147,  266,  120,  277,  269,  278,  271,  272,  273,  274,
  260,  291,  261,  278,  162,  162,  281,  282,  283,  269,
  285,  286,  287,  288,  289,  290,  291,  260,  293,  278,
  178,  178,  262,  283,  261,   20,  163,  285,  288,  289,
  290,  261,  291,  293,  192,  192,  164,  165,  166,  279,
  177,  278,  258,  272,  260,  261,  262,   42,  278,   44,
  266,  261,  260,  269,  294,  271,  272,  273,  274,  288,
  188,  290,  278,  279,  274,  281,  282,  283,  196,  285,
  286,  287,  288,  289,  290,  291,  268,  293,  294,  258,
  261,  260,  261,  262,  265,  284,  285,  266,  261,  260,
  269,  273,  271,  272,  273,  274,  267,  278,  260,  278,
  279,  263,  281,  282,  283,  278,  285,  286,  287,  288,
  289,  290,  291,  258,  293,  294,  260,  261,  262,   62,
  268,   64,  266,  273,  269,  267,  265,  271,  272,  273,
  274,  263,  268,  275,  278,  279,  268,  281,  282,  283,
  260,  285,  286,  287,  288,  289,  290,  291,  263,  293,
  294,  260,  261,  268,  260,  273,  274,  266,  264,  260,
  269,  267,  271,  263,  273,  274,  263,  269,  268,  278,
  273,  268,  281,  282,  283,  273,  285,  286,  287,  288,
  289,  290,  291,  269,  293,  260,  261,  269,  268,  260,
  274,  266,  260,  272,  269,  267,  271,  274,  273,  274,
  274,  260,  260,  278,  273,  278,  281,  282,  283,  274,
  285,  286,  287,  288,  289,  290,  291,  273,  293,  260,
  261,  260,  285,  273,  278,  266,  260,  280,  269,  261,
  271,  261,  273,  274,    0,  269,  264,  278,  260,  270,
  281,  282,  283,  260,  285,  286,  287,  260,  289,  283,
  291,  260,  293,  260,  261,  289,  274,    7,  274,  293,
  274,  273,  269,  274,  274,   10,  273,  274,  274,  274,
   19,  278,  266,  139,   49,   23,  283,  271,  285,   16,
  185,  288,  289,  290,  291,   63,  293,  281,  282,   84,
   -1,   -1,  286,  287,   93,   94,   95,   96,   97,   98,
   -1,   99,  100,  101,  102,  103,  104,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 295
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"DECLARATIONSnum","ASSGNnum",
"PROGRAMnum","IDnum","SEMInum","ANDnum","DOTnum","ENDDECLARATIONSnum",
"EQUALnum","GTnum","INTnum","LBRACnum","LPARENnum","METHODnum","NEnum","ORnum",
"RBRACnum","RPARENnum","VALnum","WHILEnum","CLASSnum","COMMAnum","DIVIDEnum",
"ELSEnum","EQnum","GEnum","ICONSTnum","IFnum","LBRACEnum","LEnum","LTnum",
"MINUSnum","NOTnum","PLUSnum","RBRACEnum","RETURNnum","SCONSTnum","TIMESnum",
"VOIDnum",
};
char *yyrule[] = {
"$accept : Program",
"Program : PROGRAMnum IDnum SEMInum ClassDeclLoop",
"ClassDeclLoop : ClassDeclLoop ClassDecl",
"ClassDeclLoop : ClassDecl",
"ClassDecl : CLASSnum IDnum ClassBody",
"ClassBody : LBRACEnum Decls RBRACEnum",
"ClassBody : LBRACEnum RBRACEnum",
"ClassBody : LBRACEnum Decls MethodDeclLoop RBRACEnum",
"Decls : DECLARATIONSnum DeclsLoop ENDDECLARATIONSnum",
"Decls :",
"DeclsLoop :",
"DeclsLoop : DeclsLoop FieldDecl",
"DeclsLoop : FieldDecl",
"MethodDeclLoop : MethodDeclLoop MethodDecl",
"MethodDeclLoop : MethodDeclLoop2",
"MethodDeclLoop2 :",
"MethodDeclLoop2 : MethodDecl",
"MethodDecl : METHODnum VOIDnum IDnum LPARENnum FormalParameterListNoType RPARENnum Block",
"MethodDecl : METHODnum Type IDnum LPARENnum FormalParameterListWithType RPARENnum Block",
"FieldDecl : Type FieldDeclInner SEMInum",
"FormalParameterListNoType :",
"FormalParameterListNoType : FormalParameterListLoopWithVal",
"FormalParameterListNoType : FormalParameterListLoopNoVal",
"FormalParameterListWithType :",
"FormalParameterListWithType : FormalParameterListLoopWithVal",
"FormalParameterListWithType : FormalParameterListLoopNoVal",
"FormalParameterListLoopWithVal : VALnum INTnum IDnum",
"FormalParameterListLoopWithVal : VALnum INTnum IDnum SEMInum FormalParameterListLoopWithVal",
"FormalParameterListLoopWithVal : VALnum INTnum IDnum SEMInum FormalParameterListLoopNoVal",
"FormalParameterListLoopWithVal : VALnum INTnum IDnum COMMAnum ValLoop",
"FormalParameterListLoopWithVal : VALnum INTnum IDnum COMMAnum ValLoop SEMInum FormalParameterListLoopWithVal",
"FormalParameterListLoopWithVal : VALnum INTnum IDnum COMMAnum ValLoop SEMInum FormalParameterListLoopNoVal",
"FormalParameterListLoopNoVal : INTnum IDnum",
"FormalParameterListLoopNoVal : INTnum IDnum SEMInum FormalParameterListLoopWithVal",
"FormalParameterListLoopNoVal : INTnum IDnum SEMInum FormalParameterListLoopNoVal",
"FormalParameterListLoopNoVal : INTnum IDnum COMMAnum ValLoop",
"FormalParameterListLoopNoVal : INTnum IDnum COMMAnum ValLoop SEMInum FormalParameterListLoopNoVal",
"FormalParameterListLoopNoVal : INTnum IDnum COMMAnum ValLoop SEMInum FormalParameterListLoopWithVal",
"Type : INTnum BrackLoop",
"Type : IDnum BrackLoop",
"Type : INTnum TypeList",
"Type : IDnum TypeList",
"Type : IDnum TypeList DOTnum Type",
"Type : INTnum TypeList DOTnum Type",
"Type : IDnum",
"Type : INTnum",
"TypeList : LBRACnum RBRACnum",
"TypeList : TypeList LBRACnum RBRACnum",
"TypeList :",
"ValLoop : IDnum COMMAnum ValLoop",
"ValLoop : IDnum",
"Block : StatementList",
"Block : Decls StatementList",
"StatementList : LBRACEnum StatementLoop RBRACEnum",
"StatementLoop : Statement",
"StatementLoop : StatementLoop SEMInum Statement",
"Statement :",
"Statement : AssignmentStatement",
"Statement : MethodCallStatement",
"Statement : ReturnStatement",
"Statement : IfStatement",
"Statement : WhileStatement",
"FieldDeclInner : FieldDeclLoop2",
"FieldDeclInner : FieldDeclInner COMMAnum FieldDeclLoop2",
"FieldDeclLoop2 : VariableDeclId",
"FieldDeclLoop2 : VariableDeclId EQUALnum VariableInitializer",
"VariableDeclId : IDnum",
"VariableDeclId : IDnum BrackLoop",
"BrackLoop : LBRACnum RBRACnum",
"BrackLoop : BrackLoop LBRACnum RBRACnum",
"VariableInitializer : Expression",
"VariableInitializer : ArrayIntializer",
"VariableInitializer : ArrayCreationExpression",
"ArrayIntializer : LBRACEnum VariableInitializerLoop RBRACEnum",
"VariableInitializerLoop : VariableInitializer",
"VariableInitializerLoop : VariableInitializerLoop COMMAnum VariableInitializer",
"ArrayCreationExpression : INTnum ArrayCreationExpressionLoop",
"ArrayCreationExpressionLoop : ArrayCreationExpressionLoop ArrayCreationExpressionLoop2",
"ArrayCreationExpressionLoop : ArrayCreationExpressionLoop2",
"ArrayCreationExpressionLoop2 : LBRACnum Expression RBRACnum",
"AssignmentStatement : Variable ASSGNnum Expression",
"MethodCallStatement : Variable LPARENnum ExpressionLoop RPARENnum",
"ExpressionLoop : Expression",
"ExpressionLoop : Expression COMMAnum ExpressionLoop",
"ExpressionLoop :",
"Expression : SimpleExpression",
"Expression : SimpleExpression LTnum SimpleExpression",
"Expression : SimpleExpression LEnum SimpleExpression",
"Expression : SimpleExpression EQnum SimpleExpression",
"Expression : SimpleExpression NEnum SimpleExpression",
"Expression : SimpleExpression GTnum SimpleExpression",
"Expression : SimpleExpression GEnum SimpleExpression",
"Factor : UnsignedConstant",
"Factor : Variable",
"Factor : MethodCallStatement",
"Factor : LPARENnum Expression RPARENnum",
"Factor : NOTnum Factor",
"Term : Factor",
"Term : Factor ANDnum Term",
"Term : Factor DIVIDEnum Term",
"Term : Factor TIMESnum Term",
"UnsignedConstant : ICONSTnum",
"UnsignedConstant : SCONSTnum",
"SimpleExpression : SimpleExpressionList",
"SimpleExpression : PLUSnum SimpleExpressionList",
"SimpleExpression : MINUSnum SimpleExpressionList",
"SimpleExpressionList : Term",
"SimpleExpressionList : SimpleExpressionList PLUSnum Term",
"SimpleExpressionList : SimpleExpressionList MINUSnum Term",
"SimpleExpressionList : SimpleExpressionList ORnum Term",
"Variable : IDnum",
"Variable : IDnum VariableLoop",
"VariableLoop : VariableLoop DOTnum IDnum",
"VariableLoop : DOTnum IDnum",
"VariableLoop : LBRACnum Expression ExpressionLoop RBRACnum",
"VariableLoop : VariableLoop LBRACnum Expression ExpressionLoop RBRACnum",
"ReturnStatement : RETURNnum",
"ReturnStatement : RETURNnum Expression",
"IfStatement : IFnum Expression StatementList",
"IfStatement : IfStatement ELSEnum IFnum Expression StatementList",
"IfStatement : IfStatement ELSEnum StatementList",
"WhileStatement : WHILEnum Expression StatementList",
};
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static int      yystacksize;
#line 641 "Grammar.y"


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
#line 469 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse(void)
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

#ifdef lint
    goto yyerrlab;
#endif

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yyvsp[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 30 "Grammar.y"
{
	DisplayTree = MakeTree(ProgramOp,yyvsp[0].tptr,MakeLeaf(IDNode,yyvsp[-2].intg));
	/*printtree(DisplayTree,0);*/
}
break;
case 2:
#line 36 "Grammar.y"
{
	yyval.tptr = MakeTree(ClassOp,yyvsp[-1].tptr,yyvsp[0].tptr);	
}
break;
case 3:
#line 40 "Grammar.y"
{
	yyval.tptr = MakeTree(ClassOp,NullExp(),yyvsp[0].tptr);
}
break;
case 4:
#line 46 "Grammar.y"
{
	yyval.tptr = MakeTree(ClassDefOp,yyvsp[0].tptr,MakeLeaf(IDNode,yyvsp[-1].intg));
	/*$$ = MakeTree(ClassDefOp,$2,MakeLeaf(IDNode,$2));*/
}
break;
case 5:
#line 53 "Grammar.y"
{
	yyval.tptr = yyvsp[-1].tptr;
}
break;
case 6:
#line 57 "Grammar.y"
{
	yyval.tptr = NullExp();
}
break;
case 7:
#line 61 "Grammar.y"
{
	yyval.tptr = MkLeftC(yyvsp[-2].tptr,yyvsp[-1].tptr);
}
break;
case 8:
#line 67 "Grammar.y"
{
	yyval.tptr = yyvsp[-1].tptr;
}
break;
case 9:
#line 71 "Grammar.y"
{
	yyval.tptr = NullExp();
}
break;
case 10:
#line 77 "Grammar.y"
{
	yyval.tptr = NullExp();
	/*in this condition we need to make a tree which has no children, but shows that this FieldDecl  can be a tree */
	/*$$ = MakeTree(BodyOp,NullExp(),NullExp());*/
}
break;
case 11:
#line 83 "Grammar.y"
{
	yyval.tptr = MakeTree(BodyOp,yyvsp[-1].tptr,yyvsp[0].tptr);	
}
break;
case 12:
#line 87 "Grammar.y"
{
	yyval.tptr = MakeTree(BodyOp,NullExp(),yyvsp[0].tptr);	
}
break;
case 13:
#line 94 "Grammar.y"
{
	yyval.tptr = MakeTree(BodyOp,yyvsp[-1].tptr,yyvsp[0].tptr);
}
break;
case 14:
#line 98 "Grammar.y"
{
	/*$$ = MakeTree(BodyOp,NullExp(),$1);	moved to method declloop2*/
	yyval.tptr = yyvsp[0].tptr;
}
break;
case 15:
#line 105 "Grammar.y"
{
	yyval.tptr = NullExp();	
}
break;
case 16:
#line 109 "Grammar.y"
{
	yyval.tptr = MakeTree(BodyOp,NullExp(),yyvsp[0].tptr);
}
break;
case 17:
#line 115 "Grammar.y"
{
	/*left leaf is a tree of FormalParameterListNoType and right leaf is Block */
	yyval.tptr = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,yyvsp[-4].intg),yyvsp[-2].tptr),yyvsp[0].tptr);
	/*$$ = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,$4),MakeTree(SpecOp,$6,type_tree)),$8);*/
}
break;
case 18:
#line 121 "Grammar.y"
{
	/*left leaf is a tree of FormalParameterListWithType and right leaf is Block */
	/*$$ = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,$3),MakeTree(SpecOp,$5,type_tree)),$7);	*/
	yyval.tptr = MakeTree(MethodOp,MakeTree(HeadOp,MakeLeaf(IDNode,yyvsp[-4].intg),yyvsp[-2].tptr),yyvsp[0].tptr);
}
break;
case 19:
#line 130 "Grammar.y"
{
	/* recall FieldDeclLoop many times */
	yyval.tptr = yyvsp[-1].tptr;
}
break;
case 20:
#line 136 "Grammar.y"
{
	/*no leaf and end tree here*/
	yyval.tptr = MakeTree(SpecOp, NullExp(),NullExp());	
}
break;
case 21:
#line 141 "Grammar.y"
{
	yyval.tptr = MakeTree(SpecOp, yyvsp[0].tptr,NullExp());		
}
break;
case 22:
#line 145 "Grammar.y"
{
	yyval.tptr = MakeTree(SpecOp, yyvsp[0].tptr,NullExp());		
}
break;
case 23:
#line 152 "Grammar.y"
{
	yyval.tptr = MakeTree(SpecOp, NullExp(),type_tree);	
}
break;
case 24:
#line 156 "Grammar.y"
{
	yyval.tptr = MakeTree(SpecOp, yyvsp[0].tptr,type_tree);		
}
break;
case 25:
#line 160 "Grammar.y"
{
	yyval.tptr = MakeTree(SpecOp, yyvsp[0].tptr,type_tree);		
}
break;
case 26:
#line 166 "Grammar.y"
{
	yyval.tptr = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, yyvsp[0].intg), MakeLeaf(INTEGERTNode, INTnum)), NullExp());
}
break;
case 27:
#line 170 "Grammar.y"
{
	yyval.tptr = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, yyvsp[-2].intg), MakeLeaf(INTEGERTNode, INTnum)), yyvsp[0].tptr);
}
break;
case 28:
#line 174 "Grammar.y"
{
	yyval.tptr = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, yyvsp[-2].intg), MakeLeaf(INTEGERTNode, INTnum)), yyvsp[0].tptr);
}
break;
case 29:
#line 178 "Grammar.y"
{
	yyval.tptr = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, yyvsp[-2].intg), MakeLeaf(INTEGERTNode, INTnum)), yyvsp[0].tptr);	
}
break;
case 30:
#line 182 "Grammar.y"
{
	yyval.tptr = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, yyvsp[-4].intg), MakeLeaf(INTEGERTNode, INTnum)), yyvsp[0].tptr);
}
break;
case 31:
#line 186 "Grammar.y"
{
	yyval.tptr = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, yyvsp[-4].intg), MakeLeaf(INTEGERTNode, INTnum)), yyvsp[0].tptr);
}
break;
case 32:
#line 192 "Grammar.y"
{
	yyval.tptr = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, yyvsp[0].intg), MakeLeaf(INTEGERTNode, INTnum)), NullExp());	
}
break;
case 33:
#line 196 "Grammar.y"
{
	yyval.tptr = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, yyvsp[-2].intg), MakeLeaf(INTEGERTNode, INTnum)), yyvsp[0].tptr);
}
break;
case 34:
#line 200 "Grammar.y"
{
	yyval.tptr = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, yyvsp[-2].intg), MakeLeaf(INTEGERTNode, INTnum)), yyvsp[0].tptr);
}
break;
case 35:
#line 204 "Grammar.y"
{
	yyval.tptr = MakeTree(RArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode, yyvsp[-2].intg), MakeLeaf(INTEGERTNode, INTnum)), yyvsp[0].tptr);	
}
break;
case 36:
#line 208 "Grammar.y"
{
	yyval.tptr = MakeTree(VArgTypeOp,MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yyvsp[-4].intg), MakeLeaf(INTEGERTNode, INTnum)), yyvsp[-2].tptr), yyvsp[0].tptr);
}
break;
case 37:
#line 212 "Grammar.y"
{
	yyval.tptr = MakeTree(VArgTypeOp,MakeTree(VArgTypeOp, MakeTree(CommaOp, MakeLeaf(IDNode, yyvsp[-4].intg), MakeLeaf(INTEGERTNode, INTnum)), yyvsp[-2].tptr), yyvsp[0].tptr);
}
break;
case 38:
#line 219 "Grammar.y"
{
	type_tree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yyvsp[-1].intg), yyvsp[0].tptr);
	yyval.tptr = type_tree;
}
break;
case 39:
#line 224 "Grammar.y"
{
	type_tree = MakeTree(TypeIdOp, MakeLeaf(IDNode, yyvsp[-1].intg), yyvsp[0].tptr);
	yyval.tptr = type_tree;
}
break;
case 40:
#line 229 "Grammar.y"
{
	type_tree = MakeTree(TypeIdOp,MakeLeaf(INTEGERTNode,yyvsp[-1].intg),yyvsp[0].tptr);
	yyval.tptr = type_tree;
}
break;
case 41:
#line 234 "Grammar.y"
{
	type_tree = MakeTree(TypeIdOp,MakeLeaf(IDNode,yyvsp[-1].intg),yyvsp[0].tptr);
	yyval.tptr = type_tree;
}
break;
case 42:
#line 239 "Grammar.y"
{
	yyval.tptr = type_tree = MkRightC(yyvsp[0].tptr, MakeTree(TypeIdOp, MakeLeaf(IDNode, yyvsp[-3].intg), yyvsp[-2].tptr));
}
break;
case 43:
#line 243 "Grammar.y"
{
	yyval.tptr = type_tree = MkRightC(yyvsp[0].tptr, MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yyvsp[-3].intg), yyvsp[-2].tptr));
}
break;
case 44:
#line 247 "Grammar.y"
{
	type_tree = MakeTree(TypeIdOp, MakeLeaf(IDNode, yyvsp[0].intg), NullExp());
	yyval.tptr = type_tree;
}
break;
case 45:
#line 252 "Grammar.y"
{
	yyval.tptr = type_tree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yyvsp[0].intg), NullExp());
}
break;
case 46:
#line 258 "Grammar.y"
{
	yyval.tptr = type_tree = MakeTree(IndexOp, NullExp(), NullExp());
}
break;
case 47:
#line 262 "Grammar.y"
{
	yyval.tptr = type_tree = MakeTree(IndexOp, NullExp(), yyvsp[-2].tptr);
}
break;
case 48:
#line 266 "Grammar.y"
{
	yyval.tptr = type_tree = NullExp();
}
break;
case 49:
#line 272 "Grammar.y"
{
	/* make a loop to continue*/
	yyval.tptr = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode,yyvsp[-2].intg),MakeLeaf(INTEGERTNode,INTnum)),yyvsp[0].tptr);
}
break;
case 50:
#line 277 "Grammar.y"
{
	yyval.tptr = MakeTree(VArgTypeOp,MakeTree(CommaOp,MakeLeaf(IDNode,yyvsp[0].intg),MakeLeaf(INTEGERTNode,INTnum)),NullExp());
}
break;
case 51:
#line 284 "Grammar.y"
{
	yyval.tptr = MakeTree(BodyOp,NullExp(),yyvsp[0].tptr);
}
break;
case 52:
#line 288 "Grammar.y"
{
	yyval.tptr = MakeTree(BodyOp,yyvsp[-1].tptr,yyvsp[0].tptr);
}
break;
case 53:
#line 294 "Grammar.y"
{
	yyval.tptr = yyvsp[-1].tptr;
}
break;
case 54:
#line 299 "Grammar.y"
{
	yyval.tptr = MakeTree(StmtOp,NullExp(),yyvsp[0].tptr);
}
break;
case 55:
#line 303 "Grammar.y"
{
	/*if there is nothing as for statment, then just return StatementLoop. Otherwise, return the whole tree*/
	if(yyvsp[0].tptr == NullExp()){yyval.tptr = yyvsp[-2].tptr;}
	else {yyval.tptr = MakeTree(StmtOp,yyvsp[-2].tptr,yyvsp[0].tptr);}
}
break;
case 56:
#line 311 "Grammar.y"
{
	yyval.tptr = NullExp();	
}
break;
case 57:
#line 315 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;
}
break;
case 58:
#line 319 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;
}
break;
case 59:
#line 323 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;
}
break;
case 60:
#line 327 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;
}
break;
case 61:
#line 331 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;
}
break;
case 62:
#line 337 "Grammar.y"
{
	yyval.tptr = MakeTree(DeclOp,NullExp(),yyvsp[0].tptr);
}
break;
case 63:
#line 341 "Grammar.y"
{
	yyval.tptr = MakeTree(DeclOp,yyvsp[-2].tptr,yyvsp[0].tptr);
}
break;
case 64:
#line 347 "Grammar.y"
{
	/*in this case we have only VariableDeclId and then ';' */
	/*the right leaf is a tree of CommaOp and type_tree we make general, but there is no left leaf(tree). so I make a CommaOpTree as the right part and just add as the right leaf for the return tree*/
	/*$$ = MakeTree(DeclOp,NullExp(),CommaOpTree);*/
	
	tree CommaOpTree = MakeTree(CommaOp,yyvsp[0].tptr,MakeTree(CommaOp, type_tree, NullExp()));
	yyval.tptr = CommaOpTree;
}
break;
case 65:
#line 356 "Grammar.y"
{
	/*this case is when we have 'variable = variableinitializer' */
	/*the right leaf is again a tree but in its right leaf there should not be null but 3rd argumet, this time we got variableInitalizer as the leaf */
	tree CommaOpTree = MakeTree(CommaOp,yyvsp[-2].tptr,MakeTree(CommaOp, type_tree,yyvsp[0].tptr));
	/*$$ = MakeTree(DeclOp,NullExp(),CommaOpTree);*/
	yyval.tptr = CommaOpTree;
}
break;
case 66:
#line 366 "Grammar.y"
{
	yyval.tptr = MakeLeaf(IDNode,yyvsp[0].intg);
}
break;
case 67:
#line 370 "Grammar.y"
{
	yyval.tptr = MakeLeaf(IDNode,yyvsp[-1].intg);
}
break;
case 68:
#line 376 "Grammar.y"
{
	yyval.tptr = yyval.tptr;	
}
break;
case 69:
#line 380 "Grammar.y"
{
	yyval.tptr = yyval.tptr;	
}
break;
case 70:
#line 385 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;	
}
break;
case 71:
#line 389 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;	
}
break;
case 72:
#line 392 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;	
}
break;
case 73:
#line 398 "Grammar.y"
{
	yyval.tptr = MakeTree(ArrayTypeOp,yyvsp[-1].tptr,type_tree);	
}
break;
case 74:
#line 403 "Grammar.y"
{
	yyval.tptr = MakeTree(CommaOp,NullExp(),yyvsp[0].tptr);
}
break;
case 75:
#line 407 "Grammar.y"
{
	yyval.tptr = MakeTree(CommaOp,yyvsp[-2].tptr,yyvsp[0].tptr);
}
break;
case 76:
#line 414 "Grammar.y"
{
	yyval.tptr = MakeTree(ArrayTypeOp, yyvsp[0].tptr, MakeLeaf(INTEGERTNode,yyvsp[-1].intg));	
}
break;
case 77:
#line 419 "Grammar.y"
{
	yyval.tptr = MakeTree(BoundOp,yyvsp[-1].tptr,yyvsp[0].tptr);
}
break;
case 78:
#line 423 "Grammar.y"
{
	yyval.tptr = MakeTree(BoundOp,NullExp(),yyvsp[0].tptr);	
}
break;
case 79:
#line 429 "Grammar.y"
{
	yyval.tptr = yyvsp[-1].tptr;
}
break;
case 80:
#line 435 "Grammar.y"
{
	yyval.tptr = MakeTree(AssignOp,MakeTree(AssignOp,NullExp(),yyvsp[-2].tptr),yyvsp[0].tptr);
}
break;
case 81:
#line 440 "Grammar.y"
{
	yyval.tptr = MakeTree(RoutineCallOp,yyvsp[-3].tptr,yyvsp[-1].tptr);
}
break;
case 82:
#line 445 "Grammar.y"
{
	yyval.tptr = MakeTree(CommaOp,yyvsp[0].tptr,NullExp());	
}
break;
case 83:
#line 449 "Grammar.y"
{
	yyval.tptr = MakeTree(CommaOp,yyvsp[-2].tptr,yyvsp[0].tptr);		
}
break;
case 84:
#line 453 "Grammar.y"
{
	yyval.tptr = NullExp();		
}
break;
case 85:
#line 459 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;
}
break;
case 86:
#line 463 "Grammar.y"
{
	yyval.tptr = MakeTree(LTOp,yyvsp[-2].tptr,yyvsp[0].tptr);
}
break;
case 87:
#line 467 "Grammar.y"
{
	yyval.tptr = MakeTree(LEOp,yyvsp[-2].tptr,yyvsp[0].tptr);	
}
break;
case 88:
#line 471 "Grammar.y"
{
	yyval.tptr = MakeTree(EQOp,yyvsp[-2].tptr,yyvsp[0].tptr);
}
break;
case 89:
#line 475 "Grammar.y"
{
	yyval.tptr = MakeTree(NEOp,yyvsp[-2].tptr,yyvsp[0].tptr);
}
break;
case 90:
#line 479 "Grammar.y"
{
	yyval.tptr = MakeTree(GTOp,yyvsp[-2].tptr,yyvsp[0].tptr);
}
break;
case 91:
#line 483 "Grammar.y"
{
	yyval.tptr = MakeTree(GEOp,yyvsp[-2].tptr,yyvsp[0].tptr);
}
break;
case 92:
#line 489 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;
}
break;
case 93:
#line 493 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;	
}
break;
case 94:
#line 497 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;
}
break;
case 95:
#line 501 "Grammar.y"
{
	yyval.tptr = yyvsp[-1].tptr;
}
break;
case 96:
#line 505 "Grammar.y"
{
	yyval.tptr = MakeTree(NotOp,yyvsp[0].tptr,NullExp());
}
break;
case 97:
#line 511 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;	
}
break;
case 98:
#line 515 "Grammar.y"
{
	yyval.tptr = MakeTree(AndOp,yyvsp[-2].tptr,yyvsp[0].tptr);
}
break;
case 99:
#line 519 "Grammar.y"
{
	yyval.tptr = MakeTree(DivOp,yyvsp[-2].tptr,yyvsp[0].tptr);	
}
break;
case 100:
#line 523 "Grammar.y"
{
	yyval.tptr = MakeTree(MultOp,yyvsp[-2].tptr,yyvsp[0].tptr);
}
break;
case 101:
#line 530 "Grammar.y"
{
	yyval.tptr = MakeLeaf(NUMNode,yyvsp[0].intg);
}
break;
case 102:
#line 534 "Grammar.y"
{
	yyval.tptr = MakeLeaf(STRINGNode,yyvsp[0].intg);
}
break;
case 103:
#line 540 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;
}
break;
case 104:
#line 544 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;
}
break;
case 105:
#line 548 "Grammar.y"
{
	yyval.tptr = MakeTree(UnaryNegOp,yyvsp[0].tptr,NullExp());
}
break;
case 106:
#line 554 "Grammar.y"
{
	yyval.tptr = yyvsp[0].tptr;
}
break;
case 107:
#line 558 "Grammar.y"
{
	yyval.tptr = MakeTree(AddOp,yyvsp[-2].tptr,yyvsp[0].tptr);
}
break;
case 108:
#line 562 "Grammar.y"
{
	yyval.tptr = MakeTree(SubOp,yyvsp[-2].tptr,yyvsp[0].tptr);	
}
break;
case 109:
#line 566 "Grammar.y"
{
	yyval.tptr = MakeTree(OrOp,yyvsp[-2].tptr,yyvsp[0].tptr);
}
break;
case 110:
#line 573 "Grammar.y"
{
	yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yyvsp[0].intg), NullExp());
}
break;
case 111:
#line 577 "Grammar.y"
{
	yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yyvsp[-1].intg), yyvsp[0].tptr);	
}
break;
case 112:
#line 583 "Grammar.y"
{
	yyval.tptr = MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, yyvsp[-1].intg), NullExp()), yyvsp[-2].tptr);
}
break;
case 113:
#line 587 "Grammar.y"
{
	/*printf("point0");*/
	yyval.tptr = MakeTree(SelectOp,MakeTree(FieldOp,MakeLeaf(IDNode, yyvsp[0].intg), NullExp()), NullExp());
}
break;
case 114:
#line 592 "Grammar.y"
{
	yyval.tptr = MakeTree(SelectOp, MakeTree(IndexOp, yyvsp[-2].tptr, yyvsp[-1].tptr), NullExp());
}
break;
case 115:
#line 596 "Grammar.y"
{
	yyval.tptr = MakeTree(SelectOp, MakeTree(IndexOp, yyvsp[-2].tptr, yyvsp[-1].tptr), yyvsp[-4].tptr);
}
break;
case 116:
#line 604 "Grammar.y"
{
	yyval.tptr = MakeTree(ReturnOp,NullExp(),NullExp());
}
break;
case 117:
#line 608 "Grammar.y"
{
	yyval.tptr = MakeTree(ReturnOp,yyvsp[0].tptr,NullExp());	
}
break;
case 118:
#line 614 "Grammar.y"
{
	yyval.tptr = MakeTree(IfElseOp,NullExp(),MakeTree(CommaOp,yyvsp[-1].tptr,yyvsp[0].tptr));
}
break;
case 119:
#line 618 "Grammar.y"
{
	yyval.tptr = MakeTree(IfElseOp,yyvsp[-4].tptr,MakeTree(CommaOp,yyvsp[-1].tptr,yyvsp[0].tptr));
}
break;
case 120:
#line 622 "Grammar.y"
{
	yyval.tptr = MakeTree(IfElseOp,yyvsp[-2].tptr,yyvsp[0].tptr);
}
break;
case 121:
#line 636 "Grammar.y"
{
	yyval.tptr = MakeTree(LoopOp,yyvsp[-1].tptr,yyvsp[0].tptr);
}
break;
#line 1405 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
