/********************************************************************************
** Form generated from reading UI file 'areadegestao.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREADEGESTAO_H
#define UI_AREADEGESTAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_areadegestao
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *areadegestao)
    {
        if (areadegestao->objectName().isEmpty())
            areadegestao->setObjectName("areadegestao");
        areadegestao->resize(880, 640);
        areadegestao->setMinimumSize(QSize(880, 640));
        areadegestao->setMaximumSize(QSize(880, 640));
        areadegestao->setStyleSheet(QString::fromUtf8("background-color:rgb(59, 81, 127);"));
        verticalLayoutWidget = new QWidget(areadegestao);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(250, 0, 16, 641));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(verticalLayoutWidget);
        line->setObjectName("line");
        line->setMinimumSize(QSize(10, 0));
        line->setMaximumSize(QSize(10, 16777215));
        line->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:none;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_4 = new QLabel(areadegestao);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 110, 61, 31));
        label_4->setCursor(QCursor(Qt::PointingHandCursor));
        label_4->setStyleSheet(QString::fromUtf8("font: 900 15pt \"Segoe UI\";\n"
"color: rgb(255, 212, 38);"));
        label_3 = new QLabel(areadegestao);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 90, 41, 61));
        label_3->setCursor(QCursor(Qt::PointingHandCursor));
        label_3->setStyleSheet(QString::fromUtf8("font: 600 45pt \"Segoe UI Semibold\";\n"
""));
        label_5 = new QLabel(areadegestao);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(430, 300, 291, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        label_5->setFont(font);
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 212, 38);"));
        pushButton_4 = new QPushButton(areadegestao);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(80, 400, 100, 30));
        pushButton_4->setMinimumSize(QSize(100, 30));
        pushButton_4->setMaximumSize(QSize(100, 30));
        QFont font1;
        font1.setBold(true);
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"background-color:white;\n"
"color:rgb(59,81,127);"));
        pushButton_3 = new QPushButton(areadegestao);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(40, 346, 170, 30));
        pushButton_3->setMinimumSize(QSize(170, 30));
        pushButton_3->setMaximumSize(QSize(0, 16777215));
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"background-color:white;\n"
"color:rgb(59,81,127);"));
        pushButton = new QPushButton(areadegestao);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 214, 170, 30));
        pushButton->setMinimumSize(QSize(170, 30));
        pushButton->setMaximumSize(QSize(0, 16777215));
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"background-color:white;\n"
"color:rgb(59,81,127);"));
        pushButton_2 = new QPushButton(areadegestao);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 280, 170, 30));
        pushButton_2->setMinimumSize(QSize(170, 30));
        pushButton_2->setMaximumSize(QSize(0, 16777215));
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"background-color:white;\n"
"color:rgb(59,81,127);"));

        retranslateUi(areadegestao);

        QMetaObject::connectSlotsByName(areadegestao);
    } // setupUi

    void retranslateUi(QDialog *areadegestao)
    {
        areadegestao->setWindowTitle(QCoreApplication::translate("areadegestao", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("areadegestao", "CASH", nullptr));
        label_3->setText(QCoreApplication::translate("areadegestao", "C", nullptr));
        label_5->setText(QCoreApplication::translate("areadegestao", "BENVINDO AO CAMBA", nullptr));
        pushButton_4->setText(QCoreApplication::translate("areadegestao", "BAZAR", nullptr));
        pushButton_3->setText(QCoreApplication::translate("areadegestao", "RELAT\303\223RIO", nullptr));
        pushButton->setText(QCoreApplication::translate("areadegestao", "CASH", nullptr));
        pushButton_2->setText(QCoreApplication::translate("areadegestao", "VIEW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class areadegestao: public Ui_areadegestao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREADEGESTAO_H
