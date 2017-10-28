#include "nodo.h"

Nodo::Nodo()
{
    token = "";
    lexema = "";
    fila = 0;
    columna = 0;
}

Nodo::Nodo(char *token_, char *lexema_, int fila_, int columna_)
{
    token.append(token_);
    lexema.append(lexema_);
    fila = fila_;
    columna = columna_;
}

Nodo::~Nodo()
{
    token = "";
    lexema = "";
    fila = 0;
    columna = 0;
    foreach (Nodo *nodo, hijos) {
        delete nodo;
        nodo = NULL;
    }
}

char *Nodo::getToken()
{
    return token.toLatin1().data();
}

void Nodo::setToken(char *value)
{
    token.append(value);
}

char *Nodo::getLexema()
{
    return lexema.toLatin1().data();
}

void Nodo::setLexema(char *value)
{
    lexema.append(value);
}

int Nodo::getFila()
{
    return fila;
}

void Nodo::setFila(int value)
{
    fila = value;
}

int Nodo::getColumna()
{
    return columna;
}

void Nodo::setColumna(int value)
{
    columna = value;
}

QList<Nodo *> Nodo::getHijos()
{
    return hijos;
}

void Nodo::addHijo(Nodo *value)
{
    hijos << value;
}

char *Nodo::getText()
{
    QString texto;
    texto.append(token);
    texto.append(" \\n ");
    texto.append(lexema);

    return texto.toLatin1().data();
}
