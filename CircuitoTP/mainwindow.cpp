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
