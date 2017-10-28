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
    tokenMain = 268,
    tokenVoid = 269,
    tokenRetorna = 270,
    tokenInt = 271,
    tokenDouble = 272,
    tokenBool = 273,
    tokenChar = 274,
    tokenString = 275,
    tokenVar = 276,
    tokenIgual = 277,
    tokenIncremento = 278,
    tokenDecremento = 279,
    tokenSi = 280,
    tokenSino = 281,
    tokenPotencia = 282,
    tokenMas = 283,
    tokenMenos = 284,
    tokenDivision = 285,
    tokenPor = 286,
    tokenNot = 287,
    tokenAnd = 288,
    tokenNand = 289,
    tokenOr = 290,
    tokenNor = 291,
    tokenXor = 292,
    tokenEquivalente = 293,
    tokenDiferente = 294,
    tokenMenor = 295,
    tokenMenorIgual = 296,
    tokenMayor = 297,
    tokenMayorIgual = 298,
    tokenCadena = 299,
    tokenEntero = 300,
    tokenDecimal = 301,
    tokenId = 302
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 35 "sintactico.y" /* yacc.c:1909  */

	char cadena[255];
	struct Nodo *Nodo;

#line 107 "parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
