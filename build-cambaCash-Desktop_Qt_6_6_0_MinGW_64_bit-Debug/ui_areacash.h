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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_areacash
{
public:
    QFrame *line;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QSpinBox *spinBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCalendarWidget *calendarWidget;

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
""));
        pushButton = new QPushButton(areacash);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 190, 170, 30));
        pushButton->setMinimumSize(QSize(170, 30));
        pushButton->setMaximumSize(QSize(0, 16777215));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"background-color:white;\n"
"color:rgb(59,81,127);"));
        label_4 = new QLabel(areacash);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 90, 61, 31));
        label_4->setCursor(QCursor(Qt::PointingHandCursor));
        label_4->setStyleSheet(QString::fromUtf8("font: 900 15pt \"Segoe UI\";\n"
"color: rgb(255, 212, 38);"));
        pushButton_2 = new QPushButton(areacash);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(700, 430, 171, 31));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("border:1px solid white;\n"
"background-color:white;\n"
"color:rgb(59,81,127);"));
        gridLayoutWidget = new QWidget(areacash);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(260, 220, 201, 181));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(170, 40));
        comboBox->setMaximumSize(QSize(170, 40));
        comboBox->setCursor(QCursor(Qt::IBeamCursor));
        comboBox->setStyleSheet(QString::fromUtf8("background-color:white;"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimumSize(QSize(170, 40));
        spinBox->setMaximumSize(QSize(170, 40));
        spinBox->setCursor(QCursor(Qt::IBeamCursor));
        spinBox->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));

        gridLayout->addWidget(spinBox, 1, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(areacash);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(470, 220, 401, 201));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        calendarWidget = new QCalendarWidget(horizontalLayoutWidget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(calendarWidget);


        retranslateUi(areacash);

        QMetaObject::connectSlotsByName(areacash);
    } // setupUi

    void retranslateUi(QDialog *areacash)
    {
        areacash->setWindowTitle(QCoreApplication::translate("areacash", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("areacash", "C", nullptr));
        pushButton->setText(QCoreApplication::translate("areacash", "VOLTAR", nullptr));
        label_4->setText(QCoreApplication::translate("areacash", "CASH", nullptr));
        pushButton_2->setText(QCoreApplication::translate("areacash", "SUBMETER PAGAMENTO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class areacash: public Ui_areacash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREACASH_H
