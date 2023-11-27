/********************************************************************************
** Form generated from reading UI file 'areaconta.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREACONTA_H
#define UI_AREACONTA_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_areaconta
{
public:
    QFrame *line;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;
    QLabel *label_date;

    void setupUi(QDialog *areaconta)
    {
        if (areaconta->objectName().isEmpty())
            areaconta->setObjectName("areaconta");
        areaconta->resize(950, 640);
        areaconta->setMinimumSize(QSize(950, 640));
        areaconta->setMaximumSize(QSize(950, 640));
        areaconta->setStyleSheet(QString::fromUtf8("background-color:rgb(59, 81, 127);"));
        line = new QFrame(areaconta);
        line->setObjectName("line");
        line->setGeometry(QRect(240, 0, 10, 639));
        line->setMinimumSize(QSize(10, 0));
        line->setMaximumSize(QSize(10, 16777215));
        line->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:none;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(areaconta);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 220, 100, 30));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        pushButton->setFont(font);
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
        label_4 = new QLabel(areaconta);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 110, 61, 31));
        label_4->setCursor(QCursor(Qt::PointingHandCursor));
        label_4->setStyleSheet(QString::fromUtf8("font: 900 15pt \"Segoe UI\";\n"
"color: rgb(255, 212, 38);"));
        label_3 = new QLabel(areaconta);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 90, 41, 61));
        label_3->setCursor(QCursor(Qt::PointingHandCursor));
        label_3->setStyleSheet(QString::fromUtf8("font: 600 45pt \"Segoe UI Semibold\";\n"
"color: rgb(185, 185, 185);\n"
""));
        label_8 = new QLabel(areaconta);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(280, 220, 181, 31));
        label_8->setCursor(QCursor(Qt::ArrowCursor));
        label_8->setStyleSheet(QString::fromUtf8("font: 13pt \"Segoe UI \";\n"
"color: rgb(185, 185, 185);\n"
""));
        label_2 = new QLabel(areaconta);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 220, 31, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/area/area/relatorio.png);\n"
"background-repeat:none;"));
        dateEdit = new QDateEdit(areaconta);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setEnabled(true);
        dateEdit->setGeometry(QRect(700, 180, 150, 30));
        dateEdit->setMinimumSize(QSize(150, 30));
        dateEdit->setMaximumSize(QSize(150, 30));
        dateEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:white;\n"
"font: 10pt \"Segoe UI\";\n"
"\n"
""));
        dateEdit->setReadOnly(false);
        dateEdit->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        dateEdit->setProperty("showGroupSeparator", QVariant(false));
        dateEdit->setDate(QDate(2023, 11, 23));
        pushButton_2 = new QPushButton(areaconta);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(850, 180, 80, 30));
        pushButton_2->setMinimumSize(QSize(80, 30));
        pushButton_2->setMaximumSize(QSize(80, 30));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	image: url(:/area/area/cash.png);\n"
"	background-repeat:none;\n"
"	background-color:white;\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #0090d8;\n"
"}"));
        tableWidget = new QTableWidget(areaconta);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(270, 250, 631, 321));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(7, 7, 7);"));
        label_date = new QLabel(areaconta);
        label_date->setObjectName("label_date");
        label_date->setGeometry(QRect(280, 600, 251, 21));
        QWidget::setTabOrder(dateEdit, pushButton_2);
        QWidget::setTabOrder(pushButton_2, tableWidget);
        QWidget::setTabOrder(tableWidget, pushButton);

        retranslateUi(areaconta);

        QMetaObject::connectSlotsByName(areaconta);
    } // setupUi

    void retranslateUi(QDialog *areaconta)
    {
        areaconta->setWindowTitle(QCoreApplication::translate("areaconta", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("areaconta", "VOLTAR", nullptr));
        label_4->setText(QCoreApplication::translate("areaconta", "CASH", nullptr));
        label_3->setText(QCoreApplication::translate("areaconta", "C", nullptr));
        label_8->setText(QCoreApplication::translate("areaconta", "VER CONTA(S) CAMBA", nullptr));
        label_2->setText(QString());
        dateEdit->setDisplayFormat(QCoreApplication::translate("areaconta", "dd/MM/yyyy", nullptr));
        pushButton_2->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("areaconta", "area", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("areaconta", "dinheiro", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("areaconta", "data", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("areaconta", "time", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("areaconta", "total", nullptr));
        label_date->setText(QCoreApplication::translate("areaconta", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class areaconta: public Ui_areaconta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREACONTA_H
