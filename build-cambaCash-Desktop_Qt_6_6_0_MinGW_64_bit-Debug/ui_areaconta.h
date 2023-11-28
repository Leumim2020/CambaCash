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
#include <QtWidgets/QLineEdit>
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
    QPushButton *pushButton_edit;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_relatory_pdf;
    QLineEdit *lineEdit_Delete;
    QDateEdit *dateEdit_Delete;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *areaconta)
    {
        if (areaconta->objectName().isEmpty())
            areaconta->setObjectName("areaconta");
        areaconta->resize(940, 760);
        areaconta->setMinimumSize(QSize(940, 760));
        areaconta->setMaximumSize(QSize(940, 760));
        areaconta->setStyleSheet(QString::fromUtf8("background-color:rgb(59, 81, 127);"));
        line = new QFrame(areaconta);
        line->setObjectName("line");
        line->setGeometry(QRect(240, 0, 10, 761));
        line->setMinimumSize(QSize(10, 0));
        line->setMaximumSize(QSize(10, 16777215));
        line->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:none;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(areaconta);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 210, 100, 30));
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
        label_4->setGeometry(QRect(100, 90, 61, 31));
        label_4->setCursor(QCursor(Qt::PointingHandCursor));
        label_4->setStyleSheet(QString::fromUtf8("font: 900 15pt \"Segoe UI\";\n"
"color: rgb(255, 212, 38);"));
        label_3 = new QLabel(areaconta);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 70, 41, 61));
        label_3->setCursor(QCursor(Qt::PointingHandCursor));
        label_3->setStyleSheet(QString::fromUtf8("font: 600 45pt \"Segoe UI Semibold\";\n"
"color: rgb(185, 185, 185);\n"
""));
        label_8 = new QLabel(areaconta);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(270, 200, 181, 31));
        label_8->setCursor(QCursor(Qt::ArrowCursor));
        label_8->setStyleSheet(QString::fromUtf8("font: 13pt \"Segoe UI \";\n"
"color: rgb(185, 185, 185);\n"
""));
        label_2 = new QLabel(areaconta);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 200, 31, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/area/area/relatorio.png);\n"
"background-repeat:none;"));
        dateEdit = new QDateEdit(areaconta);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setEnabled(true);
        dateEdit->setGeometry(QRect(680, 200, 150, 30));
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
        pushButton_2->setGeometry(QRect(830, 200, 80, 30));
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
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
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
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(270, 250, 651, 351));
        tableWidget->setMinimumSize(QSize(651, 351));
        tableWidget->setMaximumSize(QSize(651, 351));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        tableWidget->setFont(font1);
        tableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:rgb(59, 81, 127);\n"
"}"));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableWidget->setAutoScroll(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(36);
        tableWidget->horizontalHeader()->setDefaultSectionSize(106);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(36);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        pushButton_edit = new QPushButton(areaconta);
        pushButton_edit->setObjectName("pushButton_edit");
        pushButton_edit->setGeometry(QRect(380, 650, 100, 30));
        pushButton_edit->setMinimumSize(QSize(100, 30));
        pushButton_edit->setMaximumSize(QSize(100, 30));
        pushButton_edit->setFont(font);
        pushButton_edit->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_edit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid white;\n"
"	background-repeat:none;\n"
"	font: 10pt \"Segoe UI\";\n"
"	background-color:white;\n"
"	color:rgb(59,81,127);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #0090d8;\n"
"}"));
        pushButton_delete = new QPushButton(areaconta);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setGeometry(QRect(380, 720, 100, 30));
        pushButton_delete->setMinimumSize(QSize(100, 30));
        pushButton_delete->setMaximumSize(QSize(100, 30));
        pushButton_delete->setFont(font);
        pushButton_delete->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_delete->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid white;\n"
"	background-repeat:none;\n"
"	font: 10pt \"Segoe UI\";\n"
"	background-color:white;\n"
"	color:rgb(59,81,127);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #0090d8;\n"
"}"));
        pushButton_relatory_pdf = new QPushButton(areaconta);
        pushButton_relatory_pdf->setObjectName("pushButton_relatory_pdf");
        pushButton_relatory_pdf->setGeometry(QRect(820, 620, 100, 30));
        pushButton_relatory_pdf->setMinimumSize(QSize(100, 30));
        pushButton_relatory_pdf->setMaximumSize(QSize(100, 30));
        pushButton_relatory_pdf->setFont(font);
        pushButton_relatory_pdf->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_relatory_pdf->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid white;\n"
"	background-repeat:none;\n"
"	font: 10pt \"Segoe UI\";\n"
"	background-color:white;\n"
"	color:rgb(59,81,127);\n"
"}\n"
"QPushButton:hover{\n"
"	border:1px solid #0090d8;\n"
"}"));
        lineEdit_Delete = new QLineEdit(areaconta);
        lineEdit_Delete->setObjectName("lineEdit_Delete");
        lineEdit_Delete->setGeometry(QRect(270, 650, 100, 30));
        lineEdit_Delete->setMinimumSize(QSize(100, 30));
        lineEdit_Delete->setMaximumSize(QSize(100, 30));
        lineEdit_Delete->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:#fff;\n"
"	color:rgb(59,81,127);\n"
"}"));
        lineEdit_Delete->setMaxLength(10);
        dateEdit_Delete = new QDateEdit(areaconta);
        dateEdit_Delete->setObjectName("dateEdit_Delete");
        dateEdit_Delete->setEnabled(true);
        dateEdit_Delete->setGeometry(QRect(270, 720, 100, 30));
        dateEdit_Delete->setMinimumSize(QSize(100, 30));
        dateEdit_Delete->setMaximumSize(QSize(100, 30));
        dateEdit_Delete->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:white;\n"
"font: 10pt \"Segoe UI\";\n"
"\n"
""));
        dateEdit_Delete->setReadOnly(false);
        dateEdit_Delete->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        dateEdit_Delete->setProperty("showGroupSeparator", QVariant(false));
        dateEdit_Delete->setDate(QDate(2023, 11, 23));
        label_9 = new QLabel(areaconta);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(270, 690, 211, 21));
        label_9->setCursor(QCursor(Qt::ArrowCursor));
        label_9->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI \";\n"
"color: rgb(185, 185, 185);\n"
""));
        label_10 = new QLabel(areaconta);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(270, 620, 231, 21));
        label_10->setCursor(QCursor(Qt::ArrowCursor));
        label_10->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI \";\n"
"color: rgb(185, 185, 185);\n"
""));
        QWidget::setTabOrder(dateEdit, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton);

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
        ___qtablewidgetitem->setText(QCoreApplication::translate("areaconta", "Conta\302\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("areaconta", "\303\201rea", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("areaconta", "Dinheiro-IN (AOA)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("areaconta", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("areaconta", "Hora", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("areaconta", "Total (AOA)", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("areaconta", "EDITAR", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("areaconta", "DELETAR", nullptr));
        pushButton_relatory_pdf->setText(QCoreApplication::translate("areaconta", "RELAT\303\223RIO", nullptr));
        lineEdit_Delete->setPlaceholderText(QCoreApplication::translate("areaconta", "conta\302\272", nullptr));
        dateEdit_Delete->setDisplayFormat(QCoreApplication::translate("areaconta", "dd/MM/yyyy", nullptr));
        label_9->setText(QCoreApplication::translate("areaconta", "SELECIONE DATA E D/E N* CONTAS", nullptr));
        label_10->setText(QCoreApplication::translate("areaconta", "DIGITE N\302\272 DE CONTA E D/E N^1 CONTA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class areaconta: public Ui_areaconta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREACONTA_H
