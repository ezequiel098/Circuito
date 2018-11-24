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

PortaLogica* MainWindow::verPortaLogica(QPushButton* botao){
    return &(PortaLogicaDoBotao[botao]);
}
void MainWindow::cadastrarPortaLogica(QPushButton* botao, PortaLogica pL){
    PortaLogicaDoBotao[botao] = pL;
}
bool MainWindow::PortaLogicaJaCadastrada(QPushButton* botao){
    return PortaLogicaDoBotao.count(botao);
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

void MainWindow::on_fio_botao_clicked(){
    mudarEscolha(FIO);
}

void MainWindow::alterarEstadoBotoes(QPushButton* botao){
    switch(verEscolha()){
        case E:
            if(!PortaLogicaJaCadastrada(botao)){
                class::E e;
                cadastrarPortaLogica(botao, e);

                botao->setText("");
                botao->setIcon(QIcon("../Imagens/E.png"));
            }
        break;
        case OU:
            if(!PortaLogicaJaCadastrada(botao)){
                Ou ou;
                cadastrarPortaLogica(botao, ou);

                botao->setText("");
                botao->setIcon(QIcon("../Imagens/Ou.png"));
            }
        break;
        case OU_EXCLUSIVO:
            if(!PortaLogicaJaCadastrada(botao)){
                OuExclusivo Xou;
                cadastrarPortaLogica(botao, Xou);

                botao->setText("");
                botao->setIcon(QIcon("../Imagens/OuExclusivo.png"));
            }
        break;
        case NAO:
            if(!PortaLogicaJaCadastrada(botao)){
                Nao nao;
                cadastrarPortaLogica(botao, nao);

                botao->setText("");
                botao->setIcon(QIcon("../Imagens/Nao.png"));
            }
        break;
        case FIO:

        break;
    }
}

void MainWindow::on_pushButton_7_clicked(){
    alterarEstadoBotoes(ui->pushButton_7);
}

void MainWindow::on_pushButton_8_clicked(){
    alterarEstadoBotoes(ui->pushButton_8);
}

void MainWindow::on_pushButton_9_clicked(){
    alterarEstadoBotoes(ui->pushButton_9);
}

void MainWindow::on_pushButton_10_clicked(){
    alterarEstadoBotoes(ui->pushButton_10);
}

void MainWindow::on_pushButton_11_clicked(){
    alterarEstadoBotoes(ui->pushButton_11);
}

void MainWindow::on_pushButton_12_clicked(){
    alterarEstadoBotoes(ui->pushButton_12);
}

void MainWindow::on_pushButton_13_clicked(){
    alterarEstadoBotoes(ui->pushButton_13);
}

void MainWindow::on_pushButton_14_clicked(){
    alterarEstadoBotoes(ui->pushButton_14);
}

void MainWindow::on_pushButton_15_clicked(){
    alterarEstadoBotoes(ui->pushButton_15);
}

void MainWindow::on_pushButton_16_clicked(){
    alterarEstadoBotoes(ui->pushButton_16);
}

void MainWindow::on_pushButton_17_clicked(){
    alterarEstadoBotoes(ui->pushButton_17);
}

void MainWindow::on_pushButton_18_clicked(){
    alterarEstadoBotoes(ui->pushButton_18);
}

void MainWindow::on_pushButton_19_clicked(){
    alterarEstadoBotoes(ui->pushButton_19);
}

void MainWindow::on_pushButton_20_clicked(){
    alterarEstadoBotoes(ui->pushButton_20);
}

void MainWindow::on_pushButton_21_clicked(){
    alterarEstadoBotoes(ui->pushButton_21);
}

void MainWindow::on_pushButton_22_clicked(){
    alterarEstadoBotoes(ui->pushButton_22);
}

void MainWindow::on_pushButton_23_clicked(){
    alterarEstadoBotoes(ui->pushButton_23);
}

void MainWindow::on_pushButton_24_clicked(){
    alterarEstadoBotoes(ui->pushButton_24);
}

void MainWindow::on_pushButton_25_clicked(){
    alterarEstadoBotoes(ui->pushButton_25);
}

void MainWindow::on_pushButton_26_clicked(){
    alterarEstadoBotoes(ui->pushButton_26);
}

void MainWindow::on_pushButton_27_clicked(){
    alterarEstadoBotoes(ui->pushButton_27);
}

void MainWindow::on_pushButton_28_clicked(){
    alterarEstadoBotoes(ui->pushButton_28);
}

void MainWindow::on_pushButton_29_clicked(){
    alterarEstadoBotoes(ui->pushButton_29);
}

void MainWindow::on_pushButton_30_clicked(){
    alterarEstadoBotoes(ui->pushButton_30);
}

void MainWindow::on_pushButton_31_clicked(){
    alterarEstadoBotoes(ui->pushButton_31);
}

void MainWindow::on_pushButton_32_clicked(){
    alterarEstadoBotoes(ui->pushButton_32);
}

void MainWindow::on_pushButton_33_clicked(){
    alterarEstadoBotoes(ui->pushButton_33);
}

void MainWindow::on_pushButton_34_clicked(){
    alterarEstadoBotoes(ui->pushButton_34);
}

void MainWindow::on_pushButton_35_clicked(){
    alterarEstadoBotoes(ui->pushButton_35);
}

void MainWindow::on_pushButton_36_clicked(){
    alterarEstadoBotoes(ui->pushButton_36);
}

void MainWindow::on_pushButton_37_clicked(){
    alterarEstadoBotoes(ui->pushButton_37);
}

void MainWindow::on_pushButton_38_clicked(){
    alterarEstadoBotoes(ui->pushButton_38);
}

void MainWindow::on_pushButton_39_clicked(){
    alterarEstadoBotoes(ui->pushButton_39);
}

void MainWindow::on_pushButton_40_clicked(){
    alterarEstadoBotoes(ui->pushButton_40);
}

void MainWindow::on_pushButton_41_clicked(){
    alterarEstadoBotoes(ui->pushButton_41);
}

void MainWindow::on_pushButton_42_clicked(){
    alterarEstadoBotoes(ui->pushButton_42);
}

void MainWindow::on_pushButton_43_clicked(){
    alterarEstadoBotoes(ui->pushButton_43);
}

void MainWindow::on_pushButton_44_clicked(){
    alterarEstadoBotoes(ui->pushButton_44);
}

void MainWindow::on_pushButton_45_clicked(){
    alterarEstadoBotoes(ui->pushButton_45);
}

void MainWindow::on_pushButton_46_clicked(){
    alterarEstadoBotoes(ui->pushButton_46);
}

void MainWindow::on_pushButton_47_clicked(){
    alterarEstadoBotoes(ui->pushButton_47);
}

void MainWindow::on_pushButton_48_clicked(){
    alterarEstadoBotoes(ui->pushButton_48);
}

void MainWindow::on_pushButton_49_clicked(){
    alterarEstadoBotoes(ui->pushButton_49);
}

void MainWindow::on_pushButton_50_clicked(){
    alterarEstadoBotoes(ui->pushButton_50);
}

void MainWindow::on_pushButton_51_clicked(){
    alterarEstadoBotoes(ui->pushButton_51);
}

void MainWindow::on_pushButton_52_clicked(){
    alterarEstadoBotoes(ui->pushButton_52);
}

void MainWindow::on_pushButton_53_clicked(){
    alterarEstadoBotoes(ui->pushButton_53);
}

void MainWindow::on_pushButton_54_clicked(){
    alterarEstadoBotoes(ui->pushButton_54);
}

void MainWindow::on_pushButton_55_clicked(){
    alterarEstadoBotoes(ui->pushButton_55);
}

void MainWindow::on_pushButton_56_clicked(){
    alterarEstadoBotoes(ui->pushButton_56);
}

void MainWindow::on_pushButton_57_clicked(){
    alterarEstadoBotoes(ui->pushButton_57);
}

void MainWindow::on_pushButton_58_clicked(){
    alterarEstadoBotoes(ui->pushButton_58);
}

void MainWindow::on_pushButton_59_clicked(){
    alterarEstadoBotoes(ui->pushButton_59);
}

void MainWindow::on_pushButton_60_clicked(){
    alterarEstadoBotoes(ui->pushButton_60);
}

void MainWindow::on_pushButton_61_clicked(){
    alterarEstadoBotoes(ui->pushButton_61);
}

void MainWindow::on_pushButton_62_clicked(){
    alterarEstadoBotoes(ui->pushButton_62);
}

void MainWindow::on_pushButton_63_clicked(){
    alterarEstadoBotoes(ui->pushButton_63);
}

void MainWindow::on_pushButton_64_clicked(){
    alterarEstadoBotoes(ui->pushButton_64);
}

void MainWindow::on_pushButton_65_clicked(){
    alterarEstadoBotoes(ui->pushButton_65);
}

void MainWindow::on_pushButton_66_clicked(){
    alterarEstadoBotoes(ui->pushButton_66);
}

void MainWindow::on_pushButton_67_clicked(){
    alterarEstadoBotoes(ui->pushButton_67);
}

void MainWindow::on_pushButton_68_clicked(){
    alterarEstadoBotoes(ui->pushButton_68);
}

void MainWindow::on_pushButton_69_clicked(){
    alterarEstadoBotoes(ui->pushButton_69);
}

void MainWindow::on_pushButton_70_clicked(){
    alterarEstadoBotoes(ui->pushButton_70);
}

void MainWindow::on_pushButton_71_clicked(){
    alterarEstadoBotoes(ui->pushButton_71);
}

void MainWindow::on_pushButton_72_clicked(){
    alterarEstadoBotoes(ui->pushButton_72);
}

void MainWindow::on_pushButton_73_clicked(){
    alterarEstadoBotoes(ui->pushButton_73);
}

void MainWindow::on_pushButton_74_clicked(){
    alterarEstadoBotoes(ui->pushButton_74);
}

void MainWindow::on_pushButton_75_clicked(){
    alterarEstadoBotoes(ui->pushButton_75);
}

void MainWindow::on_pushButton_76_clicked(){
    alterarEstadoBotoes(ui->pushButton_76);
}

void MainWindow::on_pushButton_77_clicked(){
    alterarEstadoBotoes(ui->pushButton_77);
}

void MainWindow::on_pushButton_78_clicked(){
    alterarEstadoBotoes(ui->pushButton_78);
}


