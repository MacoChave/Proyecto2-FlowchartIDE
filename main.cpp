/*
#include "mainwindow.h"
*/
#include "principal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*
    MainWindow w;
    w.show();
    */
    Principal p;
    p.show();

    return a.exec();
}
