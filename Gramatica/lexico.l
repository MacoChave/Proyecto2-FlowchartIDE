%option noyywrap

%{
	#include <iostream>
	#include "parser.h"

	using namespace std;

	int yyfila = 1;
	int yycolumna = 0;
%}

letra 			[a-zA-ZñÑ]
numero 			[0-9]
entero 			"-"?{numero}+
decimal 		"-"?({entero}"."{entero})
string 			\"[^\"\n]*\"
id				{letra}({letra}|{numero}|_)*

%%

" " 			{
					yycolumna += yyleng;
				}

"\t"			{
					yycolumna += yyleng;
				}

"\n"			{
					yycolumna = 0;
					yyfila += 1;
				}

"\r\n"			{
					yycolumna = 0;
					yyfila += 1;
				}

"/*" 			{
					int c;

					while ((c == yyinput()) != 0)
					{
						if (c == '\n')
							++yyfila;
						else if (c == '*')
						{
							if ((c == yyinput()) == '/')
								break;
							else
								unput(c);
						}
					}
				}

"//"			{
					int c;

					while ((c == yyinput()) != 0)
					{
						if (c == '\n')
							++yyfila;
						else
							unput(c);
					}
				}

"EOF"			{
					cout << "*****************************" << endl;
					cout << "FIN ANALIZADOR LEXICO" << endl;
					cout << "*****************************" << endl;
					yycolumna += yyleng;
				}

"Import"		{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenImport;
				}

"Clase" 		{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenClase;
				}

"privado" 		{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);
					
					return tokenPrivado;
				}

"publico" 		{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenPublico;
				}

"int"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenInt;
				}

"double"		{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenDouble;
				}

"bool"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenBool;
				}

"char"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenChar;
				}

"string"		{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenString;
				}

"var"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenVar;
				}

"Main"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenMain;
				}

"void"			{	
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenVoid;
				}

"retorna" 		{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenRetorna;
				}

"si" 			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenSi;
				}

"sino"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenSino;
				}

"para"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenPara;
				}

"mientras" 		{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenMientras;
				}

"hacer" 		{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenHacer;
				}

"="				{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenIgual;
				}

"++"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenIncremento;
				}

"--"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenDecremento;
				}

"¿" 			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenOInter;
				}

"?" 			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenCInter;
				}

"("				{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenOPar;
				}

")"				{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenCPar;
				}

","				{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenComa;
				}

";" 			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenPtoComa;
				}

"$" 			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenDolar;
				}

"+" 			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenMas;
				}

"-"				{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenMenos;
				}

"*"				{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenPor;
				}

"/"				{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenDivision;
				}

"^"				{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenPotencia;
				}

"!"				{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenNot;
				}

"&&"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenAnd;
				}

"!&&"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenNand;
				}

"||"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenOr;
				}

"!||"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenNor;
				}

"&|"			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenXor;
				}

"=="			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenEquivalente;
				}

"!="			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenDiferente;
				}

"<"				{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenMenor;
				}

"<="			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenMenorIgual;
				}

">"				{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenMayor;
				}

">="			{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenMayorIgual;
				}

{entero}		{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenEntero;
				}				

{decimal}		{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenDecimal;
				}

{string} 		{
					cout << yytext << endl;
					yycolumna += yyleng;
					strcpy(yylval.cadena, yytext);

					return tokenCadena;
				}

{id}			{
					cout << yytext << endl; 
					yycolumna += yyleng; 
					strcpy(yylval.cadena, yytext);

					return tokenId;
				}

.				{
					yycolumna+=yyleng;
					cout<<"\n\nError Lexico:\nToken no reconocido "<<yytext<<"\n\n";
				}

%%