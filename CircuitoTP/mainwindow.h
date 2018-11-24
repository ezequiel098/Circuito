#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

enum Escolhas {E, OU, OU_EXCLUSIVO, NAO, BOTAO, LED, DEFAULT};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Escolhas verEscolha();
    void mudarEscolha(Escolhas);

private slots:
    void on_e_botao_clicked();

    void on_ou_botao_clicked();

    void on_ouExclusiv_Botao_clicked();

    void on_nao_botao_clicked();

    void on_botao_botao_clicked();

    void on_LED_botao_clicked();

    void on_pushButton_7_clicked();

private:
    Escolhas escolha;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
