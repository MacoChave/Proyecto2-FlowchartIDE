#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <QString>
#include <QList>
#include <cstdlib>
#include "Gramatica/nodo.h"
#include "Ambitos/ambito.h"
#include "Ambitos/variable.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnBuscarArchivo_clicked();

    void on_btnLeer_clicked();

    void on_btnAnalizar_clicked();

    void on_btnEjecutar_clicked();

    void on_btnProyecto_clicked();

private:
    Ui::MainWindow *ui;
    char path[128];
    QList<Nodo*> nodos;
    FILE *archivoInput;
    int contador = 1;
    QList<Ambito> ambitos;
    void graficarAST(QString padre, Nodo *actual);
    void escribir(char *texto, char *filename, char *tipo);
    Nodo *buscar(QString nombre);
    bool buscarClase(QString nombre, Nodo *actual);
    Nodo *buscarProcedimiento(QString nombre, Nodo *actual);
    Nodo *buscarPrincipal(Nodo *actual);
    void ejecutarMetodo(Nodo *actual, int accion);
    void ejecutarFuncion(Nodo *actual, int accion);
    QString obtenerCOND(Nodo *actual, int accion);
    QString obtenerE(Nodo *actual, int accion);
};

#endif // MAINWINDOW_H
