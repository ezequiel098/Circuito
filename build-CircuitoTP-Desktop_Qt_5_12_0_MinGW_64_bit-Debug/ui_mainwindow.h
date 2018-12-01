/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *ou_botao;
    QPushButton *ouExclusiv_Botao;
    QPushButton *nao_botao;
    QPushButton *e_botao;
    QPushButton *fioS_botao;
    QPushButton *fioE_botao;
    QVBoxLayout *verticalLayout;
    QPushButton *botao1_botao;
    QPushButton *botao0_botao;
    QPushButton *LED_botao;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_57;
    QPushButton *pushButton_19;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_69;
    QPushButton *pushButton_75;
    QPushButton *pushButton_8;
    QPushButton *pushButton_48;
    QPushButton *pushButton_40;
    QPushButton *pushButton_18;
    QPushButton *pushButton_76;
    QPushButton *pushButton_62;
    QPushButton *pushButton_52;
    QPushButton *pushButton_23;
    QPushButton *pushButton_25;
    QPushButton *pushButton_70;
    QPushButton *pushButton_20;
    QPushButton *pushButton_28;
    QPushButton *pushButton_26;
    QPushButton *pushButton_30;
    QPushButton *pushButton_46;
    QPushButton *pushButton_9;
    QPushButton *pushButton_24;
    QPushButton *pushButton_29;
    QPushButton *pushButton_12;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_71;
    QPushButton *pushButton_15;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_41;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_58;
    QPushButton *pushButton_43;
    QPushButton *pushButton_45;
    QPushButton *pushButton_51;
    QPushButton *pushButton_63;
    QPushButton *pushButton_77;
    QPushButton *pushButton_27;
    QPushButton *pushButton_38;
    QPushButton *pushButton_31;
    QPushButton *pushButton_33;
    QPushButton *pushButton_32;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_42;
    QPushButton *pushButton_39;
    QPushButton *pushButton_55;
    QPushButton *pushButton_37;
    QPushButton *pushButton_36;
    QPushButton *pushButton_44;
    QPushButton *pushButton_49;
    QPushButton *pushButton_50;
    QPushButton *pushButton_47;
    QPushButton *pushButton_56;
    QPushButton *pushButton_54;
    QPushButton *pushButton_53;
    QPushButton *pushButton_60;
    QPushButton *pushButton_68;
    QPushButton *pushButton_59;
    QPushButton *pushButton_65;
    QPushButton *pushButton_67;
    QPushButton *pushButton_66;
    QPushButton *pushButton_61;
    QPushButton *pushButton_72;
    QPushButton *pushButton_78;
    QPushButton *pushButton_74;
    QPushButton *pushButton_73;
    QPushButton *pushButton_7;
    QPushButton *pushButton_64;
    QMenuBar *menuBar;
    QMenu *menuCircuitos_Logicos;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1154, 641);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgba(7, 13, 127, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 10, 304, 591));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(horizontalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 589));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ou_botao = new QPushButton(groupBox);
        ou_botao->setObjectName(QString::fromUtf8("ou_botao"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 0));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ou_botao->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Penguin"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        ou_botao->setFont(font);
        ou_botao->setCursor(QCursor(Qt::PointingHandCursor));
        ou_botao->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(ou_botao, 0, 3, 1, 1);

        ouExclusiv_Botao = new QPushButton(groupBox);
        ouExclusiv_Botao->setObjectName(QString::fromUtf8("ouExclusiv_Botao"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ouExclusiv_Botao->setPalette(palette1);
        ouExclusiv_Botao->setFont(font);
        ouExclusiv_Botao->setCursor(QCursor(Qt::PointingHandCursor));
        ouExclusiv_Botao->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(ouExclusiv_Botao, 5, 0, 1, 1);

        nao_botao = new QPushButton(groupBox);
        nao_botao->setObjectName(QString::fromUtf8("nao_botao"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        nao_botao->setPalette(palette2);
        nao_botao->setFont(font);
        nao_botao->setCursor(QCursor(Qt::PointingHandCursor));
        nao_botao->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(nao_botao, 5, 3, 1, 1);

        e_botao = new QPushButton(groupBox);
        e_botao->setObjectName(QString::fromUtf8("e_botao"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        e_botao->setPalette(palette3);
        e_botao->setFont(font);
        e_botao->setCursor(QCursor(Qt::PointingHandCursor));
        e_botao->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(e_botao, 0, 0, 1, 1);

        fioS_botao = new QPushButton(groupBox);
        fioS_botao->setObjectName(QString::fromUtf8("fioS_botao"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        fioS_botao->setPalette(palette4);
        fioS_botao->setFont(font);
        fioS_botao->setCursor(QCursor(Qt::PointingHandCursor));
        fioS_botao->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(fioS_botao, 8, 3, 1, 1);

        fioE_botao = new QPushButton(groupBox);
        fioE_botao->setObjectName(QString::fromUtf8("fioE_botao"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        fioE_botao->setPalette(palette5);
        fioE_botao->setFont(font);
        fioE_botao->setCursor(QCursor(Qt::PointingHandCursor));
        fioE_botao->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(fioE_botao, 8, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        botao1_botao = new QPushButton(groupBox);
        botao1_botao->setObjectName(QString::fromUtf8("botao1_botao"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush);
        botao1_botao->setPalette(palette6);
        botao1_botao->setFont(font);
        botao1_botao->setCursor(QCursor(Qt::PointingHandCursor));
        botao1_botao->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);"));

        verticalLayout->addWidget(botao1_botao);

        botao0_botao = new QPushButton(groupBox);
        botao0_botao->setObjectName(QString::fromUtf8("botao0_botao"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush);
        botao0_botao->setPalette(palette7);
        botao0_botao->setFont(font);
        botao0_botao->setCursor(QCursor(Qt::PointingHandCursor));
        botao0_botao->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);"));

        verticalLayout->addWidget(botao0_botao);


        gridLayout->addLayout(verticalLayout, 6, 0, 1, 1);

        LED_botao = new QPushButton(groupBox);
        LED_botao->setObjectName(QString::fromUtf8("LED_botao"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush);
        LED_botao->setPalette(palette8);
        LED_botao->setFont(font);
        LED_botao->setCursor(QCursor(Qt::PointingHandCursor));
        LED_botao->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);"));

        gridLayout->addWidget(LED_botao, 6, 3, 1, 1);


        horizontalLayout->addWidget(groupBox);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(350, 0, 801, 591));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_57 = new QPushButton(gridLayoutWidget_2);
        pushButton_57->setObjectName(QString::fromUtf8("pushButton_57"));
        pushButton_57->setEnabled(true);
        pushButton_57->setBaseSize(QSize(0, 0));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_57->setPalette(palette9);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Penguin"));
        font1.setPointSize(12);
        pushButton_57->setFont(font1);
        pushButton_57->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_57->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_57->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_57, 4, 7, 1, 1);

        pushButton_19 = new QPushButton(gridLayoutWidget_2);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setEnabled(true);
        pushButton_19->setBaseSize(QSize(0, 0));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Button, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_19->setPalette(palette10);
        pushButton_19->setFont(font1);
        pushButton_19->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_19->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_19->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_19, 8, 4, 1, 1);

        pushButton_21 = new QPushButton(gridLayoutWidget_2);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setEnabled(true);
        pushButton_21->setBaseSize(QSize(0, 0));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_21->setPalette(palette11);
        pushButton_21->setFont(font1);
        pushButton_21->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_21->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_21->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_21, 8, 6, 1, 1);

        pushButton_22 = new QPushButton(gridLayoutWidget_2);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setEnabled(true);
        pushButton_22->setBaseSize(QSize(0, 0));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Button, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_22->setPalette(palette12);
        pushButton_22->setFont(font1);
        pushButton_22->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_22->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_22->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_22, 8, 7, 1, 1);

        pushButton_69 = new QPushButton(gridLayoutWidget_2);
        pushButton_69->setObjectName(QString::fromUtf8("pushButton_69"));
        pushButton_69->setEnabled(true);
        pushButton_69->setBaseSize(QSize(0, 0));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Button, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_69->setPalette(palette13);
        pushButton_69->setFont(font1);
        pushButton_69->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_69->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_69->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_69, 6, 5, 1, 1);

        pushButton_75 = new QPushButton(gridLayoutWidget_2);
        pushButton_75->setObjectName(QString::fromUtf8("pushButton_75"));
        pushButton_75->setEnabled(true);
        pushButton_75->setBaseSize(QSize(0, 0));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Button, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_75->setPalette(palette14);
        pushButton_75->setFont(font1);
        pushButton_75->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_75->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_75->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_75, 7, 4, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setEnabled(true);
        pushButton_8->setBaseSize(QSize(0, 0));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Button, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_8->setPalette(palette15);
        pushButton_8->setFont(font1);
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_8->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_8, 1, 0, 1, 1);

        pushButton_48 = new QPushButton(gridLayoutWidget_2);
        pushButton_48->setObjectName(QString::fromUtf8("pushButton_48"));
        pushButton_48->setEnabled(true);
        pushButton_48->setBaseSize(QSize(0, 0));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Button, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_48->setPalette(palette16);
        pushButton_48->setFont(font1);
        pushButton_48->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_48->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_48->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_48, 3, 5, 1, 1);

        pushButton_40 = new QPushButton(gridLayoutWidget_2);
        pushButton_40->setObjectName(QString::fromUtf8("pushButton_40"));
        pushButton_40->setEnabled(true);
        pushButton_40->setBaseSize(QSize(0, 0));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Button, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_40->setPalette(palette17);
        pushButton_40->setFont(font1);
        pushButton_40->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_40->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_40->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_40, 2, 4, 1, 1);

        pushButton_18 = new QPushButton(gridLayoutWidget_2);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setEnabled(true);
        pushButton_18->setBaseSize(QSize(0, 0));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::Button, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_18->setPalette(palette18);
        pushButton_18->setFont(font1);
        pushButton_18->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_18->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_18->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_18, 8, 3, 1, 1);

        pushButton_76 = new QPushButton(gridLayoutWidget_2);
        pushButton_76->setObjectName(QString::fromUtf8("pushButton_76"));
        pushButton_76->setEnabled(true);
        pushButton_76->setBaseSize(QSize(0, 0));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::Button, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_76->setPalette(palette19);
        pushButton_76->setFont(font1);
        pushButton_76->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_76->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_76->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_76, 7, 5, 1, 1);

        pushButton_62 = new QPushButton(gridLayoutWidget_2);
        pushButton_62->setObjectName(QString::fromUtf8("pushButton_62"));
        pushButton_62->setEnabled(true);
        pushButton_62->setBaseSize(QSize(0, 0));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::Button, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_62->setPalette(palette20);
        pushButton_62->setFont(font1);
        pushButton_62->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_62->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_62->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_62, 5, 5, 1, 1);

        pushButton_52 = new QPushButton(gridLayoutWidget_2);
        pushButton_52->setObjectName(QString::fromUtf8("pushButton_52"));
        pushButton_52->setEnabled(true);
        pushButton_52->setBaseSize(QSize(0, 0));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::Button, brush);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_52->setPalette(palette21);
        pushButton_52->setFont(font1);
        pushButton_52->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_52->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_52->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_52, 4, 2, 1, 1);

        pushButton_23 = new QPushButton(gridLayoutWidget_2);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setEnabled(true);
        pushButton_23->setBaseSize(QSize(0, 0));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::Button, brush);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_23->setPalette(palette22);
        pushButton_23->setFont(font1);
        pushButton_23->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_23->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_23->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_23, 0, 1, 1, 1);

        pushButton_25 = new QPushButton(gridLayoutWidget_2);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        pushButton_25->setEnabled(true);
        pushButton_25->setBaseSize(QSize(0, 0));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::Button, brush);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_25->setPalette(palette23);
        pushButton_25->setFont(font1);
        pushButton_25->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_25->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_25->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_25, 0, 3, 1, 1);

        pushButton_70 = new QPushButton(gridLayoutWidget_2);
        pushButton_70->setObjectName(QString::fromUtf8("pushButton_70"));
        pushButton_70->setEnabled(true);
        pushButton_70->setBaseSize(QSize(0, 0));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::Button, brush);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_70->setPalette(palette24);
        pushButton_70->setFont(font1);
        pushButton_70->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_70->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_70->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_70, 6, 6, 1, 1);

        pushButton_20 = new QPushButton(gridLayoutWidget_2);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setEnabled(true);
        pushButton_20->setBaseSize(QSize(0, 0));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::Button, brush);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_20->setPalette(palette25);
        pushButton_20->setFont(font1);
        pushButton_20->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_20->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_20->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_20, 8, 5, 1, 1);

        pushButton_28 = new QPushButton(gridLayoutWidget_2);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        pushButton_28->setEnabled(true);
        pushButton_28->setBaseSize(QSize(0, 0));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::Button, brush);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_28->setPalette(palette26);
        pushButton_28->setFont(font1);
        pushButton_28->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_28->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_28->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_28, 0, 6, 1, 1);

        pushButton_26 = new QPushButton(gridLayoutWidget_2);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        pushButton_26->setEnabled(true);
        pushButton_26->setBaseSize(QSize(0, 0));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::Button, brush);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_26->setPalette(palette27);
        pushButton_26->setFont(font1);
        pushButton_26->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_26->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_26->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_26, 0, 4, 1, 1);

        pushButton_30 = new QPushButton(gridLayoutWidget_2);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        pushButton_30->setEnabled(true);
        pushButton_30->setBaseSize(QSize(0, 0));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::Button, brush);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_30->setPalette(palette28);
        pushButton_30->setFont(font1);
        pushButton_30->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_30->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_30->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_30, 1, 1, 1, 1);

        pushButton_46 = new QPushButton(gridLayoutWidget_2);
        pushButton_46->setObjectName(QString::fromUtf8("pushButton_46"));
        pushButton_46->setEnabled(true);
        pushButton_46->setBaseSize(QSize(0, 0));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::Button, brush);
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_46->setPalette(palette29);
        pushButton_46->setFont(font1);
        pushButton_46->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_46->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_46->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_46, 3, 3, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setEnabled(true);
        pushButton_9->setBaseSize(QSize(0, 0));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::Button, brush);
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_9->setPalette(palette30);
        pushButton_9->setFont(font1);
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_9->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_9, 2, 0, 1, 1);

        pushButton_24 = new QPushButton(gridLayoutWidget_2);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        pushButton_24->setEnabled(true);
        pushButton_24->setBaseSize(QSize(0, 0));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::Button, brush);
        palette31.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette31.setBrush(QPalette::Active, QPalette::Base, brush);
        palette31.setBrush(QPalette::Active, QPalette::Window, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette31.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette31.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_24->setPalette(palette31);
        pushButton_24->setFont(font1);
        pushButton_24->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_24->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_24->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_24, 0, 2, 1, 1);

        pushButton_29 = new QPushButton(gridLayoutWidget_2);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        pushButton_29->setEnabled(true);
        pushButton_29->setBaseSize(QSize(0, 0));
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::Button, brush);
        palette32.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette32.setBrush(QPalette::Active, QPalette::Base, brush);
        palette32.setBrush(QPalette::Active, QPalette::Window, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette32.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette32.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_29->setPalette(palette32);
        pushButton_29->setFont(font1);
        pushButton_29->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_29->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_29->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_29, 0, 7, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setEnabled(true);
        pushButton_12->setBaseSize(QSize(0, 0));
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::Button, brush);
        palette33.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette33.setBrush(QPalette::Active, QPalette::Base, brush);
        palette33.setBrush(QPalette::Active, QPalette::Window, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette33.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette33.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_12->setPalette(palette33);
        pushButton_12->setFont(font1);
        pushButton_12->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_12->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_12, 5, 0, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setEnabled(true);
        pushButton_10->setBaseSize(QSize(0, 0));
        QPalette palette34;
        palette34.setBrush(QPalette::Active, QPalette::Button, brush);
        palette34.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette34.setBrush(QPalette::Active, QPalette::Base, brush);
        palette34.setBrush(QPalette::Active, QPalette::Window, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette34.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette34.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_10->setPalette(palette34);
        pushButton_10->setFont(font1);
        pushButton_10->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_10->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_10, 3, 0, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setEnabled(true);
        pushButton_11->setBaseSize(QSize(0, 0));
        QPalette palette35;
        palette35.setBrush(QPalette::Active, QPalette::Button, brush);
        palette35.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette35.setBrush(QPalette::Active, QPalette::Base, brush);
        palette35.setBrush(QPalette::Active, QPalette::Window, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette35.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette35.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette35.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette35.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette35.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_11->setPalette(palette35);
        pushButton_11->setFont(font1);
        pushButton_11->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_11->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_11, 4, 0, 1, 1);

        pushButton_71 = new QPushButton(gridLayoutWidget_2);
        pushButton_71->setObjectName(QString::fromUtf8("pushButton_71"));
        pushButton_71->setEnabled(true);
        pushButton_71->setBaseSize(QSize(0, 0));
        QPalette palette36;
        palette36.setBrush(QPalette::Active, QPalette::Button, brush);
        palette36.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette36.setBrush(QPalette::Active, QPalette::Base, brush);
        palette36.setBrush(QPalette::Active, QPalette::Window, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette36.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette36.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_71->setPalette(palette36);
        pushButton_71->setFont(font1);
        pushButton_71->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_71->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_71->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_71, 6, 7, 1, 1);

        pushButton_15 = new QPushButton(gridLayoutWidget_2);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setEnabled(true);
        pushButton_15->setBaseSize(QSize(0, 0));
        QPalette palette37;
        palette37.setBrush(QPalette::Active, QPalette::Button, brush);
        palette37.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette37.setBrush(QPalette::Active, QPalette::Base, brush);
        palette37.setBrush(QPalette::Active, QPalette::Window, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette37.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette37.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette37.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette37.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette37.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_15->setPalette(palette37);
        pushButton_15->setFont(font1);
        pushButton_15->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_15->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_15->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_15, 8, 0, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget_2);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setEnabled(true);
        pushButton_13->setBaseSize(QSize(0, 0));
        QPalette palette38;
        palette38.setBrush(QPalette::Active, QPalette::Button, brush);
        palette38.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette38.setBrush(QPalette::Active, QPalette::Base, brush);
        palette38.setBrush(QPalette::Active, QPalette::Window, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette38.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette38.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette38.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette38.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette38.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_13->setPalette(palette38);
        pushButton_13->setFont(font1);
        pushButton_13->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_13->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_13, 6, 0, 1, 1);

        pushButton_14 = new QPushButton(gridLayoutWidget_2);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setEnabled(true);
        pushButton_14->setBaseSize(QSize(0, 0));
        QPalette palette39;
        palette39.setBrush(QPalette::Active, QPalette::Button, brush);
        palette39.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette39.setBrush(QPalette::Active, QPalette::Base, brush);
        palette39.setBrush(QPalette::Active, QPalette::Window, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette39.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette39.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette39.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette39.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette39.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_14->setPalette(palette39);
        pushButton_14->setFont(font1);
        pushButton_14->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_14->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_14->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_14, 7, 0, 1, 1);

        pushButton_41 = new QPushButton(gridLayoutWidget_2);
        pushButton_41->setObjectName(QString::fromUtf8("pushButton_41"));
        pushButton_41->setEnabled(true);
        pushButton_41->setBaseSize(QSize(0, 0));
        QPalette palette40;
        palette40.setBrush(QPalette::Active, QPalette::Button, brush);
        palette40.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette40.setBrush(QPalette::Active, QPalette::Base, brush);
        palette40.setBrush(QPalette::Active, QPalette::Window, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette40.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette40.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette40.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette40.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette40.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_41->setPalette(palette40);
        pushButton_41->setFont(font1);
        pushButton_41->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_41->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_41->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_41, 2, 5, 1, 1);

        pushButton_16 = new QPushButton(gridLayoutWidget_2);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setEnabled(true);
        pushButton_16->setBaseSize(QSize(0, 0));
        QPalette palette41;
        palette41.setBrush(QPalette::Active, QPalette::Button, brush);
        palette41.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette41.setBrush(QPalette::Active, QPalette::Base, brush);
        palette41.setBrush(QPalette::Active, QPalette::Window, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette41.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette41.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette41.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette41.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette41.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_16->setPalette(palette41);
        pushButton_16->setFont(font1);
        pushButton_16->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_16->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_16->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_16, 8, 1, 1, 1);

        pushButton_17 = new QPushButton(gridLayoutWidget_2);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setEnabled(true);
        pushButton_17->setBaseSize(QSize(0, 0));
        QPalette palette42;
        palette42.setBrush(QPalette::Active, QPalette::Button, brush);
        palette42.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette42.setBrush(QPalette::Active, QPalette::Base, brush);
        palette42.setBrush(QPalette::Active, QPalette::Window, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette42.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette42.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette42.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette42.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette42.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette42.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_17->setPalette(palette42);
        pushButton_17->setFont(font1);
        pushButton_17->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_17->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_17->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_17, 8, 2, 1, 1);

        pushButton_58 = new QPushButton(gridLayoutWidget_2);
        pushButton_58->setObjectName(QString::fromUtf8("pushButton_58"));
        pushButton_58->setEnabled(true);
        pushButton_58->setBaseSize(QSize(0, 0));
        QPalette palette43;
        palette43.setBrush(QPalette::Active, QPalette::Button, brush);
        palette43.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette43.setBrush(QPalette::Active, QPalette::Base, brush);
        palette43.setBrush(QPalette::Active, QPalette::Window, brush);
        palette43.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette43.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette43.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette43.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette43.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette43.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette43.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette43.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_58->setPalette(palette43);
        pushButton_58->setFont(font1);
        pushButton_58->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_58->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_58->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_58, 5, 1, 1, 1);

        pushButton_43 = new QPushButton(gridLayoutWidget_2);
        pushButton_43->setObjectName(QString::fromUtf8("pushButton_43"));
        pushButton_43->setEnabled(true);
        pushButton_43->setBaseSize(QSize(0, 0));
        QPalette palette44;
        palette44.setBrush(QPalette::Active, QPalette::Button, brush);
        palette44.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette44.setBrush(QPalette::Active, QPalette::Base, brush);
        palette44.setBrush(QPalette::Active, QPalette::Window, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette44.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette44.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_43->setPalette(palette44);
        pushButton_43->setFont(font1);
        pushButton_43->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_43->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_43->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_43, 2, 7, 1, 1);

        pushButton_45 = new QPushButton(gridLayoutWidget_2);
        pushButton_45->setObjectName(QString::fromUtf8("pushButton_45"));
        pushButton_45->setEnabled(true);
        pushButton_45->setBaseSize(QSize(0, 0));
        QPalette palette45;
        palette45.setBrush(QPalette::Active, QPalette::Button, brush);
        palette45.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette45.setBrush(QPalette::Active, QPalette::Base, brush);
        palette45.setBrush(QPalette::Active, QPalette::Window, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette45.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette45.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_45->setPalette(palette45);
        pushButton_45->setFont(font1);
        pushButton_45->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_45->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_45->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_45, 3, 2, 1, 1);

        pushButton_51 = new QPushButton(gridLayoutWidget_2);
        pushButton_51->setObjectName(QString::fromUtf8("pushButton_51"));
        pushButton_51->setEnabled(true);
        pushButton_51->setBaseSize(QSize(0, 0));
        QPalette palette46;
        palette46.setBrush(QPalette::Active, QPalette::Button, brush);
        palette46.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette46.setBrush(QPalette::Active, QPalette::Base, brush);
        palette46.setBrush(QPalette::Active, QPalette::Window, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette46.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette46.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_51->setPalette(palette46);
        pushButton_51->setFont(font1);
        pushButton_51->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_51->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_51->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_51, 4, 1, 1, 1);

        pushButton_63 = new QPushButton(gridLayoutWidget_2);
        pushButton_63->setObjectName(QString::fromUtf8("pushButton_63"));
        pushButton_63->setEnabled(true);
        pushButton_63->setBaseSize(QSize(0, 0));
        QPalette palette47;
        palette47.setBrush(QPalette::Active, QPalette::Button, brush);
        palette47.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette47.setBrush(QPalette::Active, QPalette::Base, brush);
        palette47.setBrush(QPalette::Active, QPalette::Window, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette47.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette47.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_63->setPalette(palette47);
        pushButton_63->setFont(font1);
        pushButton_63->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_63->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_63->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_63, 5, 6, 1, 1);

        pushButton_77 = new QPushButton(gridLayoutWidget_2);
        pushButton_77->setObjectName(QString::fromUtf8("pushButton_77"));
        pushButton_77->setEnabled(true);
        pushButton_77->setBaseSize(QSize(0, 0));
        QPalette palette48;
        palette48.setBrush(QPalette::Active, QPalette::Button, brush);
        palette48.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette48.setBrush(QPalette::Active, QPalette::Base, brush);
        palette48.setBrush(QPalette::Active, QPalette::Window, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette48.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette48.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_77->setPalette(palette48);
        pushButton_77->setFont(font1);
        pushButton_77->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_77->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_77->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_77, 7, 6, 1, 1);

        pushButton_27 = new QPushButton(gridLayoutWidget_2);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        pushButton_27->setEnabled(true);
        pushButton_27->setBaseSize(QSize(0, 0));
        QPalette palette49;
        palette49.setBrush(QPalette::Active, QPalette::Button, brush);
        palette49.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette49.setBrush(QPalette::Active, QPalette::Base, brush);
        palette49.setBrush(QPalette::Active, QPalette::Window, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette49.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette49.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_27->setPalette(palette49);
        pushButton_27->setFont(font1);
        pushButton_27->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_27->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_27->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_27, 0, 5, 1, 1);

        pushButton_38 = new QPushButton(gridLayoutWidget_2);
        pushButton_38->setObjectName(QString::fromUtf8("pushButton_38"));
        pushButton_38->setEnabled(true);
        pushButton_38->setBaseSize(QSize(0, 0));
        QPalette palette50;
        palette50.setBrush(QPalette::Active, QPalette::Button, brush);
        palette50.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette50.setBrush(QPalette::Active, QPalette::Base, brush);
        palette50.setBrush(QPalette::Active, QPalette::Window, brush);
        palette50.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette50.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette50.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette50.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette50.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette50.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette50.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette50.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_38->setPalette(palette50);
        pushButton_38->setFont(font1);
        pushButton_38->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_38->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_38->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_38, 2, 2, 1, 1);

        pushButton_31 = new QPushButton(gridLayoutWidget_2);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        pushButton_31->setEnabled(true);
        pushButton_31->setBaseSize(QSize(0, 0));
        QPalette palette51;
        palette51.setBrush(QPalette::Active, QPalette::Button, brush);
        palette51.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette51.setBrush(QPalette::Active, QPalette::Base, brush);
        palette51.setBrush(QPalette::Active, QPalette::Window, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette51.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette51.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette51.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette51.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette51.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_31->setPalette(palette51);
        pushButton_31->setFont(font1);
        pushButton_31->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_31->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_31->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_31, 1, 2, 1, 1);

        pushButton_33 = new QPushButton(gridLayoutWidget_2);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        pushButton_33->setEnabled(true);
        pushButton_33->setBaseSize(QSize(0, 0));
        QPalette palette52;
        palette52.setBrush(QPalette::Active, QPalette::Button, brush);
        palette52.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette52.setBrush(QPalette::Active, QPalette::Base, brush);
        palette52.setBrush(QPalette::Active, QPalette::Window, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette52.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette52.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette52.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette52.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette52.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_33->setPalette(palette52);
        pushButton_33->setFont(font1);
        pushButton_33->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_33->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_33->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_33, 1, 4, 1, 1);

        pushButton_32 = new QPushButton(gridLayoutWidget_2);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        pushButton_32->setEnabled(true);
        pushButton_32->setBaseSize(QSize(0, 0));
        QPalette palette53;
        palette53.setBrush(QPalette::Active, QPalette::Button, brush);
        palette53.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette53.setBrush(QPalette::Active, QPalette::Base, brush);
        palette53.setBrush(QPalette::Active, QPalette::Window, brush);
        palette53.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette53.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette53.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette53.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette53.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette53.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette53.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette53.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_32->setPalette(palette53);
        pushButton_32->setFont(font1);
        pushButton_32->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_32->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_32->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_32, 1, 3, 1, 1);

        pushButton_34 = new QPushButton(gridLayoutWidget_2);
        pushButton_34->setObjectName(QString::fromUtf8("pushButton_34"));
        pushButton_34->setEnabled(true);
        pushButton_34->setBaseSize(QSize(0, 0));
        QPalette palette54;
        palette54.setBrush(QPalette::Active, QPalette::Button, brush);
        palette54.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette54.setBrush(QPalette::Active, QPalette::Base, brush);
        palette54.setBrush(QPalette::Active, QPalette::Window, brush);
        palette54.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette54.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette54.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette54.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette54.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette54.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette54.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette54.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_34->setPalette(palette54);
        pushButton_34->setFont(font1);
        pushButton_34->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_34->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_34->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_34, 1, 5, 1, 1);

        pushButton_35 = new QPushButton(gridLayoutWidget_2);
        pushButton_35->setObjectName(QString::fromUtf8("pushButton_35"));
        pushButton_35->setEnabled(true);
        pushButton_35->setBaseSize(QSize(0, 0));
        QPalette palette55;
        palette55.setBrush(QPalette::Active, QPalette::Button, brush);
        palette55.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette55.setBrush(QPalette::Active, QPalette::Base, brush);
        palette55.setBrush(QPalette::Active, QPalette::Window, brush);
        palette55.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette55.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette55.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette55.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette55.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette55.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette55.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette55.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_35->setPalette(palette55);
        pushButton_35->setFont(font1);
        pushButton_35->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_35->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_35->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_35, 1, 6, 1, 1);

        pushButton_42 = new QPushButton(gridLayoutWidget_2);
        pushButton_42->setObjectName(QString::fromUtf8("pushButton_42"));
        pushButton_42->setEnabled(true);
        pushButton_42->setBaseSize(QSize(0, 0));
        QPalette palette56;
        palette56.setBrush(QPalette::Active, QPalette::Button, brush);
        palette56.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette56.setBrush(QPalette::Active, QPalette::Base, brush);
        palette56.setBrush(QPalette::Active, QPalette::Window, brush);
        palette56.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette56.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette56.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette56.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette56.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette56.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette56.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette56.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_42->setPalette(palette56);
        pushButton_42->setFont(font1);
        pushButton_42->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_42->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_42->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_42, 2, 6, 1, 1);

        pushButton_39 = new QPushButton(gridLayoutWidget_2);
        pushButton_39->setObjectName(QString::fromUtf8("pushButton_39"));
        pushButton_39->setEnabled(true);
        pushButton_39->setBaseSize(QSize(0, 0));
        QPalette palette57;
        palette57.setBrush(QPalette::Active, QPalette::Button, brush);
        palette57.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette57.setBrush(QPalette::Active, QPalette::Base, brush);
        palette57.setBrush(QPalette::Active, QPalette::Window, brush);
        palette57.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette57.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette57.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette57.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette57.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette57.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette57.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette57.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_39->setPalette(palette57);
        pushButton_39->setFont(font1);
        pushButton_39->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_39->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_39->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_39, 2, 3, 1, 1);

        pushButton_55 = new QPushButton(gridLayoutWidget_2);
        pushButton_55->setObjectName(QString::fromUtf8("pushButton_55"));
        pushButton_55->setEnabled(true);
        pushButton_55->setBaseSize(QSize(0, 0));
        QPalette palette58;
        palette58.setBrush(QPalette::Active, QPalette::Button, brush);
        palette58.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette58.setBrush(QPalette::Active, QPalette::Base, brush);
        palette58.setBrush(QPalette::Active, QPalette::Window, brush);
        palette58.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette58.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette58.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette58.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette58.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette58.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette58.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette58.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_55->setPalette(palette58);
        pushButton_55->setFont(font1);
        pushButton_55->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_55->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_55->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_55, 4, 5, 1, 1);

        pushButton_37 = new QPushButton(gridLayoutWidget_2);
        pushButton_37->setObjectName(QString::fromUtf8("pushButton_37"));
        pushButton_37->setEnabled(true);
        pushButton_37->setBaseSize(QSize(0, 0));
        QPalette palette59;
        palette59.setBrush(QPalette::Active, QPalette::Button, brush);
        palette59.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette59.setBrush(QPalette::Active, QPalette::Base, brush);
        palette59.setBrush(QPalette::Active, QPalette::Window, brush);
        palette59.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette59.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette59.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette59.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette59.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette59.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette59.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette59.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_37->setPalette(palette59);
        pushButton_37->setFont(font1);
        pushButton_37->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_37->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_37->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_37, 2, 1, 1, 1);

        pushButton_36 = new QPushButton(gridLayoutWidget_2);
        pushButton_36->setObjectName(QString::fromUtf8("pushButton_36"));
        pushButton_36->setEnabled(true);
        pushButton_36->setBaseSize(QSize(0, 0));
        QPalette palette60;
        palette60.setBrush(QPalette::Active, QPalette::Button, brush);
        palette60.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette60.setBrush(QPalette::Active, QPalette::Base, brush);
        palette60.setBrush(QPalette::Active, QPalette::Window, brush);
        palette60.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette60.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette60.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette60.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette60.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette60.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette60.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette60.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_36->setPalette(palette60);
        pushButton_36->setFont(font1);
        pushButton_36->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_36->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_36->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_36, 1, 7, 1, 1);

        pushButton_44 = new QPushButton(gridLayoutWidget_2);
        pushButton_44->setObjectName(QString::fromUtf8("pushButton_44"));
        pushButton_44->setEnabled(true);
        pushButton_44->setBaseSize(QSize(0, 0));
        QPalette palette61;
        palette61.setBrush(QPalette::Active, QPalette::Button, brush);
        palette61.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette61.setBrush(QPalette::Active, QPalette::Base, brush);
        palette61.setBrush(QPalette::Active, QPalette::Window, brush);
        palette61.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette61.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette61.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette61.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette61.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette61.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette61.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette61.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_44->setPalette(palette61);
        pushButton_44->setFont(font1);
        pushButton_44->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_44->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_44->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_44, 3, 1, 1, 1);

        pushButton_49 = new QPushButton(gridLayoutWidget_2);
        pushButton_49->setObjectName(QString::fromUtf8("pushButton_49"));
        pushButton_49->setEnabled(true);
        pushButton_49->setBaseSize(QSize(0, 0));
        QPalette palette62;
        palette62.setBrush(QPalette::Active, QPalette::Button, brush);
        palette62.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette62.setBrush(QPalette::Active, QPalette::Base, brush);
        palette62.setBrush(QPalette::Active, QPalette::Window, brush);
        palette62.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette62.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette62.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette62.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette62.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette62.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette62.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette62.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_49->setPalette(palette62);
        pushButton_49->setFont(font1);
        pushButton_49->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_49->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_49->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_49, 3, 6, 1, 1);

        pushButton_50 = new QPushButton(gridLayoutWidget_2);
        pushButton_50->setObjectName(QString::fromUtf8("pushButton_50"));
        pushButton_50->setEnabled(true);
        pushButton_50->setBaseSize(QSize(0, 0));
        QPalette palette63;
        palette63.setBrush(QPalette::Active, QPalette::Button, brush);
        palette63.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette63.setBrush(QPalette::Active, QPalette::Base, brush);
        palette63.setBrush(QPalette::Active, QPalette::Window, brush);
        palette63.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette63.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette63.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette63.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette63.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette63.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette63.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette63.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_50->setPalette(palette63);
        pushButton_50->setFont(font1);
        pushButton_50->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_50->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_50->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_50, 3, 7, 1, 1);

        pushButton_47 = new QPushButton(gridLayoutWidget_2);
        pushButton_47->setObjectName(QString::fromUtf8("pushButton_47"));
        pushButton_47->setEnabled(true);
        pushButton_47->setBaseSize(QSize(0, 0));
        QPalette palette64;
        palette64.setBrush(QPalette::Active, QPalette::Button, brush);
        palette64.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette64.setBrush(QPalette::Active, QPalette::Base, brush);
        palette64.setBrush(QPalette::Active, QPalette::Window, brush);
        palette64.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette64.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette64.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette64.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette64.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette64.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette64.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette64.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_47->setPalette(palette64);
        pushButton_47->setFont(font1);
        pushButton_47->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_47->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_47->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_47, 3, 4, 1, 1);

        pushButton_56 = new QPushButton(gridLayoutWidget_2);
        pushButton_56->setObjectName(QString::fromUtf8("pushButton_56"));
        pushButton_56->setEnabled(true);
        pushButton_56->setBaseSize(QSize(0, 0));
        QPalette palette65;
        palette65.setBrush(QPalette::Active, QPalette::Button, brush);
        palette65.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette65.setBrush(QPalette::Active, QPalette::Base, brush);
        palette65.setBrush(QPalette::Active, QPalette::Window, brush);
        palette65.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette65.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette65.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette65.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette65.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette65.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette65.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette65.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_56->setPalette(palette65);
        pushButton_56->setFont(font1);
        pushButton_56->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_56->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_56->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_56, 4, 6, 1, 1);

        pushButton_54 = new QPushButton(gridLayoutWidget_2);
        pushButton_54->setObjectName(QString::fromUtf8("pushButton_54"));
        pushButton_54->setEnabled(true);
        pushButton_54->setBaseSize(QSize(0, 0));
        QPalette palette66;
        palette66.setBrush(QPalette::Active, QPalette::Button, brush);
        palette66.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette66.setBrush(QPalette::Active, QPalette::Base, brush);
        palette66.setBrush(QPalette::Active, QPalette::Window, brush);
        palette66.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette66.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette66.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette66.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette66.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette66.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette66.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette66.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_54->setPalette(palette66);
        pushButton_54->setFont(font1);
        pushButton_54->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_54->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_54->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_54, 4, 4, 1, 1);

        pushButton_53 = new QPushButton(gridLayoutWidget_2);
        pushButton_53->setObjectName(QString::fromUtf8("pushButton_53"));
        pushButton_53->setEnabled(true);
        pushButton_53->setBaseSize(QSize(0, 0));
        QPalette palette67;
        palette67.setBrush(QPalette::Active, QPalette::Button, brush);
        palette67.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette67.setBrush(QPalette::Active, QPalette::Base, brush);
        palette67.setBrush(QPalette::Active, QPalette::Window, brush);
        palette67.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette67.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette67.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette67.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette67.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette67.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette67.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette67.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_53->setPalette(palette67);
        pushButton_53->setFont(font1);
        pushButton_53->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_53->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_53->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_53, 4, 3, 1, 1);

        pushButton_60 = new QPushButton(gridLayoutWidget_2);
        pushButton_60->setObjectName(QString::fromUtf8("pushButton_60"));
        pushButton_60->setEnabled(true);
        pushButton_60->setBaseSize(QSize(0, 0));
        QPalette palette68;
        palette68.setBrush(QPalette::Active, QPalette::Button, brush);
        palette68.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette68.setBrush(QPalette::Active, QPalette::Base, brush);
        palette68.setBrush(QPalette::Active, QPalette::Window, brush);
        palette68.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette68.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette68.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette68.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette68.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette68.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette68.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette68.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_60->setPalette(palette68);
        pushButton_60->setFont(font1);
        pushButton_60->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_60->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_60->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_60, 5, 3, 1, 1);

        pushButton_68 = new QPushButton(gridLayoutWidget_2);
        pushButton_68->setObjectName(QString::fromUtf8("pushButton_68"));
        pushButton_68->setEnabled(true);
        pushButton_68->setBaseSize(QSize(0, 0));
        QPalette palette69;
        palette69.setBrush(QPalette::Active, QPalette::Button, brush);
        palette69.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette69.setBrush(QPalette::Active, QPalette::Base, brush);
        palette69.setBrush(QPalette::Active, QPalette::Window, brush);
        palette69.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette69.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette69.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette69.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette69.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette69.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette69.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette69.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_68->setPalette(palette69);
        pushButton_68->setFont(font1);
        pushButton_68->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_68->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_68->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_68, 6, 4, 1, 1);

        pushButton_59 = new QPushButton(gridLayoutWidget_2);
        pushButton_59->setObjectName(QString::fromUtf8("pushButton_59"));
        pushButton_59->setEnabled(true);
        pushButton_59->setBaseSize(QSize(0, 0));
        QPalette palette70;
        palette70.setBrush(QPalette::Active, QPalette::Button, brush);
        palette70.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette70.setBrush(QPalette::Active, QPalette::Base, brush);
        palette70.setBrush(QPalette::Active, QPalette::Window, brush);
        palette70.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette70.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette70.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette70.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette70.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette70.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette70.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette70.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_59->setPalette(palette70);
        pushButton_59->setFont(font1);
        pushButton_59->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_59->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_59->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_59, 5, 2, 1, 1);

        pushButton_65 = new QPushButton(gridLayoutWidget_2);
        pushButton_65->setObjectName(QString::fromUtf8("pushButton_65"));
        pushButton_65->setEnabled(true);
        pushButton_65->setBaseSize(QSize(0, 0));
        QPalette palette71;
        palette71.setBrush(QPalette::Active, QPalette::Button, brush);
        palette71.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette71.setBrush(QPalette::Active, QPalette::Base, brush);
        palette71.setBrush(QPalette::Active, QPalette::Window, brush);
        palette71.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette71.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette71.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette71.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette71.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette71.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette71.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette71.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_65->setPalette(palette71);
        pushButton_65->setFont(font1);
        pushButton_65->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_65->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_65->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_65, 6, 1, 1, 1);

        pushButton_67 = new QPushButton(gridLayoutWidget_2);
        pushButton_67->setObjectName(QString::fromUtf8("pushButton_67"));
        pushButton_67->setEnabled(true);
        pushButton_67->setBaseSize(QSize(0, 0));
        QPalette palette72;
        palette72.setBrush(QPalette::Active, QPalette::Button, brush);
        palette72.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette72.setBrush(QPalette::Active, QPalette::Base, brush);
        palette72.setBrush(QPalette::Active, QPalette::Window, brush);
        palette72.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette72.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette72.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette72.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette72.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette72.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette72.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette72.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_67->setPalette(palette72);
        pushButton_67->setFont(font1);
        pushButton_67->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_67->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_67->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_67, 6, 3, 1, 1);

        pushButton_66 = new QPushButton(gridLayoutWidget_2);
        pushButton_66->setObjectName(QString::fromUtf8("pushButton_66"));
        pushButton_66->setEnabled(true);
        pushButton_66->setBaseSize(QSize(0, 0));
        QPalette palette73;
        palette73.setBrush(QPalette::Active, QPalette::Button, brush);
        palette73.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette73.setBrush(QPalette::Active, QPalette::Base, brush);
        palette73.setBrush(QPalette::Active, QPalette::Window, brush);
        palette73.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette73.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette73.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette73.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette73.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette73.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette73.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette73.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_66->setPalette(palette73);
        pushButton_66->setFont(font1);
        pushButton_66->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_66->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_66->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_66, 6, 2, 1, 1);

        pushButton_61 = new QPushButton(gridLayoutWidget_2);
        pushButton_61->setObjectName(QString::fromUtf8("pushButton_61"));
        pushButton_61->setEnabled(true);
        pushButton_61->setBaseSize(QSize(0, 0));
        QPalette palette74;
        palette74.setBrush(QPalette::Active, QPalette::Button, brush);
        palette74.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette74.setBrush(QPalette::Active, QPalette::Base, brush);
        palette74.setBrush(QPalette::Active, QPalette::Window, brush);
        palette74.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette74.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette74.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette74.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette74.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette74.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette74.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette74.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_61->setPalette(palette74);
        pushButton_61->setFont(font1);
        pushButton_61->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_61->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_61->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_61, 5, 4, 1, 1);

        pushButton_72 = new QPushButton(gridLayoutWidget_2);
        pushButton_72->setObjectName(QString::fromUtf8("pushButton_72"));
        pushButton_72->setEnabled(true);
        pushButton_72->setBaseSize(QSize(0, 0));
        QPalette palette75;
        palette75.setBrush(QPalette::Active, QPalette::Button, brush);
        palette75.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette75.setBrush(QPalette::Active, QPalette::Base, brush);
        palette75.setBrush(QPalette::Active, QPalette::Window, brush);
        palette75.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette75.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette75.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette75.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette75.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette75.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette75.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette75.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_72->setPalette(palette75);
        pushButton_72->setFont(font1);
        pushButton_72->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_72->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_72->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_72, 7, 1, 1, 1);

        pushButton_78 = new QPushButton(gridLayoutWidget_2);
        pushButton_78->setObjectName(QString::fromUtf8("pushButton_78"));
        pushButton_78->setEnabled(true);
        pushButton_78->setBaseSize(QSize(0, 0));
        QPalette palette76;
        palette76.setBrush(QPalette::Active, QPalette::Button, brush);
        palette76.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette76.setBrush(QPalette::Active, QPalette::Base, brush);
        palette76.setBrush(QPalette::Active, QPalette::Window, brush);
        palette76.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette76.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette76.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette76.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette76.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette76.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette76.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette76.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_78->setPalette(palette76);
        pushButton_78->setFont(font1);
        pushButton_78->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_78->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_78->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_78, 7, 7, 1, 1);

        pushButton_74 = new QPushButton(gridLayoutWidget_2);
        pushButton_74->setObjectName(QString::fromUtf8("pushButton_74"));
        pushButton_74->setEnabled(true);
        pushButton_74->setBaseSize(QSize(0, 0));
        QPalette palette77;
        palette77.setBrush(QPalette::Active, QPalette::Button, brush);
        palette77.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette77.setBrush(QPalette::Active, QPalette::Base, brush);
        palette77.setBrush(QPalette::Active, QPalette::Window, brush);
        palette77.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette77.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette77.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette77.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette77.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette77.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette77.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette77.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_74->setPalette(palette77);
        pushButton_74->setFont(font1);
        pushButton_74->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_74->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_74->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_74, 7, 3, 1, 1);

        pushButton_73 = new QPushButton(gridLayoutWidget_2);
        pushButton_73->setObjectName(QString::fromUtf8("pushButton_73"));
        pushButton_73->setEnabled(true);
        pushButton_73->setBaseSize(QSize(0, 0));
        QPalette palette78;
        palette78.setBrush(QPalette::Active, QPalette::Button, brush);
        palette78.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette78.setBrush(QPalette::Active, QPalette::Base, brush);
        palette78.setBrush(QPalette::Active, QPalette::Window, brush);
        palette78.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette78.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette78.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette78.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette78.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette78.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette78.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette78.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_73->setPalette(palette78);
        pushButton_73->setFont(font1);
        pushButton_73->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_73->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_73->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_73, 7, 2, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setEnabled(true);
        pushButton_7->setBaseSize(QSize(0, 0));
        QPalette palette79;
        palette79.setBrush(QPalette::Active, QPalette::Button, brush);
        palette79.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette79.setBrush(QPalette::Active, QPalette::Base, brush);
        palette79.setBrush(QPalette::Active, QPalette::Window, brush);
        palette79.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette79.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette79.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette79.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette79.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette79.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette79.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette79.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_7->setPalette(palette79);
        pushButton_7->setFont(font1);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_7->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_64 = new QPushButton(gridLayoutWidget_2);
        pushButton_64->setObjectName(QString::fromUtf8("pushButton_64"));
        pushButton_64->setEnabled(true);
        pushButton_64->setBaseSize(QSize(0, 0));
        QPalette palette80;
        palette80.setBrush(QPalette::Active, QPalette::Button, brush);
        palette80.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette80.setBrush(QPalette::Active, QPalette::Base, brush);
        palette80.setBrush(QPalette::Active, QPalette::Window, brush);
        palette80.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette80.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette80.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette80.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette80.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette80.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette80.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette80.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_64->setPalette(palette80);
        pushButton_64->setFont(font1);
        pushButton_64->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_64->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-style:dotted;\n"
