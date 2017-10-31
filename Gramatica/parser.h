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
    tokenInt = 273,
    tokenDouble = 274,
    tokenBool = 275,
    tokenChar = 276,
    tokenString = 277,
    tokenVar = 278,
    tokenIgual = 279,
    tokenIncremento = 280,
    tokenDecremento = 281,
    tokenSi = 282,
    tokenSino = 283,
    tokenPara = 284,
    tokenMientras = 285,
    tokenHacer = 286,
    tokenPotencia = 287,
    tokenMas = 288,
    tokenMenos = 289,
    tokenDivision = 290,
    tokenPor = 291,
    tokenNot = 292,
    tokenAnd = 293,
    tokenNand = 294,
    tokenOr = 295,
    tokenNor = 296,
    tokenXor = 297,
    tokenEquivalente = 298,
    tokenDiferente = 299,
    tokenMenor = 300,
    tokenMenorIgual = 301,
    tokenMayor = 302,
    tokenMayorIgual = 303,
    tokenCadena = 304,
    tokenEntero = 305,
    tokenDecimal = 306,
    tokenId = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "sintactico.y" /* yacc.c:1909  */

	char cadena[255];
	struct Nodo *Nodo;

#line 112 "parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
