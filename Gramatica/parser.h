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
    tokenSalir = 272,
    tokenGraficar = 273,
    tokenPintar = 274,
    tokenString = 275,
    tokenInt = 276,
    tokenDouble = 277,
    tokenChar = 278,
    tokenBool = 279,
    tokenVar = 280,
    tokenIgual = 281,
    tokenIncremento = 282,
    tokenDecremento = 283,
    tokenSi = 284,
    tokenSino = 285,
    tokenPara = 286,
    tokenMientras = 287,
    tokenHacer = 288,
    tokenPotencia = 289,
    tokenMas = 290,
    tokenMenos = 291,
    tokenDivision = 292,
    tokenPor = 293,
    tokenNot = 294,
    tokenAnd = 295,
    tokenNand = 296,
    tokenOr = 297,
    tokenNor = 298,
    tokenXor = 299,
    tokenEquivalente = 300,
    tokenDiferente = 301,
    tokenMenor = 302,
    tokenMenorIgual = 303,
    tokenMayor = 304,
    tokenMayorIgual = 305,
    tokenCadena = 306,
    tokenEntero = 307,
    tokenDecimal = 308,
    tokenCaracter = 309,
    tokenTrue = 310,
    tokenFalse = 311,
    tokenId = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "sintactico.y" /* yacc.c:1909  */

	char cadena[255];
	struct Nodo *Nodo;

#line 117 "parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
