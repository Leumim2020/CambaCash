/********************************************************************************
** Form generated from reading UI file 'areacash.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREACASH_H
#define UI_AREACASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QUndoView>

QT_BEGIN_NAMESPACE

class Ui_areacash
{
public:
    QFrame *line;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_conta_2;
    QLabel *label;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_conta;
    QUndoView *undoView;
    QCalendarWidget *calendar;
    QComboBox *boxarea;
    QLabel *label_6;
    QDoubleSpinBox *boxmoney;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_test;

    void setupUi(QDialog *areacash)
    {
        if (areacash->objectName().isEmpty())
            areacash->setObjectName("areacash");
        areacash->resize(880, 640);
        areacash->setMinimumSize(QSize(880, 640));
        areacash->setMaximumSize(QSize(880, 640));
        areacash->setStyleSheet(QString::fromUtf8("background-color:rgb(59, 81, 127);"));
        line = new QFrame(areacash);
        line->setObjectName("line");
        line->setGeometry(QRect(240, 0, 10, 639));
        line->setMinimumSize(QSize(10, 0));
        line->setMaximumSize(QSize(10, 16777215));
        line->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:none;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(areacash);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 70, 41, 61));
        label_3->setCursor(QCursor(Qt::PointingHandCursor));
        label_3->setStyleSheet(QString::fromUtf8("font: 600 45pt \"Segoe UI Semibold\";\n"
"color: rgb(185, 185, 185);\n"
""));
        label_4 = new QLabel(areacash);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 90, 61, 31));
        label_4->setCursor(QCursor(Qt::PointingHandCursor));
        label_4->setStyleSheet(QString::fromUtf8("font: 900 15pt \"Segoe UI\";\n"
"color: rgb(255, 212, 38);"));
        pushButton_conta_2 = new QPushButton(areacash);
        pushButton_conta_2->setObjectName("pushButton_conta_2");
        pushButton_conta_2->setGeometry(QRect(700, 500, 171, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        pushButton_conta_2->setFont(font);
        pushButton_conta_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_conta_2->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"font: 10pt \"Segoe UI\";\n"
"background-color:white;\n"
"color:rgb(59,81,127);"));
        label = new QLabel(areacash);
        label->setObjectName("label");
        label->setGeometry(QRect(810, 600, 51, 31));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"color: white;"));
        label_5 = new QLabel(areacash);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(750, 600, 51, 31));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"color: white;"));
        pushButton = new QPushButton(areacash);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 290, 100, 30));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"font: 10pt \"Segoe UI\";\n"
"background-color:white;\n"
"color:rgb(59,81,127);"));
        pushButton_conta = new QPushButton(areacash);
        pushButton_conta->setObjectName("pushButton_conta");
        pushButton_conta->setGeometry(QRect(40, 230, 170, 30));
        pushButton_conta->setMinimumSize(QSize(170, 30));
        pushButton_conta->setMaximumSize(QSize(0, 16777215));
        pushButton_conta->setFont(font);
        pushButton_conta->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_conta->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"font: 10pt \"Segoe UI\";\n"
"background-color:white;\n"
"color:rgb(59,81,127);"));
        undoView = new QUndoView(areacash);
        undoView->setObjectName("undoView");
        undoView->setGeometry(QRect(260, 230, 611, 261));
        QFont font1;
        font1.setBold(true);
        undoView->setFont(font1);
        undoView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        calendar = new QCalendarWidget(areacash);
        calendar->setObjectName("calendar");
        calendar->setGeometry(QRect(490, 240, 371, 231));
        calendar->setCursor(QCursor(Qt::PointingHandCursor));
        calendar->setStyleSheet(QString::fromUtf8("\n"
"color:black;"));
        boxarea = new QComboBox(areacash);
        boxarea->addItem(QString());
        boxarea->addItem(QString());
        boxarea->addItem(QString());
        boxarea->addItem(QString());
        boxarea->addItem(QString());
        boxarea->setObjectName("boxarea");
        boxarea->setGeometry(QRect(270, 310, 208, 40));
        boxarea->setMinimumSize(QSize(208, 40));
        boxarea->setMaximumSize(QSize(208, 40));
        boxarea->setCursor(QCursor(Qt::PointingHandCursor));
        boxarea->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
""));
        label_6 = new QLabel(areacash);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(450, 430, 31, 21));
        label_6->setCursor(QCursor(Qt::PointingHandCursor));
        label_6->setStyleSheet(QString::fromUtf8("font: 15pt \"Segoe UI\";\n"
"color: rgb(255, 212, 38);"));
        boxmoney = new QDoubleSpinBox(areacash);
        boxmoney->setObjectName("boxmoney");
        boxmoney->setGeometry(QRect(270, 390, 210, 40));
        boxmoney->setMinimumSize(QSize(210, 40));
        boxmoney->setMaximumSize(QSize(210, 40));
        boxmoney->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        boxmoney->setMaximum(100000000.000000000000000);
        boxmoney->setStepType(QAbstractSpinBox::DefaultStepType);
        label_7 = new QLabel(areacash);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(270, 370, 211, 21));
        label_7->setCursor(QCursor(Qt::PointingHandCursor));
        label_7->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"color: white;"));
        label_8 = new QLabel(areacash);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(260, 190, 381, 31));
        label_8->setCursor(QCursor(Qt::PointingHandCursor));
        label_8->setStyleSheet(QString::fromUtf8("font: 15pt \"Segoe UI \";\n"
"color: rgb(185, 185, 185);\n"
""));
        label_test = new QLabel(areacash);
        label_test->setObjectName("label_test");
        label_test->setGeometry(QRect(270, 520, 51, 51));

        retranslateUi(areacash);

        QMetaObject::connectSlotsByName(areacash);
    } // setupUi

    void retranslateUi(QDialog *areacash)
    {
        areacash->setWindowTitle(QCoreApplication::translate("areacash", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("areacash", "C", nullptr));
        label_4->setText(QCoreApplication::translate("areacash", "CASH", nullptr));
        pushButton_conta_2->setText(QCoreApplication::translate("areacash", "SUBMETER CONTA", nullptr));
        label->setText(QCoreApplication::translate("areacash", "00:00:00", nullptr));
        label_5->setText(QCoreApplication::translate("areacash", "TEMPO:", nullptr));
        pushButton->setText(QCoreApplication::translate("areacash", "VOLTAR", nullptr));
        pushButton_conta->setText(QCoreApplication::translate("areacash", "VER CONTAS", nullptr));
        boxarea->setItemText(0, QCoreApplication::translate("areacash", "SELECIONE LOJA...", nullptr));
        boxarea->setItemText(1, QCoreApplication::translate("areacash", "BAR", nullptr));
        boxarea->setItemText(2, QCoreApplication::translate("areacash", "BARBEARIA", nullptr));
        boxarea->setItemText(3, QCoreApplication::translate("areacash", "LOJA ZAP", nullptr));
        boxarea->setItemText(4, QCoreApplication::translate("areacash", "SAL\303\203O  DE BELEZA", nullptr));

        boxarea->setPlaceholderText(QCoreApplication::translate("areacash", "SELECIONA \303\201REA CAMBA", nullptr));
        label_6->setText(QCoreApplication::translate("areacash", "KZ", nullptr));
        label_7->setText(QCoreApplication::translate("areacash", "DIGITE QUANTIA ARRECADADA", nullptr));
        label_8->setText(QCoreApplication::translate("areacash", "PRESTAR CONTA AO CAMBA", nullptr));
        label_test->setText(QCoreApplication::translate("areacash", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class areacash: public Ui_areacash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREACASH_H
