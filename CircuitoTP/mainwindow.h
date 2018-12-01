#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <map>
#include <vector>
#include <iostream>
#include <QPainter>
#include <QPicture>
#include <QLabel>
#include <utility>
#include "portaslogica.h"
#include <exception>
#include <QBitmap>

using namespace std;

enum Escolhas {E, OU, OU_EXCLUSIVO, NAO, BOTAO0, BOTAO1, LED, FIOE, FIOS, BOTAOM, DEFAULT};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int contador;
    PortaLogica* pLAux;
    QPoint pAuxE, pAuxS;

    explicit MainWindow(QWidget *parent = NULL);
    ~MainWindow();

    Escolhas verEscolha();
    void mudarEscolha(Escolhas);

    void adicionarPivo(QPushButton*);
    void atualizarPivores();

    void adicionarPonto(QPoint, QPoint);

    PortaLogica* verPortaLogica(QPushButton*);
    bool PortaLogicaJaCadastrada(QPushButton*);
    void cadastrarPortaLogica(QPushButton*, PortaLogica*);

    void alterarEstadoBotoes(QPushButton*);

private slots:
    void on_e_botao_clicked();

    void on_ou_botao_clicked();

    void on_ouExclusiv_Botao_clicked();

    void on_nao_botao_clicked();
    void on_botao0_botao_clicked();
    void on_botao1_botao_clicked();

    void on_LED_botao_clicked();

    void on_fioS_botao_clicked();

    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_16_clicked();
    void on_pushButton_17_clicked();
    void on_pushButton_18_clicked();
    void on_pushButton_19_clicked();
    void on_pushButton_20_clicked();
    void on_pushButton_21_clicked();
    void on_pushButton_22_clicked();
    void on_pushButton_23_clicked();
    void on_pushButton_24_clicked();
    void on_pushButton_25_clicked();
    void on_pushButton_26_clicked();
    void on_pushButton_27_clicked();
    void on_pushButton_28_clicked();
    void on_pushButton_29_clicked();
    void on_pushButton_30_clicked();
    void on_pushButton_31_clicked();
    void on_pushButton_32_clicked();
    void on_pushButton_33_clicked();
    void on_pushButton_34_clicked();
    void on_pushButton_35_clicked();
    void on_pushButton_36_clicked();
    void on_pushButton_37_clicked();
    void on_pushButton_38_clicked();
    void on_pushButton_39_clicked();
    void on_pushButton_40_clicked();
    void on_pushButton_41_clicked();
    void on_pushButton_42_clicked();
    void on_pushButton_43_clicked();
    void on_pushButton_44_clicked();
    void on_pushButton_45_clicked();
    void on_pushButton_46_clicked();
    void on_pushButton_47_clicked();
    void on_pushButton_48_clicked();
    void on_pushButton_49_clicked();
    void on_pushButton_50_clicked();
    void on_pushButton_51_clicked();
    void on_pushButton_52_clicked();
    void on_pushButton_53_clicked();
    void on_pushButton_54_clicked();
    void on_pushButton_55_clicked();
    void on_pushButton_56_clicked();
    void on_pushButton_57_clicked();
    void on_pushButton_58_clicked();
    void on_pushButton_59_clicked();
    void on_pushButton_60_clicked();
    void on_pushButton_61_clicked();
    void on_pushButton_62_clicked();
    void on_pushButton_63_clicked();
    void on_pushButton_64_clicked();
    void on_pushButton_65_clicked();
    void on_pushButton_66_clicked();
    void on_pushButton_67_clicked();
    void on_pushButton_68_clicked();
    void on_pushButton_69_clicked();
    void on_pushButton_70_clicked();
    void on_pushButton_71_clicked();
    void on_pushButton_72_clicked();
    void on_pushButton_73_clicked();
    void on_pushButton_74_clicked();
    void on_pushButton_75_clicked();
    void on_pushButton_76_clicked();
    void on_pushButton_77_clicked();
    void on_pushButton_78_clicked();

    void on_botaoMudar_botao_clicked();

private:
    Escolhas escolha;

    std::vector <QPushButton*> pivores;
    std::vector <std::pair <QPoint, QPoint> > pontos;
    std::map <QPushButton*, PortaLogica*> PortaLogicaDoBotao;

    Ui::MainWindow *ui;

protected:
    void paintEvent(QPaintEvent*) {
        QPainter painter(this);

        int width = size().width() - 3;
        int height = size().height() - 5;

        painter.fillRect(0, 0, width, height, QColor(7, 13, 127));



            //painter.fillRect(wAuxS, hAuxS, wAuxE, hAuxE, QColor(0,0,255));

            painter.setPen(QColor(255,255,0));

            for(unsigned long int i=0;i<pontos.size();i++)
                painter.drawLine(pontos[i].first, pontos[i].second);

    }

    void desenha();

};

#endif // MAINWINDOW_H
