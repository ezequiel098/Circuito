#include "mainwindow.h"
#include "ui_mainwindow.h"

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

Escolhas MainWindow::verEscolha(){
    return escolha;
}

void MainWindow::mudarEscolha(Escolhas e){
    escolha = e;
}

void MainWindow::on_e_botao_clicked(){
    mudarEscolha(E);
}

void MainWindow::on_ou_botao_clicked(){
    mudarEscolha(OU);
}

void MainWindow::on_ouExclusiv_Botao_clicked(){
    mudarEscolha(OU_EXCLUSIVO);
}

void MainWindow::on_nao_botao_clicked(){
    mudarEscolha(NAO);
}

void MainWindow::on_botao_botao_clicked(){
    mudarEscolha(BOTAO);
}

void MainWindow::on_LED_botao_clicked(){
    mudarEscolha(LED);
}

void MainWindow::on_pushButton_7_clicked(){
    QIcon icone;
    switch(verEscolha()){
        case E:
            icone = QIcon("../Imagens/E.png");
        break;
        case OU:
            icone = QIcon("../Imagens/Ou.png");
        break;
        case OU_EXCLUSIVO:
            icone = QIcon("../Imagens/OuExclusivo.png");
        break;
        case NAO:
            icone = QIcon("../Imagens/Nao.png");
        break;
    }

    ui->pushButton_7->setText("");
    ui->pushButton_7->setIcon(icone);
}
