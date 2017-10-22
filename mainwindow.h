#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <QFileDialog>
#include <QString>
#include "Gramatica/nodo.h"

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

private:
    Ui::MainWindow *ui;
    FILE *archivoInput;
    int contador = 1;
    char path[128];
    void graficarAST(QString padre, Nodo *actual);
    void escribir(char *texto, char *filename, char *tipo);
};

#endif // MAINWINDOW_H
