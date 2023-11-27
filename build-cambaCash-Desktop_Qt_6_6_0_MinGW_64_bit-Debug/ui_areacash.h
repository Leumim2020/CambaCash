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
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_conta;
    QUndoView *undoView;
    QCalendarWidget *calendar;
    QComboBox *boxarea;
    QDoubleSpinBox *boxmoney;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_test;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_time;
    QLabel *label_period;

    void setupUi(QDialog *areacash)
    {
        if (areacash->objectName().isEmpty())
            areacash->setObjectName("areacash");
        areacash->resize(880, 640);
        areacash->setMinimumSize(QSize(880, 640));
        areacash->setMaximumSize(QSize(880, 640));
        QFont font;
        font.setPointSize(20);
        areacash->setFont(font);
        areacash->setStyleSheet(QString::fromUtf8("background-color:rgb(59, 81, 127);\n"
""));
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
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        pushButton_conta_2->setFont(font1);
        pushButton_conta_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_conta_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid white;\n"
"	font: 10pt \"Segoe UI\";\n"
"	background-color:white;\n"
"	color:rgb(59,81,127);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #0090d8;\n"
"}"));
        label_5 = new QLabel(areacash);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(260, 500, 61, 31));
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"font: 10pt \"Segoe UI\";\n"
"color:rgb(59,81,127);\n"
""));
        pushButton = new QPushButton(areacash);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 290, 100, 30));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid white;\n"
"	background-image: url(:/area/area/back.png);\n"
"	background-repeat:none;\n"
"	font: 10pt \"Segoe UI\";\n"
"	background-color:white;\n"
"	color:rgb(59,81,127);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #0090d8;\n"
"}"));
        pushButton_conta = new QPushButton(areacash);
        pushButton_conta->setObjectName("pushButton_conta");
        pushButton_conta->setGeometry(QRect(40, 230, 170, 30));
        pushButton_conta->setMinimumSize(QSize(170, 30));
        pushButton_conta->setMaximumSize(QSize(0, 16777215));
        pushButton_conta->setFont(font1);
        pushButton_conta->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_conta->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid white;\n"
"	background-repeat:none;\n"
"	background-image: url(:/area/area/relatorio.png);\n"
"	font: 10pt \"Segoe UI\";\n"
"	background-color:white;\n"
"	color:rgb(59,81,127);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #0090d8;\n"
"}"));
        pushButton_conta->setIconSize(QSize(14, 16));
        undoView = new QUndoView(areacash);
        undoView->setObjectName("undoView");
        undoView->setGeometry(QRect(260, 230, 611, 261));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        undoView->setFont(font2);
        undoView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        calendar = new QCalendarWidget(areacash);
        calendar->setObjectName("calendar");
        calendar->setEnabled(false);
        calendar->setGeometry(QRect(490, 240, 371, 231));
        calendar->setCursor(QCursor(Qt::PointingHandCursor));
        calendar->setStyleSheet(QString::fromUtf8("color:black;"));
        calendar->setGridVisible(true);
        calendar->setSelectionMode(QCalendarWidget::SingleSelection);
        calendar->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calendar->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendar->setNavigationBarVisible(false);
        calendar->setDateEditEnabled(true);
        boxarea = new QComboBox(areacash);
        boxarea->setObjectName("boxarea");
        boxarea->setGeometry(QRect(270, 310, 211, 40));
        boxarea->setMinimumSize(QSize(211, 40));
        boxarea->setMaximumSize(QSize(211, 40));
        boxarea->setCursor(QCursor(Qt::PointingHandCursor));
        boxarea->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
""));
        boxarea->setEditable(false);
        boxarea->setFrame(true);
        boxmoney = new QDoubleSpinBox(areacash);
        boxmoney->setObjectName("boxmoney");
        boxmoney->setGeometry(QRect(270, 390, 211, 40));
        boxmoney->setMinimumSize(QSize(211, 40));
        boxmoney->setMaximumSize(QSize(211, 40));
        boxmoney->setCursor(QCursor(Qt::PointingHandCursor));
        boxmoney->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        boxmoney->setDecimals(2);
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
        label_8->setGeometry(QRect(260, 190, 231, 31));
        label_8->setCursor(QCursor(Qt::ArrowCursor));
        label_8->setStyleSheet(QString::fromUtf8("font: 13pt \"Segoe UI \";\n"
"color: rgb(185, 185, 185);\n"
""));
        label_test = new QLabel(areacash);
        label_test->setObjectName("label_test");
        label_test->setGeometry(QRect(270, 570, 121, 51));
        label_9 = new QLabel(areacash);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(270, 290, 211, 21));
        label_9->setCursor(QCursor(Qt::PointingHandCursor));
        label_9->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";\n"
"color: white;"));
        label_2 = new QLabel(areacash);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 190, 41, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/area/area/count.png);\n"
"background-repeat:none;"));
        label_time = new QLabel(areacash);
        label_time->setObjectName("label_time");
        label_time->setGeometry(QRect(310, 500, 51, 31));
        label_time->setCursor(QCursor(Qt::PointingHandCursor));
        label_time->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"font: 10pt \"Segoe UI\";\n"
"color:rgb(59,81,127);\n"
""));
        label_period = new QLabel(areacash);
        label_period->setObjectName("label_period");
        label_period->setGeometry(QRect(360, 500, 31, 31));
        label_period->setCursor(QCursor(Qt::PointingHandCursor));
        label_period->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"font:  11pt \"Segoe UI\";\n"
"color: rgb(255, 212, 38);"));
        QWidget::setTabOrder(boxarea, boxmoney);
        QWidget::setTabOrder(boxmoney, pushButton_conta_2);
        QWidget::setTabOrder(pushButton_conta_2, undoView);
        QWidget::setTabOrder(undoView, calendar);
        QWidget::setTabOrder(calendar, pushButton_conta);
        QWidget::setTabOrder(pushButton_conta, pushButton);

        retranslateUi(areacash);

        pushButton_conta->setDefault(false);


        QMetaObject::connectSlotsByName(areacash);
    } // setupUi

    void retranslateUi(QDialog *areacash)
    {
        areacash->setWindowTitle(QCoreApplication::translate("areacash", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("areacash", "C", nullptr));
        label_4->setText(QCoreApplication::translate("areacash", "CASH", nullptr));
        pushButton_conta_2->setText(QCoreApplication::translate("areacash", "SUBMETER CONTA", nullptr));
        label_5->setText(QCoreApplication::translate("areacash", "HORA:", nullptr));
        pushButton->setText(QCoreApplication::translate("areacash", "  VOLTAR", nullptr));
        pushButton_conta->setText(QCoreApplication::translate("areacash", "VER CONTAS", nullptr));
        boxarea->setPlaceholderText(QString());
        boxmoney->setSuffix(QCoreApplication::translate("areacash", "           AOA", nullptr));
        label_7->setText(QCoreApplication::translate("areacash", "DIGITE QUANTIA ARRECADADA", nullptr));
        label_8->setText(QCoreApplication::translate("areacash", "PRESTAR CONTA AO CAMBA", nullptr));
        label_test->setText(QCoreApplication::translate("areacash", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("areacash", "SELECIONA \303\201REA CAMBA", nullptr));
        label_2->setText(QString());
        label_time->setText(QCoreApplication::translate("areacash", "   00:00", nullptr));
        label_period->setText(QCoreApplication::translate("areacash", "   --", nullptr));
    } // retranslateUi

};

namespace Ui {
    class areacash: public Ui_areacash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREACASH_H
