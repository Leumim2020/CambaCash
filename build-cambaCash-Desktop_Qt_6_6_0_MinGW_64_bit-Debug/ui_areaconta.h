/********************************************************************************
** Form generated from reading UI file 'areaconta.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREACONTA_H
#define UI_AREACONTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_areaconta
{
public:
    QFrame *line;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_3;

    void setupUi(QDialog *areaconta)
    {
        if (areaconta->objectName().isEmpty())
            areaconta->setObjectName("areaconta");
        areaconta->resize(880, 640);
        areaconta->setMinimumSize(QSize(880, 640));
        areaconta->setMaximumSize(QSize(880, 640));
        areaconta->setStyleSheet(QString::fromUtf8("background-color:rgb(59, 81, 127);"));
        line = new QFrame(areaconta);
        line->setObjectName("line");
        line->setGeometry(QRect(250, 0, 10, 639));
        line->setMinimumSize(QSize(10, 0));
        line->setMaximumSize(QSize(10, 16777215));
        line->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:none;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(areaconta);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 240, 100, 30));
        pushButton->setMinimumSize(QSize(100, 30));
        pushButton->setMaximumSize(QSize(100, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"font: 10pt \"Segoe UI\";\n"
"background-color:white;\n"
"color:rgb(59,81,127);"));
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

        retranslateUi(areaconta);

        QMetaObject::connectSlotsByName(areaconta);
    } // setupUi

    void retranslateUi(QDialog *areaconta)
    {
        areaconta->setWindowTitle(QCoreApplication::translate("areaconta", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("areaconta", "VOLTAR", nullptr));
        label_4->setText(QCoreApplication::translate("areaconta", "CASH", nullptr));
        label_3->setText(QCoreApplication::translate("areaconta", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class areaconta: public Ui_areaconta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREACONTA_H
