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

    if (token.compare("tokenCadena") == 0)
        lexema.remove("\"");
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

QString Nodo::getToken() const
{
    return token;
}

void Nodo::setToken(const QString &value)
{
    token = value;
}

QString Nodo::getLexema() const
{
    return lexema;
}

void Nodo::setLexema(const QString &value)
{
    lexema = value;
}

int Nodo::getFila() const
{
    return fila;
}

void Nodo::setFila(int value)
{
    fila = value;
}

int Nodo::getColumna() const
{
    return columna;
}

void Nodo::setColumna(int value)
{
    columna = value;
}
