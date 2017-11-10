#-------------------------------------------------
#
# Project created by QtCreator 2017-10-10T18:02:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyecto2_2s17
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Gramatica/nodo.cpp \
    Gramatica/parser.cpp \
    Gramatica/scanner.cpp \
    Ambitos/ambito.cpp \
    Ambitos/variable.cpp \
    principal.cpp \
    Ambitos/tipodato.cpp

HEADERS  += mainwindow.h \
    Gramatica/nodo.h \
    Gramatica/parser.h \
    Gramatica/scanner.h \
    Gramatica/lexico.l \
    Gramatica/sintactico.y \
    Ambitos/ambito.h \
    Ambitos/variable.h \
    principal.h \
    Ambitos/tipodato.h

FORMS    += mainwindow.ui \
    principal.ui
