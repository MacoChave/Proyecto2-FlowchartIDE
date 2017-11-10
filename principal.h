#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QWidget>
#include <QTextEdit>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QFileSystemModel>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <QList>
#include <cstdlib>
#include <math.h>
#include "Gramatica/nodo.h"
#include "Ambitos/ambito.h"
#include "Ambitos/variable.h"
#include "Ambitos/tipodato.h"

namespace Ui {
class Principal;
}

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal(QWidget *parent = 0);
    ~Principal();

private slots:
    void on_actionNewFile_triggered();

    void on_actionOpenFile_triggered();

    void on_actionOpenProject_triggered();

    void on_actionSaveFile_triggered();

    void on_actionSaveAsFile_triggered();

    void on_actionClose_triggered();

    void on_actionCloseAll_triggered();

    void on_actionCloseProject_triggered();

    void on_actionBuild_triggered();

    void on_actionRun_triggered();

    void on_actionErrores_triggered();

    void on_actionShowErrorTable_triggered();

    void on_actionShowSymbolTable_triggered();

    void on_treeFiles_clicked(const QModelIndex &index);

private:
    Ui::Principal *ui;

    int countFiles;

    int width;

    int height;

    QList<Nodo*> nodos;

    FILE *archivoInput;

    int contador = 1;

    QFileSystemModel *dirModel;

    QString fileSelected;

    QList<Ambito *> ambitos;

    void createTab(QString name, QString text);

    QString getTextSelectedTab(QWidget *selectedTab);

    void graficarAST(QString padre, Nodo *actual);

    void escribir(char *texto, char *filename, char *tipo);

    bool buscarClase(QString nombre, Nodo *actual);

    Nodo *buscarMain(Nodo *cuerpos);

    Nodo *buscar(QString nombre);

    Nodo *buscarProcedimiento(QString nombre, Nodo *cuerpos);

    void ejecutarMetodo(Nodo *sentencias);

    TipoDato *ejecutarFuncion(Nodo *sentencias);

    void dibujarMetodo(Nodo *sentencias);

    TipoDato *obtenerCOND(Nodo *actual);

    TipoDato *obtenerE(Nodo *actual);

    QString obtenerRel(Nodo *actual);
};

#endif // PRINCIPAL_H
