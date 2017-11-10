#include "variable.h"

Variable::Variable()
{
    tipo = "";
    nombre = "";
    valor = "";
}

Variable::Variable(QString tipo_, QString nombre_, QString valor_)
{
    tipo = tipo_;
    nombre = nombre_;
    valor = valor_;
}

Variable::Variable(QString nombre_)
{
    tipo = "";
    nombre = nombre_;
    valor = "";
}

QString Variable::getVisibilidad() const
{
    return visibilidad;
}

void Variable::setVisibilidad(const QString &value)
{
    visibilidad = value;
}

QString Variable::getTipo() const
{
    return tipo;
}

void Variable::setTipo(const QString &value)
{
    tipo = value;
}

QString Variable::getNombre() const
{
    return nombre;
}

void Variable::setNombre(const QString &value)
{
    nombre = value;
}

QString Variable::getValor() const
{
    return valor;
}

void Variable::setValor(const QString &value)
{
    valor = value;
}
