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
    QString token;
    QString lexema;
	int fila;
    int columna;
    QList<Nodo *> hijos;
public:
    Nodo();
    Nodo(char *token_, char *lexema_, int fila_, int columna_);
    ~Nodo();
    QList<Nodo *> getHijos();
    void addHijo(Nodo *value);
    char *getText();

    QString getToken() const;
    void setToken(const QString &value);
    QString getLexema() const;
    void setLexema(const QString &value);
    int getFila() const;
    void setFila(int value);
    int getColumna() const;
    void setColumna(int value);
};

#endif // NODO_H
