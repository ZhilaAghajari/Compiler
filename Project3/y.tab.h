/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

