/********************************************************************************
** Form generated from reading UI file 'valiadtionedit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIADTIONEDIT_H
#define UI_VALIADTIONEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_valiadtionEdit
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *valiadtionEdit)
    {
        if (valiadtionEdit->objectName().isEmpty())
            valiadtionEdit->setObjectName("valiadtionEdit");
        valiadtionEdit->resize(300, 140);
        valiadtionEdit->setMinimumSize(QSize(300, 140));
        valiadtionEdit->setMaximumSize(QSize(300, 140));
        valiadtionEdit->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color:white;\n"
"}"));
        lineEdit = new QLineEdit(valiadtionEdit);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 50, 201, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: white;\n"
"	border:1px solid rgb(59,81,127);\n"
"	color: rgb(59,81,127);\n"
"}"));
        lineEdit->setMaxLength(8);
        lineEdit->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(valiadtionEdit);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 90, 201, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(15, 171, 255);\n"
"	border:1px solid white;\n"
"	color: white;\n"
"	font: 10pt \"Segoe UI\";\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #0090d8;\n"
"}"));
        label_2 = new QLabel(valiadtionEdit);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 20, 51, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	background-color: rgb(15, 171, 255);\n"
"	border:2px solid white;\n"
"	color: white;\n"
"}\n"
""));
        label_3 = new QLabel(valiadtionEdit);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 20, 201, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	color:rgb(15, 171, 255);\n"
"}\n"
""));

        retranslateUi(valiadtionEdit);

        QMetaObject::connectSlotsByName(valiadtionEdit);
    } // setupUi

    void retranslateUi(QDialog *valiadtionEdit)
    {
        valiadtionEdit->setWindowTitle(QCoreApplication::translate("valiadtionEdit", "Dialog", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("valiadtionEdit", "**************************************", nullptr));
        pushButton->setText(QCoreApplication::translate("valiadtionEdit", "AUTORIZAR", nullptr));
        label_2->setText(QCoreApplication::translate("valiadtionEdit", " BOSS", nullptr));
        label_3->setText(QCoreApplication::translate("valiadtionEdit", "PERMISS\303\203O PARA E/D CONTA(S)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class valiadtionEdit: public Ui_valiadtionEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIADTIONEDIT_H
