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

	void vaciarArbol() {
		raiz = NULL;
	}

	int yyerror(const char *error)
	{
		cout << "ERROR SINTACTICO: " << error << endl;
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
%token <cadena> tokenDolar tokenComa tokenPtoComa

%token <cadena> tokenMain
%token <cadena> tokenVoid
%token <cadena> tokenRetorna
%token <cadena> tokenSalir

%token <cadena> tokenInt
%token <cadena> tokenDouble
%token <cadena> tokenBool
%token <cadena> tokenChar
%token <cadena> tokenString

%token <cadena> tokenVar
%token <cadena> tokenIgual tokenIncremento tokenDecremento

%token <cadena> tokenSi tokenSino
%token <cadena> tokenPara
%token <cadena> tokenMientras
%token <cadena> tokenHacer

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
%type <Nodo> VISIBILIDAD
%type <Nodo> LIST_CUERPO_CLASE CUERPO_CLASE
%type <Nodo> PROCEDIMIENTO DECLARACION_G
%type <Nodo> PRINCIPAL METODO FUNCION
%type <Nodo> LIST_PAR PAR
%type <Nodo> LIST_SENTSM LIST_SENTSF SENTSM SENTSF
%type <Nodo> RETORNA
%type <Nodo> COND
%type <Nodo> REL
%type <Nodo> E
%type <Nodo> LLAMADA
%type <Nodo> TIPO
%type <Nodo> ATTRS LIST_ATTR
%type <Nodo> DECLARACION ASIGN_DEC
%type <Nodo> LIST_ID
%type <Nodo> ASIGNACION
%type <Nodo> SI_M SI_F SINO_M SINO_F
%type <Nodo> PARA_M PARA_F VAR_PARA PASO_PARA
%type <Nodo> MIENTRAS_M MIENTRAS_F
%type <Nodo> HACER_M HACER_F

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
						
						padre->addHijo(tokenImport);
						padre->addHijo(tokenId);

						$$ = padre;
					}
					;

