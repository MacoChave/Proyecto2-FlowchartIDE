#include "mainwindow.h"
#include "ui_mainwindow.h"

extern int yyrestart(FILE *archivo);
extern int yyparse();
extern Nodo *getRaiz();
extern void vaciarArbol();
extern void deleteArbol();

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnBuscarArchivo_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                    this,
                    tr("Seleccionar archivo"),
                    "/home/marco/Escritorio/",
                    "Archivo TXT(*.txt)");

    strcpy(path, filename.toLatin1().data());
    ui->lblFilename->setText(filename);
}

void MainWindow::on_btnLeer_clicked()
{
    archivoInput = fopen(path, "r");

    if (archivoInput != NULL)
    {
        char texto[128];
        QString stringTexto;
        while (!feof(archivoInput))
        {
            fgets(texto, 256, archivoInput);
            stringTexto.append(texto);
            fflush(archivoInput);
        }

        fclose(archivoInput);

        ui->edtCajaTexto->setText(stringTexto);
    }
}

void MainWindow::on_btnAnalizar_clicked()
{
    archivoInput = fopen(path, "r");

    if (archivoInput != NULL)
    {
        Nodo *raiz = NULL;
        vaciarArbol();
        yyrestart(archivoInput);
        yyparse();
        raiz = getRaiz();

        if (raiz != NULL)
        {
            escribir("digraph dot {\n", "/home/marco/Escritorio/ast.dot", "w");
            escribir("node[shape = \"box\"];\n", "/home/marco/Escritorio/ast.dot", "a");
            escribir("nodo0[label = \"", "/home/marco/Escritorio/ast.dot", "a");
            escribir(raiz->getText(), "/home/marco/Escritorio/ast.dot", "a");
            escribir("\"]\n", "/home/marco/Escritorio/ast.dot", "a");

            graficarAST("nodo0", raiz);

            escribir("}", "/home/marco/Escritorio/ast.dot", "a");

            system("dot -Tpng /home/marco/Escritorio/ast.dot -o /home/marco/Escritorio/ast.png");

            cout << "SE CREÓ EL ÁRBOL SINTÁCTICO" << endl;
        }
        else
            cout << "NO SE CREÓ EL ÁRBOL SINTÁCTICO" << endl;
    }
}

void MainWindow::graficarAST(QString padre, Nodo *actual)
{
    foreach (Nodo *hijo, actual->getHijos()) {
        if (hijo != NULL)
        {
            QString nombreHijo = "nodo";
            nombreHijo.append(QString::number(contador));

            escribir(nombreHijo.toLatin1().data(), "/home/marco/Escritorio/ast.dot", "a");
            escribir("[label = \"", "/home/marco/Escritorio/ast.dot", "a");
            escribir(hijo->getText(), "/home/marco/Escritorio/ast.dot", "a");
            escribir("\"];\n", "/home/marco/Escritorio/ast.dot", "a");
            escribir(padre.toLatin1().data(), "/home/marco/Escritorio/ast.dot", "a");
            escribir(" -> ", "/home/marco/Escritorio/ast.dot", "a");
            escribir(nombreHijo.toLatin1().data(), "/home/marco/Escritorio/ast.dot", "a");
            escribir(";\n", "/home/marco/Escritorio/ast.dot", "a");

            contador++;
            graficarAST(nombreHijo, hijo);
        }
    }
}

void MainWindow::escribir(char *texto, char *filename, char *tipo)
{
    FILE *grafico = fopen(filename, tipo);

    if (!feof(grafico))
    {
        fprintf(grafico, "%s", texto);
        fflush(grafico);
        fclose(grafico);
    }
}

