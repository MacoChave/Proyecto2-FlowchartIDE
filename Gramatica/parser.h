/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    tokenImport = 258,
    tokenClase = 259,
    tokenPrivado = 260,
    tokenPublico = 261,
    tokenOInter = 262,
    tokenCInter = 263,
    tokenOPar = 264,
    tokenCPar = 265,
    tokenDolar = 266,
    tokenComa = 267,
    tokenPtoComa = 268,
    tokenMain = 269,
    tokenVoid = 270,
    tokenRetorna = 271,
    tokenInt = 272,
    tokenDouble = 273,
    tokenBool = 274,
    tokenChar = 275,
    tokenString = 276,
    tokenVar = 277,
    tokenIgual = 278,
    tokenIncremento = 279,
    tokenDecremento = 280,
    tokenSi = 281,
    tokenSino = 282,
    tokenPara = 283,
    tokenMientras = 284,
    tokenHacer = 285,
    tokenPotencia = 286,
    tokenMas = 287,
    tokenMenos = 288,
    tokenDivision = 289,
    tokenPor = 290,
    tokenNot = 291,
    tokenAnd = 292,
    tokenNand = 293,
    tokenOr = 294,
    tokenNor = 295,
    tokenXor = 296,
    tokenEquivalente = 297,
    tokenDiferente = 298,
    tokenMenor = 299,
    tokenMenorIgual = 300,
    tokenMayor = 301,
    tokenMayorIgual = 302,
    tokenCadena = 303,
    tokenEntero = 304,
    tokenDecimal = 305,
    tokenId = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 35 "sintactico.y" /* yacc.c:1909  */

	char cadena[255];
	struct Nodo *Nodo;

#line 111 "parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