CLASE 				: VISIBILIDAD tokenClase tokenId tokenOInter LIST_CUERPO_CLASE tokenCInter 
					{
						Nodo *padre = new Nodo("CLASE", "---", 0, 0);
						Nodo *tokenClase = new Nodo("tokenClase", $2, yyfila, yycolumna);
						Nodo *tokenId = new Nodo("tokenId", $3, yyfila, yycolumna);
						
						padre->addHijo($1);
						padre->addHijo(tokenClase);
						padre->addHijo(tokenId);
						padre->addHijo($5);

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

CUERPO_CLASE		: PRINCIPAL
					{
						Nodo *padre = new Nodo("CUERPO_CLASE", "---", 0, 0);
						
						padre->addHijo($1);

						$$ = padre;
					}
					| VISIBILIDAD PROCEDIMIENTO
					{
						Nodo *padre = new Nodo("CUERPO_CLASE", "---", 0, 0);
						
						padre->addHijo($1);
						padre->addHijo($2);

						$$ = padre;
					}
					;

PRINCIPAL 			: tokenMain tokenOPar tokenCPar tokenOInter LIST_SENTSM tokenCInter
					{
						Nodo *padre = new Nodo("PRINCIPAL", "---", 0, 0);
						Nodo *tokenMain = new Nodo("tokenMain", $1, yyfila, yycolumna);
						
						padre->addHijo(tokenMain);
						padre->addHijo($5);

						$$ = padre;
					}
					;

PROCEDIMIENTO 		: DECLARACION_G tokenDolar
					{
						Nodo *padre = new Nodo("PROCEDIMIENTO", "---", 0, 0);
						
						padre->addHijo($1);

						$$ = padre;
					}
					| FUNCION
					{
						Nodo *padre = new Nodo("PROCEDIMIENTO", "---", 0, 0);
						
						padre->addHijo($1);

						$$ = padre;
					}
					| METODO
					{
						Nodo *padre = new Nodo("PROCEDIMIENTO", "---", 0, 0);
						
						padre->addHijo($1);

						$$ = padre;
					}
					;

DECLARACION_G 		: tokenVar TIPO LIST_ID ASIGN_DEC
					{
						Nodo *padre = new Nodo("DECLARACION_G", "---", 0, 0);
						Nodo *tokenVar = new Nodo("tokenVar", $1, yyfila, yycolumna);
						
						padre->addHijo(tokenVar);
						padre->addHijo($2);
						padre->addHijo($3);
						padre->addHijo($4);

						$$ = padre;
					}
					;

FUNCION 			: TIPO tokenId tokenOPar LIST_PAR tokenCPar tokenOInter LIST_SENTSF tokenCInter
					{
						Nodo *padre = new Nodo("FUNCION", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", $2, yyfila, yycolumna);
						
						padre->addHijo($1);
						padre->addHijo(tokenId);
						padre->addHijo($4);
						padre->addHijo($7);

						$$ = padre;
					}
					;

METODO 				: tokenVoid tokenId tokenOPar LIST_PAR tokenCPar tokenOInter LIST_SENTSM tokenCInter
					{
						Nodo *padre = new Nodo("METODO", "---", 0, 0);
						Nodo *tokenVoid = new Nodo("tokenVoid", $1, yyfila, yycolumna);
						Nodo *tokenId = new Nodo("tokenId", $2, yyfila, yycolumna);
						
						padre->addHijo(tokenVoid);
						padre->addHijo(tokenId);
						padre->addHijo($4);
						padre->addHijo($7);

						$$ = padre;
					}
					;

LIST_SENTSM 		: LIST_SENTSM SENTSM
					{
						Nodo *padre = new Nodo("LIST_SENTSM", "---", 0, 0);
						
						padre->addHijo($1);
						padre->addHijo($2);

						$$ = padre;
					}
					| SENTSM
					{
						Nodo *padre = new Nodo("LIST_SENTSM", "---", 0, 0);
						
						padre->addHijo($1);

						$$ = padre;
					}
					;

SENTSM 				: DECLARACION tokenDolar
					{
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);
						
						padre->addHijo($1);

						$$ = padre;
					}
					| ASIGNACION tokenDolar
					{
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);
						
						padre->addHijo($1);

						$$ = padre;
					}
					| SI_M
					{
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);

						padre->addHijo($1);

						$$ = padre;
					}
					| PARA_M
					{
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);

						padre->addHijo($1);

						$$ = padre;
					}
					| MIENTRAS_M
					{
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);

						padre->addHijo($1);

						$$ = padre;
					}
					| HACER_M
					{
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);

						padre->addHijo($1);

						$$ = padre;
					}
					| tokenSalir tokenDolar
					{
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);
						Nodo *tokenSalir = new Nodo("tokenSalir", $1, yyfila, yycolumna);

						padre->addHijo(tokenSalir);

						$$ = padre;
					}
					;

LIST_SENTSF 		: LIST_SENTSF SENTSF
					{
						Nodo *padre = new Nodo("LIST_SENTSF", "---", 0, 0);
						
						padre->addHijo($1);
						padre->addHijo($2);

						$$ = padre;
					}
					| SENTSF
					{
						Nodo *padre = new Nodo("LIST_SENTSF", "---", 0, 0);
						
						padre->addHijo($1);

						$$ = padre;
					}
					;

SENTSF 				: DECLARACION tokenDolar
					{
						Nodo *padre = new Nodo("SENTSF", "---", 0, 0);
						
						padre->addHijo($1);

						$$ = padre;
					}
					| ASIGNACION tokenDolar
					{
						Nodo *padre = new Nodo("SENTSF", "---", 0, 0);
						
						padre->addHijo($1);

						$$ = padre;
					}
					| RETORNA
					{
						Nodo *padre = new Nodo("SENTSF", "---", 0, 0);
						
						padre->addHijo($1);

						$$ = padre;
					}
					| SI_F
					{
						Nodo *padre = new Nodo("SENTSF", "---", 0, 0);

						padre->addHijo($1);

						$$ = padre;
					}
					| PARA_F
					{
						Nodo *padre = new Nodo("SENTS_F", "---", 0, 0);

						padre->addHijo($1);

						$$ = padre;
					}
					| MIENTRAS_F
					{
						Nodo *padre = new Nodo("SENTS_F", "---", 0, 0);

						padre->addHijo($1);

						$$ = padre;
					}
					| HACER_F
					{
						Nodo *padre = new Nodo("SENTS_F", "---", 0, 0);

						padre->addHijo($1);

						$$ = padre;
					}
					| tokenSalir tokenDolar
					{
						Nodo *padre = new Nodo("SENTSM", "---", 0, 0);
						Nodo *tokenSalir = new Nodo("tokenSalir", $1, yyfila, yycolumna);

						padre->addHijo(tokenSalir);

						$$ = padre;
					}
					;

