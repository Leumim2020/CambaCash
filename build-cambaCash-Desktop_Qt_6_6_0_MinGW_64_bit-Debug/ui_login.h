/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QPushButton *btnentrar;
    QLabel *label_3;
    QLineEdit *line_user;
    QLineEdit *line_pass;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(290, 360);
        login->setMinimumSize(QSize(290, 360));
        login->setMaximumSize(QSize(290, 360));
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 81, 127);"));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        btnentrar = new QPushButton(centralwidget);
        btnentrar->setObjectName("btnentrar");
        btnentrar->setGeometry(QRect(90, 240, 101, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        btnentrar->setFont(font);
        btnentrar->setCursor(QCursor(Qt::PointingHandCursor));
        btnentrar->setMouseTracking(false);
        btnentrar->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"font: 10pt \"Segoe UI\";\n"
"border: 1px solid white;\n"
"color:rgb(59,81,127);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 40, 41, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 600 45pt \"Segoe UI Semibold\";\n"
"color: rgb(208, 208, 208);"));
        line_user = new QLineEdit(centralwidget);
        line_user->setObjectName("line_user");
        line_user->setGeometry(QRect(50, 130, 181, 31));
        line_user->setMinimumSize(QSize(0, 0));
        line_user->setCursor(QCursor(Qt::IBeamCursor));
        line_user->setMouseTracking(false);
        line_user->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line_user->setMaxLength(14);
        line_pass = new QLineEdit(centralwidget);
        line_pass->setObjectName("line_pass");
        line_pass->setGeometry(QRect(50, 190, 181, 31));
        line_pass->setMinimumSize(QSize(0, 0));
        line_pass->setCursor(QCursor(Qt::IBeamCursor));
        line_pass->setMouseTracking(false);
        line_pass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        line_pass->setMaxLength(12);
        line_pass->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 60, 61, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 900 15pt \"Segoe UI\";\n"
"color: rgb(255, 212, 38);"));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 290, 21));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName("statusbar");
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        btnentrar->setText(QCoreApplication::translate("login", "MBORA", nullptr));
        label_3->setText(QCoreApplication::translate("login", "C", nullptr));
        line_user->setPlaceholderText(QCoreApplication::translate("login", "Nome do usu\303\241rio", nullptr));
        line_pass->setPlaceholderText(QCoreApplication::translate("login", "Senha do usu\303\241rio", nullptr));
        label_4->setText(QCoreApplication::translate("login", "CASH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
