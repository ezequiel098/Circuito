#include "mainwindow.h"
#include <QApplication>
#include<locale.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    setlocale(LC_ALL,"");
    //w.setWindowTitle("Simulador de Circuitos Logicos");
    w.show();

    return a.exec();
}
