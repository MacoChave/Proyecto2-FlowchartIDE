#include "mainwindow.h"
#include "ui_mainwindow.h"

extern int yyrestart(FILE *archivo);
extern int yyparse();
extern Nodo *getRaiz();
extern void vaciarArbol();

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

void MainWindow::on_btnProyecto_clicked()
{

}

void MainWindow::on_btnBuscarArchivo_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                    this,
                    tr("Seleccionar archivo"),
                    "/home/marco/Escritorio/",
                    "Archivo FI(*.fi)");

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

            int cmd_res = system("dot -Tpng /home/marco/Escritorio/ast.dot -o /home/marco/Escritorio/ast.png");

            cout << cmd_res << endl;

            if (cmd_res == 0)
            {
                cout << "SE GRAFICÓ EL AST" << endl;
                nodos << raiz;
            }

            vaciarArbol();
        }
        else
            cout << "NO SE CREÓ EL AST" << endl;
    }

    cout << "NUMERO DE CLASES ANALIZADAS: " << nodos.count() << endl;
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

void MainWindow::on_btnEjecutar_clicked()
{
    Nodo *principal = NULL;
    foreach (Nodo *nodo, nodos) {
        Nodo *clase = nodo->getHijos().back();
        principal = buscarPrincipal(clase->getHijos().at(3));
        if (principal != NULL)
            break;
    }

    if (principal != NULL)
        ejecutarMetodo(principal->getHijos().back(), 0);
}

bool MainWindow::buscarClase(QString nombre, Nodo *actual)
{
    Nodo *clase = actual->getHijos().back();
    QString id = clase->getHijos().at(3)->getLexema();

    return (id.compare(nombre) == 0) ? true : false;
}

Nodo *MainWindow::buscar(QString nombre)
{
    Nodo *procedimiento = NULL;

    foreach (Nodo *nodo, nodos) {
        Nodo *clase = nodo->getHijos().back();
        procedimiento = buscarProcedimiento(nombre, clase);
        if (procedimiento != NULL)
            break;
    }

    return procedimiento;
}

Nodo *MainWindow::buscarProcedimiento(QString nombre, Nodo *actual)
{
    Nodo *aux = NULL;
    Nodo *hijo = actual->getHijos().back();

    if (actual->getHijos().count() > 1)
    {
        // LIST_CUERPO -> LIST_CUERPO CUERPO
        if (hijo->getHijos().count() > 1)
        {
            Nodo *proc = hijo->getHijos().back();
            QString id = proc->getHijos().at(1)->getLexema();
            if (id.compare(nombre) == 0)
            {
                aux = hijo;

                return aux;
            }
        }

        aux = buscarProcedimiento(nombre, actual->getHijos().front());
    }
    else
    {
        // CUERPO
        if (hijo->getHijos().count() > 1)
        {
            Nodo *proc = hijo->getHijos().back();
            QString id = proc->getHijos().at(1)->getLexema();
            if (id.compare(nombre) == 0)
                aux = hijo;
        }
    }

    return aux;
}

Nodo *MainWindow::buscarPrincipal(Nodo *actual)
{
    Nodo *aux = NULL;
    Nodo *hijo = actual->getHijos().back();

    if (actual->getHijos().count() > 1)
    {
        // LIST_CUERPO -> LIST_CUERPO CUERPO
        if (hijo->getHijos().count() == 1)
        {
            aux = hijo->getHijos().front();

            return aux;
        }

        aux = buscarPrincipal(actual->getHijos().front());
    }
    else
    {
        // CUERPO
        if (hijo->getHijos().count() == 1)
            aux = hijo->getHijos().front();
    }

    return aux;
}

/*
 * accion 0 -> NADA | 1 -> DIBUJAR | 2 -> OPERAR
*/
void MainWindow::ejecutarMetodo(Nodo *actual, int accion)
{
    Nodo *hijo = actual->getHijos().back();

    if (actual->getHijos().count() > 1)
        ejecutarMetodo(actual->getHijos().front(), accion);

    if (hijo->getToken().compare("DECLARACION"))
    {
        // VISIBILIDAD  Var  TIPO  LIST_ID  ASIGN_DEC
    }
    else if (hijo->getToken().compare("ASIGNACION"))
    {
        // Id  =  COND
    }
    else if (hijo->getToken().compare("LLAMADA"))
    {
        // Id  ATTRS
    }
}

