%{
	#include <iostream>
    #include "scanner.h"
	#include "Gramatica/nodo.h"

	using namespace std;

	extern int yyline;
	extern char *yytext;
	extern int yyfila;
	extern int yycolumna;
	int contador = 0;

	Nodo *raiz = NULL;

	Nodo *getRaiz() { return raiz; }

	void vaciarArbol() { raiz = NULL; }

	int yyerror(const char *error)
	{
		cout << "ERROR SINTACTIO: " << error << endl;
	}

%}

%error-verbose

%union
{
	char cadena[255];
	struct Nodo *Nodo;
}

%token <cadena> tokenImport
%token <cadena> tokenClase tokenPrivado tokenPublico
%token <cadena> tokenOInter tokenCInter
%token <cadena> tokenOPar tokenCPar
%token <cadena> tokenDolar tokenComa

%token <cadena> tokenInt
%token <cadena> tokenDouble
%token <cadena> tokenBool
%token <cadena> tokenChar
%token <cadena> tokenString

%token <cadena> tokenVar
%token <cadena> tokenIgual tokenIncremento tokenDecremento

%token <cadena> tokenPotencia
%token <cadena> tokenMas tokenMenos
%token <cadena> tokenDivision tokenPor

%token <cadena> tokenNot
%token <cadena> tokenAnd tokenNand
%token <cadena> tokenOr tokenNor tokenXor

%token <cadena> tokenEquivalente tokenDiferente
%token <cadena> tokenMenor tokenMenorIgual
%token <cadena> tokenMayor tokenMayorIgual

%token <cadena> tokenCadena
%token <cadena> tokenEntero
%token <cadena> tokenDecimal
%token <cadena> tokenId

%left tokenPotencia
%left tokenMas tokenMenos
%left tokenPor tokenDivision

%right tokenNot
%left tokenAnd tokenNand
%left tokenOr tokenNor tokenXor

%type <Nodo> S0 S
%type <Nodo> LIST_IMPORT IMPORT
%type <Nodo> CLASE
%type <Nodo> LIST_CUERPO_CLASE CUERPO_CLASE
%type <Nodo> VISIBILIDAD
%type <Nodo> COND
%type <Nodo> REL
%type <Nodo> E
%type <Nodo> LLAMADA
%type <Nodo> ATTRS LIST_ATTR
%type <Nodo> DECLARACION ASIGN_DEC
%type <Nodo> TIPO
%type <Nodo> LIST_ID
%type <Nodo> ASIGNACION

%start S0

%%

S0 					: S
					{
						raiz = $1;
					};

S 					: LIST_IMPORT CLASE
					{
						Nodo *padre = new Nodo("S", "---", 0, 0);
						padre->addHijo($1);
						padre->addHijo($2);

						$$ = padre;
					};

LIST_IMPORT			: LIST_IMPORT IMPORT
					{
						Nodo *padre = new Nodo("LIST_IMPORT", "---", 0, 0);
						padre->addHijo($1);
						padre->addHijo($2);

						$$ = padre;
					}
					| IMPORT
					{
						Nodo *padre = new Nodo("LIST_IMPORT", "---", 0, 0);
						padre->addHijo($1);

						$$ = padre;
					}
					|
					{
						Nodo *padre = new Nodo("LIST_IMPORT", "---", 0, 0);

						$$ = padre;
					}
					;

