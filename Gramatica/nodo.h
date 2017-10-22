#ifndef NODO_H
#define NODO_H
#include <stdio.h>
#include <stdlib.h>
#include <QString>
#include <string.h>
#include <QList>
#include <time.h>

using namespace std;

class Nodo
{
    QString name;
    QString token;
    QString lexema;
	int fila;
    int columna;
    QList<Nodo *> hijos;
public:
    Nodo();
    Nodo(char *token_, char *lexema_, int fila_, int columna_);
    ~Nodo();
    char *getToken();
    void setToken(char *value);
    char *getLexema();
    void setLexema(char *value);
    int getFila();
    void setFila(int value);
    int getColumna();
    void setColumna(int value);
    QList<Nodo *> getHijos();
    void addHijo(Nodo *value);
    char *getText();
};

#endif // NODO_H
