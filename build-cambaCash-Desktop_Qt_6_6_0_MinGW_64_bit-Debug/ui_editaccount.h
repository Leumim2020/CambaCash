/********************************************************************************
** Form generated from reading UI file 'editaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITACCOUNT_H
#define UI_EDITACCOUNT_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editaccount
{
public:
    QDateEdit *dateEdit;
    QDoubleSpinBox *boxmoney;
    QLabel *label_12;
    QLabel *label_ID;
    QLineEdit *linetotal;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_14;
    QPushButton *pushButton;
    QLineEdit *linearea;
    QLineEdit *linehour;
    QLabel *labelperiodo;

    void setupUi(QDialog *editaccount)
    {
        if (editaccount->objectName().isEmpty())
            editaccount->setObjectName("editaccount");
        editaccount->resize(400, 300);
        editaccount->setMinimumSize(QSize(400, 300));
        editaccount->setMaximumSize(QSize(400, 300));
        editaccount->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color:white;\n"
"}"));
        dateEdit = new QDateEdit(editaccount);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setEnabled(true);
        dateEdit->setGeometry(QRect(170, 170, 211, 30));
        dateEdit->setMinimumSize(QSize(211, 30));
        dateEdit->setMaximumSize(QSize(150, 30));
        dateEdit->setCursor(QCursor(Qt::PointingHandCursor));
        dateEdit->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"	background-color: white;\n"
"	border:1px solid rgb(59,81,127);\n"
"	color: rgb(59,81,127);\n"
"}"));
        dateEdit->setLocale(QLocale(QLocale::Portuguese, QLocale::Portugal));
        dateEdit->setReadOnly(false);
        dateEdit->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        dateEdit->setProperty("showGroupSeparator", QVariant(false));
        dateEdit->setCalendarPopup(true);
        dateEdit->setTimeSpec(Qt::UTC);
        dateEdit->setDate(QDate(2023, 11, 23));
        boxmoney = new QDoubleSpinBox(editaccount);
        boxmoney->setObjectName("boxmoney");
        boxmoney->setGeometry(QRect(170, 90, 211, 30));
        boxmoney->setMinimumSize(QSize(211, 30));
        boxmoney->setMaximumSize(QSize(211, 30));
        boxmoney->setCursor(QCursor(Qt::PointingHandCursor));
        boxmoney->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{\n"
"	background-color: white;\n"
"	border:1px solid rgb(59,81,127);\n"
"	color: rgb(59,81,127);\n"
"}"));
        boxmoney->setDecimals(2);
        boxmoney->setMaximum(100000000.000000000000000);
        boxmoney->setStepType(QAbstractSpinBox::DefaultStepType);
        label_12 = new QLabel(editaccount);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(170, 20, 51, 21));
        label_12->setCursor(QCursor(Qt::ArrowCursor));
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 9pt \"Segoe UI \";\n"
"	background-color:rgb(59,81,127);\n"
"	color: white;\n"
"}\n"
""));
        label_ID = new QLabel(editaccount);
        label_ID->setObjectName("label_ID");
        label_ID->setGeometry(QRect(230, 20, 151, 21));
        label_ID->setCursor(QCursor(Qt::ArrowCursor));
        label_ID->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 9pt \"Segoe UI \";\n"
"	background-color:rgb(59,81,127);\n"
"	color: white;\n"
"}\n"
""));
        linetotal = new QLineEdit(editaccount);
        linetotal->setObjectName("linetotal");
        linetotal->setGeometry(QRect(170, 210, 211, 30));
        linetotal->setMinimumSize(QSize(211, 30));
        linetotal->setMaximumSize(QSize(211, 30));
        linetotal->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"	border:1px solid rgb(59,81,127);\n"
"	color: rgb(59,81,127);\n"
"}"));
        linetotal->setMaxLength(3);
        label_8 = new QLabel(editaccount);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 50, 131, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        label_8->setFont(font);
        label_8->setCursor(QCursor(Qt::ArrowCursor));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 700 9pt \"Segoe UI\";\n"
"	color: rgb(59,81,127);\n"
"}\n"
""));
        label_9 = new QLabel(editaccount);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 90, 141, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI ")});
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(false);
        label_9->setFont(font1);
        label_9->setCursor(QCursor(Qt::ArrowCursor));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 700 9pt \"Segoe UI \";\n"
"	color: rgb(59,81,127);\n"
"}\n"
""));
        label_10 = new QLabel(editaccount);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 170, 131, 31));
        label_10->setFont(font1);
        label_10->setCursor(QCursor(Qt::ArrowCursor));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 700 9pt \"Segoe UI \";\n"
"	color: rgb(59,81,127);\n"
"}\n"
""));
        label_11 = new QLabel(editaccount);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 210, 131, 31));
        label_11->setFont(font1);
        label_11->setCursor(QCursor(Qt::ArrowCursor));
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 700 9pt \"Segoe UI \";\n"
"	color: rgb(59,81,127);\n"
"}\n"
""));
        label_14 = new QLabel(editaccount);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 130, 41, 31));
        label_14->setFont(font1);
        label_14->setCursor(QCursor(Qt::ArrowCursor));
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 700 9pt \"Segoe UI \";\n"
"	color: rgb(59,81,127);\n"
"}\n"
""));
        pushButton = new QPushButton(editaccount);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 250, 211, 30));
        pushButton->setMinimumSize(QSize(211, 30));
        pushButton->setMaximumSize(QSize(211, 30));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/area/area/edit.png);\n"
"	background-color: rgb(72, 145, 217);\n"
"	border:1px solid white;\n"
"	background-repeat:none;\n"
"	font: 10pt \"Segoe UI\";\n"
"	color:white;\n"
"}\n"
"QPushButton:hover{\n"
"	border:2px solid #0090d8;\n"
"}"));
        linearea = new QLineEdit(editaccount);
        linearea->setObjectName("linearea");
        linearea->setEnabled(false);
        linearea->setGeometry(QRect(170, 50, 211, 30));
        linearea->setMinimumSize(QSize(211, 30));
        linearea->setMaximumSize(QSize(211, 30));
        linearea->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"	border:1px solid rgb(59,81,127);\n"
"	color: rgb(59,81,127);\n"
"}"));
        linearea->setMaxLength(9);
        linehour = new QLineEdit(editaccount);
        linehour->setObjectName("linehour");
        linehour->setEnabled(true);
        linehour->setGeometry(QRect(170, 130, 160, 30));
        linehour->setMinimumSize(QSize(160, 30));
        linehour->setMaximumSize(QSize(160, 30));
        linehour->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"	border:1px solid rgb(59,81,127);\n"
"	color: rgb(59,81,127);\n"
"}"));
        linehour->setMaxLength(5);
        labelperiodo = new QLabel(editaccount);
        labelperiodo->setObjectName("labelperiodo");
        labelperiodo->setGeometry(QRect(340, 130, 41, 30));
        labelperiodo->setMaximumSize(QSize(61, 30));
        labelperiodo->setSizeIncrement(QSize(61, 30));
        labelperiodo->setCursor(QCursor(Qt::ArrowCursor));
        labelperiodo->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color:rgb(59,81,127);\n"
"	font:  11pt \"Segoe UI\";\n"
"	color: rgb(255, 212, 38);\n"
"}\n"
""));

        retranslateUi(editaccount);

        QMetaObject::connectSlotsByName(editaccount);
    } // setupUi

    void retranslateUi(QDialog *editaccount)
    {
        editaccount->setWindowTitle(QCoreApplication::translate("editaccount", "Dialog", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("editaccount", "dd/MM/yyyy", nullptr));
        boxmoney->setSuffix(QCoreApplication::translate("editaccount", "           AOA", nullptr));
        label_12->setText(QCoreApplication::translate("editaccount", "CONTA-", nullptr));
        label_ID->setText(QCoreApplication::translate("editaccount", "N", nullptr));
        linetotal->setInputMask(QCoreApplication::translate("editaccount", "00.", nullptr));
        linetotal->setPlaceholderText(QCoreApplication::translate("editaccount", "                                                          AOA", nullptr));
        label_8->setText(QCoreApplication::translate("editaccount", "\303\201REA", nullptr));
        label_9->setText(QCoreApplication::translate("editaccount", "QUANTIA  ARRECADADA", nullptr));
        label_10->setText(QCoreApplication::translate("editaccount", "DATA(DD/MM/YYYY)", nullptr));
        label_11->setText(QCoreApplication::translate("editaccount", "TOTAL(AOA):", nullptr));
        label_14->setText(QCoreApplication::translate("editaccount", "HORA", nullptr));
        pushButton->setText(QCoreApplication::translate("editaccount", "EDITAR", nullptr));
        linearea->setPlaceholderText(QString());
        linehour->setInputMask(QCoreApplication::translate("editaccount", "00:00", nullptr));
        linehour->setPlaceholderText(QString());
        labelperiodo->setText(QCoreApplication::translate("editaccount", "   --", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editaccount: public Ui_editaccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITACCOUNT_H
