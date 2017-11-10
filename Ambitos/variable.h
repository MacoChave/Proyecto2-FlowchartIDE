#ifndef VARIABLE_H
#define VARIABLE_H
#include <QString>

class Variable
{
    QString visibilidad;
    QString tipo;
    QString nombre;
    QString valor;
public:
    Variable();
    Variable(QString tipo, QString nombre, QString valor);
    Variable(QString nombre);
    QString getTipo() const;
    void setTipo(const QString &value);
    QString getNombre() const;
    void setNombre(const QString &value);
    QString getValor() const;
    void setValor(const QString &value);
    QString getVisibilidad() const;
    void setVisibilidad(const QString &value);
};

#endif // VARIABLE_H