void MainWindow::ejecutarFuncion(Nodo *actual, int accion)
{

}

/*
 * cadena -> 0
 * entero -> 1
 * decimal -> 2
 * boolean -> 3
*/
QString MainWindow::obtenerCOND(Nodo *actual, int accion)
{
    /*
    QString result;

    if (actual->getHijos().count() == 3)
    {
        if (actual->getHijos().at(1)->getToken().compare("RELACIONAL") == 0)
        {
            // E REL E
            QString relacion = actual->getHijos().at(1);
            QString izq = obtenerE(actual->getHijos().front());
            QString der = obtenerE(actual->getHijos().back());
        }
        else
        {
            if (actual->getHijos().at(1)->getLexema().compare("&&") == 0)
            {
                // COND && COND
                QString izq = obtenerCOND(actual->getHijos().front());
                QString der = obtenerCOND(actual->getHijos().back());
            }
            else if (actual->getHijos().at(1)->getLexema().compare("!&&") == 0)
            {
                // COND !&& COND
                QString izq = obtenerCOND(actual->getHijos().front());
                QString der = obtenerCOND(actual->getHijos().back());
            }
            else if (actual->getHijos().at(1)->getLexema().compare("||") == 0)
            {
                // COND || COND
                QString izq = obtenerCOND(actual->getHijos().front());
                QString der = obtenerCOND(actual->getHijos().back());
            }
            else if (actual->getHijos().at(1)->getLexema().compare("!||") == 0)
            {
                // COND !|| COND
                QString izq = obtenerCOND(actual->getHijos().front());
                QString der = obtenerCOND(actual->getHijos().back());
            }
            else
            {
                // COND &| COND
                QString izq = obtenerCOND(actual->getHijos().front());
                QString der = obtenerCOND(actual->getHijos().back());
            }
        }
    }
    else if (actual->getHijos().count() == 2)
    {
        // ! COND
        QString der = obtenerCOND(actual->getHijos().back());
    }
    else
    {
        // E
        result = obtenerE(actual->getHijos().front());
    }

    return result;
    */
}

QString MainWindow::obtenerE(Nodo *actual, int accion)
{
    /*
    QString result;
    if (actual->getHijos().count() == 3)
    {
        if (actual->getHijos().at(1)->getLexema().compare("---") == 0)
        {
            // ( E )
            result = obtenerE(actual->getHijos().at(1));
        }
        else
        {
            QString izq = obtenerE(actual->getHijos().front());
            QString der = obtenerE(actual->getHijos().back());

            if (actual->getHijos().at(1)->getLexema().compare("+") == 0)
            {
                // E + E

            }
            else if (actual->getHijos().at(1)->getLexema().compare("-") == 0)
            {
                // E - E
            }
            else if (actual->getHijos().at(1)->getLexema().compare("*") == 0)
            {
                // E * E
            }
            else if (actual->getHijos().at(1)->getLexema().compare("/") == 0)
            {
                // E / E
            }
            else
            {
                // E ^ E
            }
        }
    }
    else
    {
        if (actual->getHijos().front()->getToken().compare("tokenCadena") == 0)
        {
            // cadena
            result = actual->getHijos().front()->getLexema();
            result.push_front('0');
        }
        else if (actual->getHijos().front()->getToken().compare("tokenEntero") == 0)
        {
            // entero
            result = actual->getHijos().front()->getLexema();
            result.push_front('1');
        }
        else if (actual->getHijos().front()->getToken().compare("tokenDecimal") == 0)
        {
            // decimal
            result = actual->getHijos().front()->getLexema();
            result.push_front('2');
        }
        else if (actual->getHijos().front()->getToken().compare("tokenId") == 0)
        {
            // id
        }
        else
        {
            // LLAMADA
        }
    }

    return result;
    */
}
