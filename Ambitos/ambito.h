#ifndef AMBITO_H
#define AMBITO_H
#include <QString>
#include <QList>
#include "Ambitos/variable.h"

class Ambito
{
    QString nombre;
    QString tipo;
    QList<Variable *> parametros;
    QList<Variable *> variables;
    Variable *retorno;
public:
    Ambito();
    Ambito(QString nombre_, QString tipo_);
    Ambito(QString nombre_, QString tipo_, QList<Variable *> parametros_, QList<Variable *> variables);
    QString getNombre();
    void setNombre(QString value);
    QString getTipo();
    void setTipo(QString value);
    QList<Variable *> getVariables();
    void setVariable(Variable *value);
    Variable *getRetorno();
    void setRetorno(Variable *value);
};

#endif // AMBITO_H
