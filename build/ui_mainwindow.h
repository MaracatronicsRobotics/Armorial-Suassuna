/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "entity/coachview/samico.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *sprite_1;
    QProgressBar *battery_1;
    QLabel *label;
    QLabel *label_21;
    QLabel *status_1;
    QLabel *dribble_1;
    QLabel *label_27;
    QLabel *imgrole_1;
    QLabel *role_1;
    QGroupBox *groupBox_2;
    QLabel *sprite_2;
    QProgressBar *battery_2;
    QLabel *label_2;
    QLabel *status_2;
    QLabel *dribble_2;
    QLabel *role_2;
    QLabel *label_28;
    QLabel *imgrole_2;
    QLabel *label_22;
    QGroupBox *groupBox_3;
    QLabel *sprite_3;
    QProgressBar *battery_3;
    QLabel *label_3;
    QLabel *status_3;
    QLabel *dribble_3;
    QLabel *role_3;
    QLabel *label_23;
    QLabel *imgrole_3;
    QLabel *label_29;
    QGroupBox *groupBox_4;
    QLabel *sprite_4;
    QProgressBar *battery_4;
    QLabel *label_4;
    QLabel *status_4;
    QLabel *dribble_4;
    QLabel *role_4;
    QLabel *label_30;
    QLabel *imgrole_4;
    QLabel *label_24;
    QGroupBox *groupBox_5;
    QLabel *sprite_5;
    QProgressBar *battery_5;
    QLabel *label_5;
    QLabel *status_5;
    QLabel *dribble_5;
    QLabel *role_5;
    QLabel *label_31;
    QLabel *imgrole_5;
    QLabel *label_25;
    QGroupBox *groupBox_6;
    QLabel *sprite_6;
    QProgressBar *battery_6;
    QLabel *label_6;
    QLabel *status_6;
    QLabel *dribble_6;
    QLabel *role_6;
    QLabel *label_26;
    QLabel *imgrole_6;
    QLabel *label_32;
    QFrame *line;
    QGroupBox *groupBox_7;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_stage;
    QLabel *label_command;
    QLabel *label_time;
    QLabel *blue_name;
    QLabel *yellow_name;
    QLabel *t_score_b;
    QLabel *t_redc_b;
    QLabel *t_yelc_b;
    QLabel *t_tout_b;
    QLabel *t_redc_y;
    QLabel *t_yelc_y;
    QLabel *t_tout_y;
    QLabel *t_score_y;
    QFrame *line_3;
    QLabel *score_b;
    QLabel *redc_b;
    QLabel *yelc_b;
    QLabel *tout_b;
    QLabel *score_y;
    QLabel *redc_y;
    QLabel *yelc_y;
    QLabel *tout_y;
    QFrame *line_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    MyCanvas *samico;
    QGroupBox *controllerBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line_4;
    QGroupBox *groupBox_8;
    QLabel *agressivity_img;
    QLabel *agressivity_txt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1155, 825);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/textures/textures/armorial.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(920, 78, 221, 111));
        groupBox->setAlignment(Qt::AlignCenter);
        sprite_1 = new QLabel(groupBox);
        sprite_1->setObjectName(QString::fromUtf8("sprite_1"));
        sprite_1->setGeometry(QRect(8, 29, 64, 64));
        sprite_1->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/b0.png")));
        sprite_1->setScaledContents(true);
        battery_1 = new QProgressBar(groupBox);
        battery_1->setObjectName(QString::fromUtf8("battery_1"));
        battery_1->setGeometry(QRect(100, 90, 111, 16));
        QFont font;
        font.setPointSize(8);
        battery_1->setFont(font);
        battery_1->setAutoFillBackground(false);
        battery_1->setValue(24);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 90, 16, 16));
        label->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/battery.png")));
        label->setScaledContents(true);
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(80, 30, 16, 14));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/connect.png")));
        label_21->setScaledContents(true);
        status_1 = new QLabel(groupBox);
        status_1->setObjectName(QString::fromUtf8("status_1"));
        status_1->setGeometry(QRect(100, 28, 17, 17));
        status_1->setFont(font);
        dribble_1 = new QLabel(groupBox);
        dribble_1->setObjectName(QString::fromUtf8("dribble_1"));
        dribble_1->setGeometry(QRect(100, 50, 17, 17));
        dribble_1->setFont(font);
        label_27 = new QLabel(groupBox);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(80, 50, 16, 16));
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/dribble.png")));
        label_27->setScaledContents(true);
        imgrole_1 = new QLabel(groupBox);
        imgrole_1->setObjectName(QString::fromUtf8("imgrole_1"));
        imgrole_1->setGeometry(QRect(80, 70, 16, 16));
        imgrole_1->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/none.png")));
        imgrole_1->setScaledContents(true);
        role_1 = new QLabel(groupBox);
        role_1->setObjectName(QString::fromUtf8("role_1"));
        role_1->setGeometry(QRect(100, 70, 111, 17));
        role_1->setFont(font);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(920, 196, 221, 111));
        groupBox_2->setAlignment(Qt::AlignCenter);
        sprite_2 = new QLabel(groupBox_2);
        sprite_2->setObjectName(QString::fromUtf8("sprite_2"));
        sprite_2->setGeometry(QRect(8, 29, 64, 64));
        sprite_2->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/b1.png")));
        sprite_2->setScaledContents(true);
        battery_2 = new QProgressBar(groupBox_2);
        battery_2->setObjectName(QString::fromUtf8("battery_2"));
        battery_2->setGeometry(QRect(100, 90, 111, 16));
        battery_2->setFont(font);
        battery_2->setValue(24);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 90, 16, 16));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/battery.png")));
        label_2->setScaledContents(true);
        status_2 = new QLabel(groupBox_2);
        status_2->setObjectName(QString::fromUtf8("status_2"));
        status_2->setGeometry(QRect(100, 28, 17, 17));
        status_2->setFont(font);
        dribble_2 = new QLabel(groupBox_2);
        dribble_2->setObjectName(QString::fromUtf8("dribble_2"));
        dribble_2->setGeometry(QRect(100, 50, 17, 17));
        dribble_2->setFont(font);
        role_2 = new QLabel(groupBox_2);
        role_2->setObjectName(QString::fromUtf8("role_2"));
        role_2->setGeometry(QRect(100, 70, 111, 17));
        role_2->setFont(font);
        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(80, 50, 16, 16));
        label_28->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/dribble.png")));
        label_28->setScaledContents(true);
        imgrole_2 = new QLabel(groupBox_2);
        imgrole_2->setObjectName(QString::fromUtf8("imgrole_2"));
        imgrole_2->setGeometry(QRect(80, 70, 16, 16));
        imgrole_2->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/none.png")));
        imgrole_2->setScaledContents(true);
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(80, 30, 16, 16));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/connect.png")));
        label_22->setScaledContents(true);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(920, 314, 221, 111));
        groupBox_3->setAlignment(Qt::AlignCenter);
        sprite_3 = new QLabel(groupBox_3);
        sprite_3->setObjectName(QString::fromUtf8("sprite_3"));
        sprite_3->setGeometry(QRect(8, 29, 64, 64));
        sprite_3->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/b2.png")));
        sprite_3->setScaledContents(true);
        battery_3 = new QProgressBar(groupBox_3);
        battery_3->setObjectName(QString::fromUtf8("battery_3"));
        battery_3->setGeometry(QRect(100, 90, 111, 16));
        battery_3->setFont(font);
        battery_3->setValue(24);
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 90, 16, 16));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/battery.png")));
        label_3->setScaledContents(true);
        status_3 = new QLabel(groupBox_3);
        status_3->setObjectName(QString::fromUtf8("status_3"));
        status_3->setGeometry(QRect(100, 28, 17, 17));
        status_3->setFont(font);
        dribble_3 = new QLabel(groupBox_3);
        dribble_3->setObjectName(QString::fromUtf8("dribble_3"));
        dribble_3->setGeometry(QRect(100, 50, 17, 17));
        dribble_3->setFont(font);
        role_3 = new QLabel(groupBox_3);
        role_3->setObjectName(QString::fromUtf8("role_3"));
        role_3->setGeometry(QRect(100, 70, 111, 17));
        role_3->setFont(font);
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(80, 30, 16, 14));
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/connect.png")));
        label_23->setScaledContents(true);
        imgrole_3 = new QLabel(groupBox_3);
        imgrole_3->setObjectName(QString::fromUtf8("imgrole_3"));
        imgrole_3->setGeometry(QRect(80, 70, 16, 16));
        imgrole_3->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/none.png")));
        imgrole_3->setScaledContents(true);
        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(80, 50, 16, 16));
        label_29->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/dribble.png")));
        label_29->setScaledContents(true);
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(920, 432, 221, 111));
        groupBox_4->setAlignment(Qt::AlignCenter);
        sprite_4 = new QLabel(groupBox_4);
        sprite_4->setObjectName(QString::fromUtf8("sprite_4"));
        sprite_4->setGeometry(QRect(8, 29, 64, 64));
        sprite_4->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/b3.png")));
        sprite_4->setScaledContents(true);
        battery_4 = new QProgressBar(groupBox_4);
        battery_4->setObjectName(QString::fromUtf8("battery_4"));
        battery_4->setGeometry(QRect(100, 90, 111, 16));
        battery_4->setFont(font);
        battery_4->setValue(24);
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 90, 16, 16));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/battery.png")));
        label_4->setScaledContents(true);
        status_4 = new QLabel(groupBox_4);
        status_4->setObjectName(QString::fromUtf8("status_4"));
        status_4->setGeometry(QRect(100, 28, 17, 17));
        status_4->setFont(font);
        dribble_4 = new QLabel(groupBox_4);
        dribble_4->setObjectName(QString::fromUtf8("dribble_4"));
        dribble_4->setGeometry(QRect(100, 50, 17, 17));
        dribble_4->setFont(font);
        role_4 = new QLabel(groupBox_4);
        role_4->setObjectName(QString::fromUtf8("role_4"));
        role_4->setGeometry(QRect(100, 70, 111, 17));
        role_4->setFont(font);
        label_30 = new QLabel(groupBox_4);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(80, 50, 16, 16));
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/dribble.png")));
        label_30->setScaledContents(true);
        imgrole_4 = new QLabel(groupBox_4);
        imgrole_4->setObjectName(QString::fromUtf8("imgrole_4"));
        imgrole_4->setGeometry(QRect(80, 70, 16, 16));
        imgrole_4->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/none.png")));
        imgrole_4->setScaledContents(true);
        label_24 = new QLabel(groupBox_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(80, 30, 16, 16));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/connect.png")));
        label_24->setScaledContents(true);
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(920, 550, 221, 111));
        groupBox_5->setAlignment(Qt::AlignCenter);
        sprite_5 = new QLabel(groupBox_5);
        sprite_5->setObjectName(QString::fromUtf8("sprite_5"));
        sprite_5->setGeometry(QRect(8, 29, 64, 64));
        sprite_5->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/b4.png")));
        sprite_5->setScaledContents(true);
        battery_5 = new QProgressBar(groupBox_5);
        battery_5->setObjectName(QString::fromUtf8("battery_5"));
        battery_5->setGeometry(QRect(100, 90, 111, 16));
        battery_5->setFont(font);
        battery_5->setValue(24);
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 90, 16, 16));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/battery.png")));
        label_5->setScaledContents(true);
        status_5 = new QLabel(groupBox_5);
        status_5->setObjectName(QString::fromUtf8("status_5"));
        status_5->setGeometry(QRect(100, 28, 17, 17));
        status_5->setFont(font);
        dribble_5 = new QLabel(groupBox_5);
        dribble_5->setObjectName(QString::fromUtf8("dribble_5"));
        dribble_5->setGeometry(QRect(100, 50, 17, 17));
        dribble_5->setFont(font);
        role_5 = new QLabel(groupBox_5);
        role_5->setObjectName(QString::fromUtf8("role_5"));
        role_5->setGeometry(QRect(100, 70, 111, 17));
        role_5->setFont(font);
        label_31 = new QLabel(groupBox_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(80, 50, 16, 16));
        label_31->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/dribble.png")));
        label_31->setScaledContents(true);
        imgrole_5 = new QLabel(groupBox_5);
        imgrole_5->setObjectName(QString::fromUtf8("imgrole_5"));
        imgrole_5->setGeometry(QRect(80, 70, 16, 16));
        imgrole_5->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/none.png")));
        imgrole_5->setScaledContents(true);
        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(80, 30, 16, 14));
        label_25->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/connect.png")));
        label_25->setScaledContents(true);
        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(920, 668, 221, 111));
        groupBox_6->setAlignment(Qt::AlignCenter);
        sprite_6 = new QLabel(groupBox_6);
        sprite_6->setObjectName(QString::fromUtf8("sprite_6"));
        sprite_6->setGeometry(QRect(8, 29, 64, 64));
        sprite_6->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/b5.png")));
        sprite_6->setScaledContents(true);
        battery_6 = new QProgressBar(groupBox_6);
        battery_6->setObjectName(QString::fromUtf8("battery_6"));
        battery_6->setGeometry(QRect(100, 90, 111, 16));
        battery_6->setFont(font);
        battery_6->setValue(24);
        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 90, 16, 16));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/battery.png")));
        label_6->setScaledContents(true);
        status_6 = new QLabel(groupBox_6);
        status_6->setObjectName(QString::fromUtf8("status_6"));
        status_6->setGeometry(QRect(100, 28, 17, 17));
        status_6->setFont(font);
        dribble_6 = new QLabel(groupBox_6);
        dribble_6->setObjectName(QString::fromUtf8("dribble_6"));
        dribble_6->setGeometry(QRect(100, 50, 17, 17));
        dribble_6->setFont(font);
        role_6 = new QLabel(groupBox_6);
        role_6->setObjectName(QString::fromUtf8("role_6"));
        role_6->setGeometry(QRect(100, 70, 111, 17));
        role_6->setFont(font);
        label_26 = new QLabel(groupBox_6);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(80, 30, 16, 14));
        label_26->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/connect.png")));
        label_26->setScaledContents(true);
        imgrole_6 = new QLabel(groupBox_6);
        imgrole_6->setObjectName(QString::fromUtf8("imgrole_6"));
        imgrole_6->setGeometry(QRect(80, 70, 16, 16));
        imgrole_6->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/none.png")));
        imgrole_6->setScaledContents(true);
        label_32 = new QLabel(groupBox_6);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(80, 50, 16, 16));
        label_32->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/dribble.png")));
        label_32->setScaledContents(true);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(900, 30, 20, 751));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(20, 160, 331, 241));
        label_7 = new QLabel(groupBox_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 60, 61, 17));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Umpush"));
        font1.setPointSize(9);
        label_7->setFont(font1);
        label_8 = new QLabel(groupBox_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 81, 61, 17));
        label_8->setFont(font1);
        label_9 = new QLabel(groupBox_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 40, 41, 17));
        label_9->setFont(font1);
        label_stage = new QLabel(groupBox_7);
        label_stage->setObjectName(QString::fromUtf8("label_stage"));
        label_stage->setGeometry(QRect(50, 39, 261, 17));
        QFont font2;
        font2.setPointSize(10);
        label_stage->setFont(font2);
        label_command = new QLabel(groupBox_7);
        label_command->setObjectName(QString::fromUtf8("label_command"));
        label_command->setGeometry(QRect(73, 58, 241, 20));
        label_command->setFont(font2);
        label_time = new QLabel(groupBox_7);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(70, 80, 241, 17));
        label_time->setFont(font2);
        blue_name = new QLabel(groupBox_7);
        blue_name->setObjectName(QString::fromUtf8("blue_name"));
        blue_name->setGeometry(QRect(10, 130, 141, 17));
        blue_name->setAlignment(Qt::AlignCenter);
        yellow_name = new QLabel(groupBox_7);
        yellow_name->setObjectName(QString::fromUtf8("yellow_name"));
        yellow_name->setGeometry(QRect(170, 130, 151, 17));
        yellow_name->setAlignment(Qt::AlignCenter);
        t_score_b = new QLabel(groupBox_7);
        t_score_b->setObjectName(QString::fromUtf8("t_score_b"));
        t_score_b->setGeometry(QRect(10, 150, 101, 17));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Umpush"));
        font3.setPointSize(10);
        t_score_b->setFont(font3);
        t_score_b->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        t_redc_b = new QLabel(groupBox_7);
        t_redc_b->setObjectName(QString::fromUtf8("t_redc_b"));
        t_redc_b->setGeometry(QRect(10, 170, 101, 17));
        t_redc_b->setFont(font3);
        t_redc_b->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        t_yelc_b = new QLabel(groupBox_7);
        t_yelc_b->setObjectName(QString::fromUtf8("t_yelc_b"));
        t_yelc_b->setGeometry(QRect(10, 190, 101, 16));
        t_yelc_b->setFont(font3);
        t_yelc_b->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        t_tout_b = new QLabel(groupBox_7);
        t_tout_b->setObjectName(QString::fromUtf8("t_tout_b"));
        t_tout_b->setGeometry(QRect(10, 210, 101, 16));
        t_tout_b->setFont(font3);
        t_tout_b->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        t_redc_y = new QLabel(groupBox_7);
        t_redc_y->setObjectName(QString::fromUtf8("t_redc_y"));
        t_redc_y->setGeometry(QRect(190, 170, 101, 17));
        t_redc_y->setFont(font3);
        t_redc_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        t_yelc_y = new QLabel(groupBox_7);
        t_yelc_y->setObjectName(QString::fromUtf8("t_yelc_y"));
        t_yelc_y->setGeometry(QRect(190, 190, 101, 16));
        t_yelc_y->setFont(font3);
        t_yelc_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        t_tout_y = new QLabel(groupBox_7);
        t_tout_y->setObjectName(QString::fromUtf8("t_tout_y"));
        t_tout_y->setGeometry(QRect(190, 210, 101, 16));
        t_tout_y->setFont(font3);
        t_tout_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        t_score_y = new QLabel(groupBox_7);
        t_score_y->setObjectName(QString::fromUtf8("t_score_y"));
        t_score_y->setGeometry(QRect(190, 150, 101, 17));
        t_score_y->setFont(font3);
        t_score_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_3 = new QFrame(groupBox_7);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(160, 130, 20, 101));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        score_b = new QLabel(groupBox_7);
        score_b->setObjectName(QString::fromUtf8("score_b"));
        score_b->setGeometry(QRect(110, 149, 20, 20));
        score_b->setFont(font3);
        score_b->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        redc_b = new QLabel(groupBox_7);
        redc_b->setObjectName(QString::fromUtf8("redc_b"));
        redc_b->setGeometry(QRect(110, 169, 20, 20));
        redc_b->setFont(font3);
        redc_b->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        yelc_b = new QLabel(groupBox_7);
        yelc_b->setObjectName(QString::fromUtf8("yelc_b"));
        yelc_b->setGeometry(QRect(110, 189, 20, 20));
        yelc_b->setFont(font3);
        yelc_b->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tout_b = new QLabel(groupBox_7);
        tout_b->setObjectName(QString::fromUtf8("tout_b"));
        tout_b->setGeometry(QRect(110, 209, 20, 20));
        tout_b->setFont(font3);
        tout_b->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        score_y = new QLabel(groupBox_7);
        score_y->setObjectName(QString::fromUtf8("score_y"));
        score_y->setGeometry(QRect(290, 149, 20, 20));
        score_y->setFont(font3);
        score_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        redc_y = new QLabel(groupBox_7);
        redc_y->setObjectName(QString::fromUtf8("redc_y"));
        redc_y->setGeometry(QRect(290, 169, 20, 20));
        redc_y->setFont(font3);
        redc_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        yelc_y = new QLabel(groupBox_7);
        yelc_y->setObjectName(QString::fromUtf8("yelc_y"));
        yelc_y->setGeometry(QRect(290, 189, 20, 20));
        yelc_y->setFont(font3);
        yelc_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tout_y = new QLabel(groupBox_7);
        tout_y->setObjectName(QString::fromUtf8("tout_y"));
        tout_y->setGeometry(QRect(290, 209, 20, 20));
        tout_y->setFont(font3);
        tout_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 410, 331, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 440, 331, 331));
        tabWidget->setTabPosition(QTabWidget::West);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        samico = new MyCanvas(centralwidget);
        samico->setObjectName(QString::fromUtf8("samico"));
        samico->setGeometry(QRect(370, 30, 527, 740));
        controllerBox = new QGroupBox(centralwidget);
        controllerBox->setObjectName(QString::fromUtf8("controllerBox"));
        controllerBox->setEnabled(true);
        controllerBox->setGeometry(QRect(20, 20, 331, 91));
        pushButton = new QPushButton(controllerBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 24, 64, 64));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/textures/textures/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(64, 64));
        pushButton_2 = new QPushButton(controllerBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 24, 64, 64));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/textures/textures/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(64, 64));
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, 130, 331, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        groupBox_8 = new QGroupBox(centralwidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(920, 20, 221, 51));
        groupBox_8->setAlignment(Qt::AlignCenter);
        agressivity_img = new QLabel(groupBox_8);
        agressivity_img->setObjectName(QString::fromUtf8("agressivity_img"));
        agressivity_img->setGeometry(QRect(70, 30, 16, 14));
        agressivity_img->setPixmap(QPixmap(QString::fromUtf8(":/textures/textures/eq.png")));
        agressivity_img->setScaledContents(true);
        agressivity_txt = new QLabel(groupBox_8);
        agressivity_txt->setObjectName(QString::fromUtf8("agressivity_txt"));
        agressivity_txt->setGeometry(QRect(90, 28, 91, 17));
        agressivity_txt->setFont(font);
        agressivity_txt->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1155, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Suassuna UI", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Robot 0", nullptr));
        sprite_1->setText(QString());
        label->setText(QString());
        label_21->setText(QString());
        status_1->setText(QApplication::translate("MainWindow", "Off", nullptr));
        dribble_1->setText(QApplication::translate("MainWindow", "Off", nullptr));
        label_27->setText(QString());
        imgrole_1->setText(QString());
        role_1->setText(QApplication::translate("MainWindow", "Undefined", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Robot 1", nullptr));
        sprite_2->setText(QString());
        label_2->setText(QString());
        status_2->setText(QApplication::translate("MainWindow", "Off", nullptr));
        dribble_2->setText(QApplication::translate("MainWindow", "Off", nullptr));
        role_2->setText(QApplication::translate("MainWindow", "Undefined", nullptr));
        label_28->setText(QString());
        imgrole_2->setText(QString());
        label_22->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Robot 2", nullptr));
        sprite_3->setText(QString());
        label_3->setText(QString());
        status_3->setText(QApplication::translate("MainWindow", "Off", nullptr));
        dribble_3->setText(QApplication::translate("MainWindow", "Off", nullptr));
        role_3->setText(QApplication::translate("MainWindow", "Undefined", nullptr));
        label_23->setText(QString());
        imgrole_3->setText(QString());
        label_29->setText(QString());
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Robot 3", nullptr));
        sprite_4->setText(QString());
        label_4->setText(QString());
        status_4->setText(QApplication::translate("MainWindow", "Off", nullptr));
        dribble_4->setText(QApplication::translate("MainWindow", "Off", nullptr));
        role_4->setText(QApplication::translate("MainWindow", "Undefined", nullptr));
        label_30->setText(QString());
        imgrole_4->setText(QString());
        label_24->setText(QString());
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Robot 4", nullptr));
        sprite_5->setText(QString());
        label_5->setText(QString());
        status_5->setText(QApplication::translate("MainWindow", "Off", nullptr));
        dribble_5->setText(QApplication::translate("MainWindow", "Off", nullptr));
        role_5->setText(QApplication::translate("MainWindow", "Undefined", nullptr));
        label_31->setText(QString());
        imgrole_5->setText(QString());
        label_25->setText(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Robot 5", nullptr));
        sprite_6->setText(QString());
        label_6->setText(QString());
        status_6->setText(QApplication::translate("MainWindow", "Off", nullptr));
        dribble_6->setText(QApplication::translate("MainWindow", "Off", nullptr));
        role_6->setText(QApplication::translate("MainWindow", "Undefined", nullptr));
        label_26->setText(QString());
        imgrole_6->setText(QString());
        label_32->setText(QString());
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Game Status", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Command:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Time Left:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Stage:", nullptr));
        label_stage->setText(QString());
        label_command->setText(QString());
        label_time->setText(QString());
        blue_name->setText(QApplication::translate("MainWindow", "<Blue Team>", nullptr));
        yellow_name->setText(QApplication::translate("MainWindow", "<Yellow Team>", nullptr));
        t_score_b->setText(QApplication::translate("MainWindow", "Score", nullptr));
        t_redc_b->setText(QApplication::translate("MainWindow", "Red Cards", nullptr));
        t_yelc_b->setText(QApplication::translate("MainWindow", "Yellow Cards", nullptr));
        t_tout_b->setText(QApplication::translate("MainWindow", "Timeouts Left", nullptr));
        t_redc_y->setText(QApplication::translate("MainWindow", "Red Cards", nullptr));
        t_yelc_y->setText(QApplication::translate("MainWindow", "Yellow Cards", nullptr));
        t_tout_y->setText(QApplication::translate("MainWindow", "Timeouts Left", nullptr));
        t_score_y->setText(QApplication::translate("MainWindow", "Score", nullptr));
        score_b->setText(QApplication::translate("MainWindow", "0", nullptr));
        redc_b->setText(QApplication::translate("MainWindow", "0", nullptr));
        yelc_b->setText(QApplication::translate("MainWindow", "0", nullptr));
        tout_b->setText(QApplication::translate("MainWindow", "0", nullptr));
        score_y->setText(QApplication::translate("MainWindow", "0", nullptr));
        redc_y->setText(QApplication::translate("MainWindow", "0", nullptr));
        yelc_y->setText(QApplication::translate("MainWindow", "0", nullptr));
        tout_y->setText(QApplication::translate("MainWindow", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));
        controllerBox->setTitle(QApplication::translate("MainWindow", "Suassuna Controller", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Team Agressivity", nullptr));
        agressivity_img->setText(QString());
        agressivity_txt->setText(QApplication::translate("MainWindow", "Equilibrated", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
