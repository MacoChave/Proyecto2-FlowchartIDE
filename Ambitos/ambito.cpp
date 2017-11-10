#include "ambito.h"

Ambito::Ambito()
{
    nombre = "";
    tipo = "";
}

Ambito::Ambito(QString nombre_, QString tipo_)
{
    nombre = nombre_;
    tipo = tipo_;
}

Ambito::Ambito(QString nombre_, QString tipo_, QList<Variable *> parametros_, QList<Variable *> variables)
{
    nombre = nombre_;
    tipo = tipo_;
    parametros = parametros_;
}

QString Ambito::getNombre()
{
    return nombre;
}

void Ambito::setNombre(QString value)
{
    nombre = value;
}

QString Ambito::getTipo()
{
    return tipo;
}

void Ambito::setTipo(QString value)
{
    tipo = value;
}

QList<Variable *> Ambito::getVariables()
{
    return variables;
}

void Ambito::setVariable(Variable *value)
{
    variables << value;
}

Variable *Ambito::getRetorno()
{
    return retorno;
}

void Ambito::setRetorno(Variable *value)
{
    retorno = value;
}