IMPORT 				: tokenImport tokenId tokenDolar
					{
						Nodo *padre = new Nodo("IMPORT", "---", 0, 0);
						Nodo *tokenImport = new Nodo("tokenImport", $1, 0, 0);
						Nodo *tokenId = new Nodo("tokenId", $2, 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", $3, 0, 0);
						padre->addHijo(tokenImport);
						padre->addHijo(tokenId);
						padre->addHijo(tokenDolar);

						$$ = padre;
					}
					;

CLASE 				: VISIBILIDAD tokenClase tokenId tokenOInter LIST_CUERPO_CLASE tokenCInter 
					{
						Nodo *padre = new Nodo("CLASE", "---", 0, 0);
						Nodo *tokenClase = new Nodo("tokenClase", $2, yyfila, yycolumna);
						Nodo *tokenId = new Nodo("tokenId", $3, yyfila, yycolumna);
						Nodo *tokenOInter = new Nodo("tokenOInter", $4, yyfila, yycolumna);
						Nodo *tokenCInter = new Nodo("tokenCInter", $6, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenClase);
						padre->addHijo(tokenId);
						padre->addHijo(tokenOInter);
						padre->addHijo($5);
						padre->addHijo(tokenCInter);

						$$ = padre;
					};

VISIBILIDAD			: tokenPrivado 
					{
						Nodo *padre = new Nodo("VISIBILIDAD", "---", 0, 0);
						Nodo *tokenPrivado = new Nodo("tokenPrivado", $1, yyfila, yycolumna);
						padre->addHijo(tokenPrivado);

						$$ = padre;	
					}
					| 
					tokenPublico
					{
						Nodo *padre = new Nodo("VISIBILIDAD", "---", 0, 0);
						Nodo *tokenPublico = new Nodo("tokenPublico", $1, yyfila, yycolumna);
						padre->addHijo(tokenPublico);

						$$ = padre;
					}
					|
					{
						Nodo *padre = new Nodo("VISIBILIDAD", "---", 0, 0);
						padre->addHijo(NULL);

						$$ = padre;
					}
					;

LIST_CUERPO_CLASE 	: LIST_CUERPO_CLASE CUERPO_CLASE
					{
						Nodo *padre = new Nodo("LIST_CUERPO_CLASE", "---", 0, 0);
						padre->addHijo($1);
						padre->addHijo($2);

						$$ = padre;
					}
					| CUERPO_CLASE
					{
						Nodo *padre = new Nodo("LIST_CUERPO_CLASE", "---", 0, 0);
						padre->addHijo($1);

						$$ = padre;
					}

CUERPO_CLASE		: DECLARACION tokenDolar
					{
						Nodo *padre = new Nodo("CUERPO_CLASE", "---", 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenDolar);

						$$ = padre;
					}
					| ASIGNACION tokenDolar
					{
						Nodo *padre = new Nodo("CUERPO_CLASE", "---", 0, 0);
						Nodo *tokenDolar = new Nodo("tokenDolar", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenDolar);

						$$ = padre;
					}
					;

COND 				: COND tokenAnd COND
					{
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenAdd = new Nodo("tokenAdd", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenAdd);
						padre->addHijo($3);

						$$ = padre;
					}
					| COND tokenNand COND
					{
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenNand = new Nodo("tokenNand", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenNand);
						padre->addHijo($3);

						$$ = padre;
					}
					| COND tokenOr COND
					{
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenOr = new Nodo("tokenOr", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenOr);
						padre->addHijo($3);

						$$ = padre;
					}
					| COND tokenNor COND
					{
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenNor = new Nodo("tokenNor", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenNor);
						padre->addHijo($3);

						$$ = padre;
					}
					| COND tokenXor COND
					{
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenXor = new Nodo("tokenXor", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenXor);
						padre->addHijo($3);

						$$ = padre;
					}
					| tokenNot COND
					{
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						Nodo *tokenNot = new Nodo("tokenNot", $1, yyfila, yycolumna);
						padre->addHijo(tokenNot);
						padre->addHijo($2);

						$$ = padre;
					}
					| E REL E
					{
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						padre->addHijo($1);
						padre->addHijo($2);
						padre->addHijo($3);

						$$ = padre;
					}
					| E
					{
						Nodo *padre = new Nodo("COND", "---", 0, 0);
						padre->addHijo($1);

						$$ = padre;
					}
					;

REL 				: tokenEquivalente
					{
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenEquivalente = new Nodo("tokenEquivalente", $1, yyfila, yycolumna);
						padre->addHijo(tokenEquivalente);

						$$ = padre;
					}
					| tokenDiferente
					{
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenDiferente = new Nodo("tokenDiferente", $1, yyfila, yycolumna);
						padre->addHijo(tokenDiferente);

						$$ = padre;
					}
					| tokenMenor
					{
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMenor = new Nodo("tokenMenor", $1, yyfila, yycolumna);
						padre->addHijo(tokenMenor);

						$$ = padre;
					}
					| tokenMenorIgual
					{
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMenorIgual = new Nodo("tokenMenorIgual", $1, yyfila, yycolumna);
						padre->addHijo(tokenMenorIgual);

						$$ = padre;
					}
					| tokenMayor
					{	
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMayor = new Nodo("tokenMayor", $1, yyfila, yycolumna);
						padre->addHijo(tokenMayor);

						$$ = padre;
					}
					| tokenMayorIgual
					{
						Nodo *padre = new Nodo("RELACIONAL", "---", 0, 0);
						Nodo *tokenMayorIgual = new Nodo("tokenMayorIgual", $1, yyfila, yycolumna);
						padre->addHijo(tokenMayorIgual);

						$$ = padre;
					}
					;

E 					: E tokenMas E
					{
                        Nodo *padre = new Nodo("E", "---", 0, 0);
                        Nodo *tokenMas = new Nodo("tokenMas", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenMas);
						padre->addHijo($3);

						$$ = padre;
					}
					| E tokenMenos E
					{
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenMenos = new Nodo("tokenMenos", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenMenos);
						padre->addHijo($3);

						$$ = padre;
					}
					| E tokenPor E
					{
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenPor = new Nodo("tokenPor", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenPor);
						padre->addHijo($3);

						$$ = padre;
					}
					| E tokenDivision E
					{
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenDivision = new Nodo("tokenDivision", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenDivision);
						padre->addHijo($3);

						$$ = padre;
					}
					| E tokenPotencia E
					{
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenPotencia = new Nodo("tokenPotencia", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenPotencia);
						padre->addHijo($3);

						$$ = padre;
					}
					| tokenOPar E tokenCPar
					{
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenOPar = new Nodo("tokenOPar", $1, yyfila, yycolumna);
						Nodo *tokenCPar = new Nodo("tokenOPar", $3, yyfila, yycolumna);
						padre->addHijo(tokenOPar);
						padre->addHijo($2);
						padre->addHijo(tokenCPar);

						$$ = padre;
					}
					| tokenCadena
					{
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenCadena = new Nodo("tokenCadena", $1, yyfila, yycolumna);
						padre->addHijo(tokenCadena);

						$$ = padre;
					}
					| tokenEntero
					{
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenEntero = new Nodo("tokenEntero", $1, yyfila, yycolumna);
						padre->addHijo(tokenEntero);

						$$ = padre;
					}
					| tokenDecimal
					{
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenDecimal = new Nodo("tokenDecimal", $1, yyfila, yycolumna);
						padre->addHijo(tokenDecimal);

						$$ = padre;
					}
					| tokenId
					{
						Nodo *padre = new Nodo("E", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", $1, yyfila, yycolumna);
						padre->addHijo(tokenId);

						$$ = padre;
					}
					| LLAMADA
					{
						Nodo *padre = new Nodo("E", "---", 0, 0);
						padre->addHijo($1);

						$$ = padre;
					}
					;

LLAMADA 			: tokenId tokenOPar ATTRS tokenCPar
					{
						Nodo *padre = new Nodo("LLAMDA", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenID", $1, yyfila, yycolumna);
                        Nodo *tokenOPar = new Nodo("tokenOPar", $2, yyfila, yycolumna);
                        Nodo *tokenCPar = new Nodo("tokenCPar", $4, yyfila, yycolumna);
						padre->addHijo(tokenId);
						padre->addHijo(tokenOPar);
						padre->addHijo($3);
						padre->addHijo(tokenCPar);

						$$ = padre;
					}
					;

ATTRS 				: LIST_ATTR
					{
						Nodo *padre = new Nodo("ATTRS", "---", 0, 0);
						padre->addHijo($1);

						$$ = padre;
					}
					| 
					{
						Nodo *padre = new Nodo("ATTRS", "---", 0, 0);
						padre->addHijo(NULL);

						$$ = padre;
					}
					;

LIST_ATTR 			: LIST_ATTR tokenComa COND
					{
						Nodo *padre = new Nodo("LIST_ATTR", "---", 0, 0);
						Nodo *tokenComa = new Nodo("tokenComa", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenComa);
						padre->addHijo($3);

						$$ = padre;
					}
					| COND
					{
						Nodo *padre = new Nodo("LIST_ATTR", "---", 0, 0);
						padre->addHijo($1);

						$$ = padre;
					}
					;

DECLARACION 		: VISIBILIDAD tokenVar TIPO LIST_ID ASIGN_DEC
					{
						Nodo *padre = new Nodo("DECLARACION", "---", 0, 0);
						Nodo *tokenVar = new Nodo("tokenVar", $2, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenVar);
						padre->addHijo($3);
						padre->addHijo($4);
						padre->addHijo($5);

						$$ = padre;
					}
					;

TIPO 				: tokenInt
					{
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenInt = new Nodo("tokenInt", $1, yyfila, yycolumna);
						padre->addHijo(tokenInt);

						$$ = padre;
					}
					| tokenDouble
					{
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenDouble = new Nodo("tokenDouble", $1, yyfila, yycolumna);
						padre->addHijo(tokenDouble);
						
						$$ = padre;
					}
					| tokenBool
					{
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenbool = new Nodo("tokenbool", $1, yyfila, yycolumna);
						padre->addHijo(tokenbool);
						
						$$ = padre;
					}
					| tokenChar
					{
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenChar = new Nodo("tokenChar", $1, yyfila, yycolumna);
						padre->addHijo(tokenChar);
						
						$$ = padre;
					}
					| tokenString
					{
						Nodo *padre = new Nodo("TIPO", "---", 0, 0);
						Nodo *tokenString = new Nodo("tokenString", $1, yyfila, yycolumna);
						padre->addHijo(tokenString);
						
						$$ = padre;
					}
					;

LIST_ID 			: LIST_ID tokenComa tokenId
					{
						Nodo *padre = new Nodo("LIST_ID", "---", 0, 0);
						Nodo *tokenComa = new Nodo("tokenComa", $2, yyfila, yycolumna);
						Nodo *tokenId = new Nodo("tokenId", $3, yyfila, yycolumna);
						padre->addHijo($1);
						padre->addHijo(tokenComa);
						padre->addHijo(tokenId);

						$$ = padre;
					}
					| tokenId
					{
						Nodo *padre = new Nodo("LIST_ID", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", $1, yyfila, yycolumna);
						padre->addHijo(tokenId);

						$$ = padre;
					}
					;

ASIGN_DEC 			: tokenIgual COND
					{
						Nodo *padre = new Nodo("ASIGN_DEC", "---", 0, 0);
						Nodo *tokenIgual = new Nodo("tokenIgual", $1, yyfila, yycolumna);
						padre->addHijo(tokenIgual);
						padre->addHijo($2);

						$$ = padre;
					}
					|
					{
						Nodo *padre = new Nodo("ASIGN_DEC", "---", 0, 0);

						$$ = padre;
					}
					;

ASIGNACION 			: tokenId tokenIgual COND
					{
						Nodo *padre = new Nodo("ASIGNACION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", $1, yyfila, yycolumna);
						Nodo *tokenIgual = new Nodo("tokenIgual", $2, yyfila, yycolumna);
						padre->addHijo(tokenId);
						padre->addHijo(tokenIgual);
						padre->addHijo($3);

						$$ = padre;
					}
					| tokenId tokenIncremento
					{
						Nodo *padre = new Nodo("ASIGNACION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", $1, yyfila, yycolumna);
						Nodo *tokenIncremento = new Nodo("tokenIncremento", $2, yyfila, yycolumna);
						padre->addHijo(tokenId);
						padre->addHijo(tokenIncremento);
						
						$$ = padre;
					}
					| tokenId tokenDecremento
					{
						Nodo *padre = new Nodo("ASIGNACION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", $1, yyfila, yycolumna);
						Nodo *tokenDecremento = new Nodo("tokenDecremento", $2, yyfila, yycolumna);
						padre->addHijo(tokenId);
						padre->addHijo(tokenDecremento);
						
						$$ = padre;
					}
					;
%%
