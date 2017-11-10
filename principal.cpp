#include "principal.h"
#include "ui_principal.h"

extern int yyrestart(FILE *archivo);
extern int yyparse();
extern Nodo *getRaiz();
extern void vaciarArbol();

Principal::Principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal)
{
    countFiles = 0;
    width = 641;
    height = 371;
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::on_actionNewFile_triggered()
{
    createTab("Nuevo", "");
}

void Principal::on_actionOpenFile_triggered()
{
    QString texto;
    QString filename = QFileDialog::getOpenFileName(
                    this,
                    "Seleccionar archivo",
                    "/home/marco/Escritorio/",
                    "Archivo FI(*.fi)"
                );

    QFile file(filename);

    if (!file.open(QFile::ReadOnly | QFile::Text))
        ui->edtConsole->append("[e] Error al abrir el archivo" + filename + "\n");
    else
    {
        QTextStream in (&file);
        texto = in.readAll();

        file.close();
    }

    createTab(filename, texto);
}

void Principal::on_actionOpenProject_triggered()
{
    QString path = QFileDialog::getExistingDirectory(
                this,
                "Seleccionar proyecto",
                "/home/marco/Escritorio/"
                );

    dirModel = new QFileSystemModel(this);
    dirModel->setFilter(QDir::NoDotAndDotDot | QDir::Files | QDir::CaseSensitive);
    dirModel->setRootPath(path);
    ui->edtConsole->append(path + "\n");

    ui->treeFiles->setModel(dirModel);
}

void Principal::on_actionSaveFile_triggered()
{
    QString filename = ui->tabFiles->currentWidget()->objectName();
    if (filename.contains(".fi"))
    {
        QFile file(filename);

        if (!file.open(QFile::WriteOnly | QFile::Text))
            ui->edtConsole->append("[e] Error al abrir el archivo" + filename + "\n");
        else
        {
            QString text = getTextSelectedTab(ui->tabFiles->currentWidget());
            QTextStream out (&file);
            out << text;

            file.close();
        }
    }
    else
    {
        on_actionSaveAsFile_triggered();
    }
}

void Principal::on_actionSaveAsFile_triggered()
{
    QString filename = QFileDialog::getSaveFileName(
                this,
                "Seleccionar destino",
                "/home/marco/Escritorio/",
                "Archivo FI(*.fi)"
                );

    QFile file(filename);

    if (!file.open(QFile::WriteOnly | QFile::Text))
        ui->edtConsole->append("[e] Error al abrir el archivo" + filename + "\n");
    else
    {
        QString text = getTextSelectedTab(ui->tabFiles->currentWidget());
        QTextStream out (&file);
        out << text;

        file.close();
    }

    ui->tabFiles->setTabText(ui->tabFiles->currentIndex(), filename);

    dirModel->rootPathChanged(dirModel->rootPath());
}

void Principal::on_actionClose_triggered()
{
    ui->tabFiles->currentWidget()->close();
}

void Principal::on_actionCloseAll_triggered()
{
    ui->tabFiles->clear();
}

void Principal::on_actionCloseProject_triggered()
{
    on_actionCloseAll_triggered();
    dirModel->rootPathChanged("");
}

void Principal::on_actionBuild_triggered()
{
    archivoInput = fopen(fileSelected.toLatin1().data(), "r");

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

void Principal::on_actionRun_triggered()
{
    Nodo *metodoMain = NULL;

    foreach (Nodo *s, nodos) {
        Nodo *clase = s->getHijos().back();
        metodoMain = buscarMain(clase->getHijos().back());
        if (metodoMain != NULL)
            break;
    }

    if (metodoMain != NULL)
    {
        Ambito *ambito = new Ambito("MAIN", "VOID");
        ambitos << ambito;
        ejecutarMetodo(metodoMain->getHijos().back());
    }
    else
        ui->edtConsole->append("[e] No se encontró método Main\n");
}

void Principal::on_actionErrores_triggered()
{

}

void Principal::on_actionShowErrorTable_triggered()
{

}

void Principal::on_actionShowSymbolTable_triggered()
{

}

void Principal::on_treeFiles_clicked(const QModelIndex &index)
{
    fileSelected = dirModel->filePath(index);

    if (fileSelected.endsWith(".fi"))
        ui->edtConsole->append(fileSelected);
    else
        fileSelected.clear();
}

void Principal::createTab(QString name, QString text)
{
    QString objectName;

    if (!name.endsWith(".fi"))
    {
        objectName.append(name);
        objectName.append(QString::number(countFiles));
        countFiles++;
    }
    else
    {
        objectName.append(QString::number(countFiles));
        countFiles++;
    }

    QWidget *tab = new QWidget(ui->tabFiles);
    tab->setObjectName("tab" + objectName);

    ui->tabFiles->addTab(tab, name);

    QTextEdit *edt = new QTextEdit(text, tab);
    edt->setObjectName("edt" + objectName);
    edt->setGeometry(10, 10, width, height);
}

QString Principal::getTextSelectedTab(QWidget *selectedTab)
{
    QString text;
    QTextEdit *edt = (QTextEdit *) selectedTab->childAt(10, 10);
    text.append(edt->toPlainText());

    return text;
}

void Principal::graficarAST(QString padre, Nodo *actual)
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

void Principal::escribir(char *texto, char *filename, char *tipo)
{
    FILE *grafico = fopen(filename, tipo);

    if (!feof(grafico))
    {
        fprintf(grafico, "%s", texto);
        fflush(grafico);
        fclose(grafico);
    }
}

bool Principal::buscarClase(QString nombre, Nodo *actual)
{
    Nodo *clase = actual->getHijos().back();
    QString id = clase->getHijos().at(3)->getLexema();

    return (id.compare(nombre) == 0) ? true : false;
}

Nodo *Principal::buscarMain(Nodo *cuerpos)
{
    Nodo *cuerpo = cuerpos->getHijos().back();

    if (cuerpo->getHijos().back()->getToken().compare("PRINCIPAL") == 0)
    {
        return cuerpo->getHijos().back();
        cuerpo = NULL;
    }
    else
    {
        if (cuerpos->getHijos().count() > 1)
            return buscarMain(cuerpos->getHijos().front());
        else
            return NULL;
    }
}

Nodo *Principal::buscar(QString nombre)
{
    Nodo *procedimiento = NULL;

    foreach (Nodo *s, nodos) {
        Nodo *clase = s->getHijos().back();
        procedimiento = buscarProcedimiento(nombre, clase->getHijos().back());
        if (procedimiento != NULL)
            break;
    }

    return procedimiento;
}

Nodo *Principal::buscarProcedimiento(QString nombre, Nodo *cuerpos)
{
    Nodo *cuerpo = cuerpos->getHijos().back();
    Nodo *proc = cuerpo->getHijos().back();

    if (proc->getToken().compare("FUNCION") == 0
            || proc->getToken().compare("METODO") == 0)
    {
        if (proc->getHijos().at(1)->getLexema().compare(nombre) == 0)
            return proc;
        cuerpo = proc = 0;
    }
    else
    {
        if (cuerpos->getHijos().count() > 1)
            return buscarProcedimiento(nombre, cuerpos->getHijos().front());
        else
            return NULL;
    }
}

void Principal::ejecutarMetodo(Nodo *sentencias)
{
    Nodo *hijo = sentencias->getHijos().back();

    if (sentencias->getHijos().count() > 1)
        ejecutarMetodo(sentencias->getHijos().front());
}

TipoDato *Principal::ejecutarFuncion(Nodo *sentencias)
{
    TipoDato *result = 0;

    Nodo *hijo = sentencias->getHijos().back();

    if (sentencias->getHijos().count() > 1)
        ejecutarMetodo(sentencias->getHijos().front());

    return result;
}

TipoDato *Principal::obtenerCOND(Nodo *actual)
{
    TipoDato *result = 0;

    if (actual->getHijos().count() == 3)
    {
        if (actual->getHijos().front()->getToken().compare("COND") == 0)
        {
            // COND RELACIONAL COND
            TipoDato *cond_a, *cond_b;
            QString logico;

            cond_a = obtenerCOND(actual->getHijos().front());
            cond_b = obtenerCOND(actual->getHijos().back());
            logico = actual->getHijos().at(1)->getLexema();

            if (cond_a->tipo.compare("bool") == 0)
            {
                if (cond_b->tipo.compare("bool") == 0)
                {
                    result->tipo = "bool";
                    result->valor = "0";

                    if (logico.compare("&&") == 0)
                    {
                        // AND (&&)
                        if (cond_a->tipo.toInt() && cond_b->tipo.toInt())
                            result->valor = "1";
                    }
                    else if (logico.compare("!&&") == 0)
                    {
                        // NAND (!&&)
                        if (!(cond_a->tipo.toInt() && cond_b->tipo.toInt()))
                            result->valor = "1";
                    }
                    else if (logico.compare("||") == 0)
                    {
                        // OR (||)
                        if (cond_a->tipo.toInt() || cond_b->tipo.toInt())
                            result->valor = "1";
                    }
                    else if (logico.compare("!||") == 0)
                    {
                        // NOR (!||)
                        if (!(cond_a->tipo.toInt() || cond_b->tipo.toInt()))
                            result->valor = "1";
                    }
                    else
                    {
                        // XOR (^)
                        if (cond_a->tipo.toInt() ^ cond_b->tipo.toInt())
                            result->valor = "1";
                    }
                }
                else
                    ui->edtConsole->append("Error semantico. Tipo de dato erroneo\n");
            }
            else
                ui->edtConsole->append("Error semantico. Tipo de dato erroneo\n");

            delete (cond_a);
            delete (cond_b);
        }
        else
        {
            // E REL E
            TipoDato *e_a, *e_b;
            QString rel;
            result->tipo = "bool";
            result->valor = "0";
            e_a = obtenerE(actual->getHijos().front());
            e_b = obtenerE(actual->getHijos().back());
            rel = obtenerRel(actual->getHijos().at(1));
            if (rel.compare("==") == 0)
            {
                if (e_a->valor.compare(e_b->valor) == 0)
                    result->valor = "1";
            }
            else if (rel.compare("!=") == 0)
            {
                if (e_a->valor.compare(e_b->valor) != 0)
                    result->valor = "1";
            }
            else if (rel.compare("<") == 0)
            {
                if (e_a->valor.compare(e_b->valor) < 0)
                    result->valor = "1";
            }
            else if (rel.compare(">") == 0)
            {
                if (e_a->valor.compare(e_b->valor) > 0)
                    result->valor = "1";
            }
            else if (rel.compare("<=") == 0)
            {
                if (e_a->valor.compare(e_b->valor) <= 0)
                    result->valor = "1";
            }
            else
            {
                // >=
                if (e_a->valor.compare(e_b->valor) >= 0)
                    result->valor = "1";
            }
        }
    }
    else if (actual->getHijos().count() == 2)
    {
        // ! COND
        TipoDato *cond = obtenerCOND(actual->getHijos().back());

        if (cond->tipo.compare("bool") == 0)
        {
            result->tipo = "bool";
            if (cond->valor.compare("1") == 0)
                result->valor = "0";
            else
                result->valor = "1";
        }
        else
            ui->edtConsole->append("Error semantico. Tipo de dato erroneo\n");
    }
    else //E
        result = obtenerE(actual->getHijos().front());

    return result;
}

TipoDato *Principal::obtenerE(Nodo *actual)
{
    TipoDato *result = 0;

    if (actual->getHijos().count() == 3)
    {
        TipoDato *e_a, *e_b;

        if (actual->getHijos().at(1)->getLexema().compare("---") != 0)
        {
            e_a = obtenerE(actual->getHijos().front());
            e_b = obtenerE(actual->getHijos().back());
            char operando = actual->getHijos().at(1)->getLexema().toLatin1().data()[0];

            switch (operando) {
            case '+':
                if (e_a->tipo.compare("string") == 0 || e_b->tipo.compare("string") == 0)
                {
                    result->tipo = "string";
                    result->valor = e_a->valor + e_b->valor;
                }
                else if (e_a->tipo.compare("bool") == 0 && e_b->tipo.compare("bool") == 0)
                {
                    result->tipo = "bool";

                    if (e_a->valor.toInt() || e_b->valor.toInt())
                        result->valor = "1";
                    else
                        result->valor = "0";
                }
                else
                {
                    // double(int | char | bool | double) + double(int | char | bool | double)
                    if (e_a->tipo.compare("double") || e_b->tipo.compare("double") == 0)
                        result->tipo = "double";
                    else
                        result->tipo = "int";

                    result->valor = QString::number(e_a->valor.toDouble() + e_b->valor.toDouble());
                }
                break;
            case '-':
                if (e_a->tipo.compare("string") == 0 || e_b->tipo.compare("string") == 0)
                {
                    ui->edtConsole->append("Error Semántico. No se puede hacer string - string");
                }
                else if (e_a->tipo.compare("bool") == 0 && e_b->tipo.compare("bool") == 0)
                {
                    ui->edtConsole->append("Error Semántico. No se puede hacer bool - bool");
                }
                else
                {
                    // double(int | char | bool | double) - double(int | char | bool | double)
                    if (e_a->tipo.compare("double") || e_b->tipo.compare("double") == 0)
                        result->tipo = "double";
                    else
                        result->tipo = "int";

                    result->valor = QString::number(e_a->valor.toDouble() - e_b->valor.toDouble());
                }
                break;
            case '*':
                if (e_a->tipo.compare("string") == 0 || e_b->tipo.compare("string") == 0)
                {
                    ui->edtConsole->append("Error Semántico. No se puede hacer string * string");
                }
                else if (e_a->tipo.compare("bool") == 0 && e_b->tipo.compare("bool") == 0)
                {
                    result->tipo = "bool";

                    if (e_a->valor.toInt() && e_b->valor.toInt())
                        result->valor = "1";
                    else
                        result->valor = "0";
                }
                else
                {
                    // double(int | char | bool | double) * double(int | char | bool | double)
                    if (e_a->tipo.compare("double") || e_b->tipo.compare("double") == 0)
                        result->tipo = "double";
                    else
                        result->tipo = "int";

                    result->valor = QString::number(e_a->valor.toDouble() * e_b->valor.toDouble());
                }
                break;
            case '/':
                if (e_a->tipo.compare("string") == 0 || e_b->tipo.compare("string") == 0)
                {
                    ui->edtConsole->append("Error Semántico. No se puede hacer string / string");
                }
                else if (e_a->tipo.compare("bool") == 0 && e_b->tipo.compare("bool") == 0)
                {
                    ui->edtConsole->append("Error Semántico. No se puede hacer bool / bool");
                }
                else
                {
                    // double(int | char | bool | double) / double(int | char | bool | double)
                    result->tipo = "double";

                    result->valor = QString::number(e_a->valor.toDouble() / e_b->valor.toDouble());
                }
                break;
            case '^':
                if (e_a->tipo.compare("string") == 0 || e_b->tipo.compare("string") == 0)
                {
                    ui->edtConsole->append("Error Semántico. No se puede hacer string ^ string");
                }
                else if (e_a->tipo.compare("bool") == 0 && e_b->tipo.compare("bool") == 0)
                {
                    ui->edtConsole->append("Error Semántico. No se puede hacer bool ^ bool");
                }
                else
                {
                    // double(int | char | bool | double) ^ double(int | char | bool | double)
                    if (e_a->tipo.compare("double") || e_b->tipo.compare("double") == 0)
                        result->tipo = "double";
                    else
                        result->tipo = "int";

                    result->valor = QString::number(pow(e_a->valor.toDouble(), e_b->valor.toDouble()));
                }
                break;
            default:
                break;
            }

            delete (e_a);
            delete (e_b);
        }
        else
        {
            // ( E )
            result = obtenerE(actual->getHijos().at(1));
        }
    }
    else
    {
        if (actual->getHijos().back()->getToken().compare("tokenCadena") == 0)
        {
            // cadena
            result->tipo = "string";
            result->valor = actual->getHijos().back()->getLexema();
        }
        else if (actual->getHijos().back()->getToken().compare("tokenEntero") == 0)
        {
            // entero
            result->tipo = "int";
            result->valor = actual->getHijos().back()->getLexema();
        }
        else if (actual->getHijos().back()->getToken().compare("tokenChar") == 0)
        {
            // char
            result->tipo = "char";
            result->valor = actual->getHijos().back()->getLexema();
        }
        else if (actual->getHijos().back()->getToken().compare("tokenDecimal") == 0)
        {
            // decimal
            result->tipo = "double";
            result->valor = actual->getHijos().back()->getLexema();
        }
        else if (actual->getHijos().back()->getToken().compare("tokenBool") == 0)
        {
            // bool
            result->tipo = "bool";
            result->valor = actual->getHijos().back()->getLexema();
        }
        else if (actual->getHijos().back()->getToken().compare("tokenId") == 0)
        {
            // id
            QString var = actual->getHijos().back()->getLexema();

            foreach (Ambito *ambito, ambitos) {
                foreach (Variable *variable, ambito->getVariables()) {
                    if (variable->getNombre().compare(var) == 0)
                    {
                        result->tipo = variable->getTipo();
                        result->valor = variable->getValor();
                        break;
                    }
                }
                if (result != NULL)
                    break;
            }
        }
        else
        {
            // LLAMADA -> tokenId tokenOPar ATTRS tokenCPar
            Nodo *proc = actual->getHijos().back();
            proc = buscar(proc->getHijos().at(0)->getLexema());
            result = ejecutarFuncion(proc);

            ui->edtConsole->append("Error semantico. Función no implementada\n");
        }
    }

    return result;
}

QString Principal::obtenerRel(Nodo *actual)
{
    return actual->getHijos().front()->getLexema();
}

void Principal::dibujarMetodo(Nodo *sentencias)
{

}
