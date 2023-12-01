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
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *valiadtionEdit)
    {
        if (valiadtionEdit->objectName().isEmpty())
            valiadtionEdit->setObjectName("valiadtionEdit");
        valiadtionEdit->resize(290, 150);
        valiadtionEdit->setMinimumSize(QSize(290, 150));
        valiadtionEdit->setMaximumSize(QSize(290, 150));
        valiadtionEdit->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color:rgb(59, 81, 127);\n"
"}"));
        label = new QLabel(valiadtionEdit);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 60, 41, 51));
        label->setPixmap(QPixmap(QString::fromUtf8(":/area/area/garoto.png")));
        label->setScaledContents(true);
        lineEdit = new QLineEdit(valiadtionEdit);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 60, 201, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        lineEdit->setMaxLength(8);
        lineEdit->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(valiadtionEdit);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 100, 201, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid white;\n"
"	background-repeat:none;\n"
"	font: 10pt \"Segoe UI\";\n"
"	background-color:white;\n"
"	color:rgb(59,81,127);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #0090d8;\n"
"}"));
        label_2 = new QLabel(valiadtionEdit);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 110, 41, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	background-color: white;\n"
"	color:rgb(59,81,127);\n"
"}\n"
""));
        label_3 = new QLabel(valiadtionEdit);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 20, 201, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 900 9pt \"Segoe UI\";\n"
"	background-color: white;\n"
"	color:rgb(59,81,127);\n"
"}\n"
""));

        retranslateUi(valiadtionEdit);

        QMetaObject::connectSlotsByName(valiadtionEdit);
    } // setupUi

    void retranslateUi(QDialog *valiadtionEdit)
    {
        valiadtionEdit->setWindowTitle(QCoreApplication::translate("valiadtionEdit", "Dialog", nullptr));
        label->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("valiadtionEdit", "**************************************", nullptr));
        pushButton->setText(QCoreApplication::translate("valiadtionEdit", "AUTORIZAR", nullptr));
        label_2->setText(QCoreApplication::translate("valiadtionEdit", "  BOSS", nullptr));
        label_3->setText(QCoreApplication::translate("valiadtionEdit", "PERMISS\303\203O PARA E/D CONTA(S)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class valiadtionEdit: public Ui_valiadtionEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIADTIONEDIT_H