RETORNA				: tokenRetorna COND tokenDolar
					{
						Nodo *padre = new Nodo("RETORNA", "---", 0, 0);
						Nodo *tokenRetorna = new Nodo("tokenRetorna", $1, yyfila, yycolumna);
						
						padre->addHijo(tokenRetorna);
						padre->addHijo($2);

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

LIST_PAR 			: LIST_PAR tokenComa PAR
					{
						Nodo *padre = new Nodo("LIST_PAR", "---", 0, 0);
						Nodo *tokenComa = new Nodo("tokenComa", $2, yyfila, yycolumna);
						
						padre->addHijo($1);
						padre->addHijo(tokenComa);
						padre->addHijo($3);

						$$ = padre;
					}
					| PAR
					{
						Nodo *padre = new Nodo("LIST_PAR", "---", 0, 0);
						
						padre->addHijo($1);

						$$ = padre;
					}
					;

PAR 				: TIPO tokenId
					{
						Nodo *padre = new Nodo("LIST_PAR", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", $2, yyfila, yycolumna);
						
						padre->addHijo($1);
						padre->addHijo(tokenId);

						$$ = padre;
					}
					| 
					{
						Nodo *padre = new Nodo("PAR", "---", 0, 0);

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
						
						padre->addHijo(tokenId);
						padre->addHijo($3);

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

SI_M 				: tokenSi tokenOPar COND tokenCPar tokenOInter LIST_SENTSM tokenCInter SINO_M
					{
						Nodo *padre = new Nodo("SI_M", "---", 0, 0);
						Nodo *tokenSi = new Nodo("tokenSi", $1, yyfila, yycolumna);

						padre->addHijo(tokenSi);
						padre->addHijo($3);
						padre->addHijo($6);
						padre->addHijo($8);

						$$ = padre;
					}
					;

SINO_M 				: tokenSino tokenOInter LIST_SENTSM tokenCInter
					{
						Nodo *padre = new Nodo("SINO_M", "---", 0, 0);
						Nodo *tokenSino = new Nodo("tokenSino", $1, yyfila, yycolumna);

						padre->addHijo(tokenSino);
						padre->addHijo($3);

						$$ = padre;
					}
					| 
					{
						Nodo *padre = new Nodo("SINO_M", "---", 0, 0);

						$$ = padre;
					}
					;

SI_F 				: tokenSi tokenOPar COND tokenCPar tokenOInter LIST_SENTSF tokenCInter SINO_F
					{
						Nodo *padre = new Nodo("SI_F", "---", 0, 0);
						Nodo *tokenSi = new Nodo("tokenSi", $1, yyfila, yycolumna);

						padre->addHijo(tokenSi);
						padre->addHijo($3);
						padre->addHijo($6);
						padre->addHijo($8);

						$$ = padre;
					}
					;

SINO_F 				: tokenSino tokenOInter LIST_SENTSF tokenCInter
					{
						Nodo *padre = new Nodo("SINO_F", "---", 0, 0);
						Nodo *tokenSino = new Nodo("tokenSino", $1, yyfila, yycolumna);

						padre->addHijo(tokenSino);
						padre->addHijo($3);

						$$ = padre;
					}
					| 
					{
						Nodo *padre = new Nodo("SINO_F", "---", 0, 0);

						$$ = padre;
					}
					;

PARA_M 				: tokenPara tokenOPar VAR_PARA tokenPtoComa COND tokenPtoComa PASO_PARA tokenCPar tokenOInter LIST_SENTSM tokenCInter
					{
						Nodo *padre = new Nodo("PARA_M", "---", 0, 0);
						Nodo *tokenPara = new Nodo("tokenPara", $1, yyfila, yycolumna);

						padre->addHijo(tokenPara);
						padre->addHijo($3);
						padre->addHijo($5);
						padre->addHijo($7);
						padre->addHijo($10);

						$$ = padre;
					}
					;

PARA_F 				: tokenPara tokenOPar VAR_PARA tokenPtoComa COND tokenPtoComa PASO_PARA tokenCPar tokenOInter LIST_SENTSF tokenCInter
					{
						Nodo *padre = new Nodo("PARA_M", "---", 0, 0);
						Nodo *tokenPara = new Nodo("tokenPara", $1, yyfila, yycolumna);

						padre->addHijo(tokenPara);
						padre->addHijo($3);
						padre->addHijo($5);
						padre->addHijo($7);
						padre->addHijo($10);

						$$ = padre;
					}
					;

VAR_PARA 			: TIPO tokenId tokenIgual tokenEntero
					{
						Nodo *padre = new Nodo("VAR_PARA", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", $2, yyfila, yycolumna);
						Nodo *tokenIgual = new Nodo("tokenIgual", $3, yyfila, yycolumna);
						Nodo *tokenEntero = new Nodo("tokenEntero", $4, yyfila, yycolumna);

						padre->addHijo($1);
						padre->addHijo(tokenId);
						padre->addHijo(tokenIgual);
						padre->addHijo(tokenEntero);

						$$ = padre;
					}
					| tokenId tokenIgual tokenEntero
					{
						Nodo *padre = new Nodo("VAR_PARA", "---", 0, 0);
						Nodo *tokenId = new Nodo("tokenId", $1, yyfila, yycolumna);
						Nodo *tokenIgual = new Nodo("tokenIgual", $2, yyfila, yycolumna);
						Nodo *tokenEntero = new Nodo("tokenEntero", $3, yyfila, yycolumna);

						padre->addHijo(tokenId);
						padre->addHijo(tokenIgual);
						padre->addHijo(tokenEntero);

						$$ = padre;
					}
					;

PASO_PARA 			: ASIGNACION
					{
						Nodo *padre = new Nodo("PASO_PARA", "---", 0, 0);

						padre->addHijo($1);

						$$ = padre;
					}
					;

MIENTRAS_M 			: tokenMientras tokenOPar COND tokenCPar tokenOInter LIST_SENTSM tokenCInter
					{
						Nodo *padre = new Nodo("MIENTRAS_M", "---", 0, 0);
						Nodo *tokenMientras = new Nodo("tokenMientras", $1, yyfila, yycolumna);

						padre->addHijo(tokenMientras);
						padre->addHijo($3);
						padre->addHijo($6);

						$$ = padre;
					}
					;

MIENTRAS_F 			: tokenMientras tokenOPar COND tokenCPar tokenOInter LIST_SENTSF tokenCInter
					{
						Nodo *padre = new Nodo("MIENTRAS_F", "---", 0, 0);
						Nodo *tokenMientras = new Nodo("tokenMientras", $1, yyfila, yycolumna);

						padre->addHijo(tokenMientras);
						padre->addHijo($3);
						padre->addHijo($6);

						$$ = padre;
					}
					;

HACER_M 			: tokenHacer tokenOInter LIST_SENTSM tokenCInter tokenMientras tokenOPar COND tokenCPar tokenDolar
					{
						Nodo *padre = new Nodo("HACER_M", "---", 0, 0);
						Nodo *tokenHacer = new Nodo("tokenHacer", $1, yyfila, yycolumna);
						Nodo *tokenMientras = new Nodo("tokenMientras", $5, yyfila, yycolumna);

						padre->addHijo(tokenHacer);
						padre->addHijo($3);
						padre->addHijo(tokenMientras);
						padre->addHijo($7);

						$$ = padre;
					}
					;

HACER_F 			: tokenHacer tokenOInter LIST_SENTSF tokenCInter tokenMientras tokenOPar COND tokenCPar tokenDolar
					{
						Nodo *padre = new Nodo("HACER_M", "---", 0, 0);
						Nodo *tokenHacer = new Nodo("tokenHacer", $1, yyfila, yycolumna);
						Nodo *tokenMientras = new Nodo("tokenMientras", $5, yyfila, yycolumna);

						padre->addHijo(tokenHacer);
						padre->addHijo($3);
						padre->addHijo(tokenMientras);
						padre->addHijo($7);

						$$ = padre;
					}

%%