"border-width: 0.5px;\n"
"border-color: rgb(255, 255, 0);\n"
"height: 35px;"));
        pushButton_64->setIconSize(QSize(90, 30));

        gridLayout_2->addWidget(pushButton_64, 5, 7, 1, 1);

        pushButton_58->raise();
        pushButton_15->raise();
        pushButton_50->raise();
        pushButton_77->raise();
        pushButton_59->raise();
        pushButton_13->raise();
        pushButton_72->raise();
        pushButton_68->raise();
        pushButton_46->raise();
        pushButton_76->raise();
        pushButton_49->raise();
        pushButton_27->raise();
        pushButton_30->raise();
        pushButton_51->raise();
        pushButton_75->raise();
        pushButton_28->raise();
        pushButton_35->raise();
        pushButton_31->raise();
        pushButton_41->raise();
        pushButton_23->raise();
        pushButton_47->raise();
        pushButton_65->raise();
        pushButton_9->raise();
        pushButton_57->raise();
        pushButton_69->raise();
        pushButton_8->raise();
        pushButton_40->raise();
        pushButton_48->raise();
        pushButton_22->raise();
        pushButton_19->raise();
        pushButton_70->raise();
        pushButton_29->raise();
        pushButton_32->raise();
        pushButton_39->raise();
        pushButton_10->raise();
        pushButton_67->raise();
        pushButton_14->raise();
        pushButton_56->raise();
        pushButton_43->raise();
        pushButton_63->raise();
        pushButton_24->raise();
        pushButton_11->raise();
        pushButton_73->raise();
        pushButton_54->raise();
        pushButton_53->raise();
        pushButton_18->raise();
        pushButton_66->raise();
        pushButton_17->raise();
        pushButton_64->raise();
        pushButton_42->raise();
        pushButton_25->raise();
        pushButton_55->raise();
        pushButton_16->raise();
        pushButton_37->raise();
        pushButton_36->raise();
        pushButton_71->raise();
        pushButton_33->raise();
        pushButton_7->raise();
        pushButton_20->raise();
        pushButton_45->raise();
        pushButton_52->raise();
        pushButton_61->raise();
        pushButton_44->raise();
        pushButton_60->raise();
        pushButton_26->raise();
        pushButton_38->raise();
        pushButton_78->raise();
        pushButton_12->raise();
        pushButton_62->raise();
        pushButton_21->raise();
        pushButton_34->raise();
        pushButton_74->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1154, 21));
        menuCircuitos_Logicos = new QMenu(menuBar);
        menuCircuitos_Logicos->setObjectName(QString::fromUtf8("menuCircuitos_Logicos"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setStyleSheet(QString::fromUtf8(""));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuCircuitos_Logicos->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Portas L\303\263gicas:", nullptr));
        ou_botao->setText(QApplication::translate("MainWindow", "Ou", nullptr));
        ouExclusiv_Botao->setText(QApplication::translate("MainWindow", "Ou Exclusivo", nullptr));
        nao_botao->setText(QApplication::translate("MainWindow", "N\303\243o", nullptr));
        e_botao->setText(QApplication::translate("MainWindow", "E", nullptr));
        fioS_botao->setText(QApplication::translate("MainWindow", "Fio de saida", nullptr));
        fioE_botao->setText(QApplication::translate("MainWindow", "Fio de entrada", nullptr));
        botao1_botao->setText(QApplication::translate("MainWindow", "Botao 1", nullptr));
        botao0_botao->setText(QApplication::translate("MainWindow", "Botao 0", nullptr));
        LED_botao->setText(QApplication::translate("MainWindow", "LED", nullptr));
        pushButton_57->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_19->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_21->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_22->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_69->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_75->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_48->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_40->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_18->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_76->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_62->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_52->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_23->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_25->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_70->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_20->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_28->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_26->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_30->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_46->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_24->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_29->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_71->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_41->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_16->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_17->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_58->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_43->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_45->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_51->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_63->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_77->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_27->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_38->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_31->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_33->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_32->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_34->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_35->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_42->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_39->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_55->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_37->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_36->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_44->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_49->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_50->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_47->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_56->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_54->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_53->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_60->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_68->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_59->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_65->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_67->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_66->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_61->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_72->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_78->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_74->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_73->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        pushButton_64->setText(QApplication::translate("MainWindow", "Vazio", nullptr));
        menuCircuitos_Logicos->setTitle(QApplication::translate("MainWindow", "Circuitos Logicos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
