#include "areaconta.h"
#include "areadegestao.h"
#include "ui_areaconta.h"
#include "QMessageBox"

areaconta::areaconta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::areaconta)
{
    ui->setupUi(this);
    db_connect = QSqlDatabase::addDatabase("QSQLITE");
    db_connect.setDatabaseName("cambadb.db");
    db_connect.open();
}

areaconta::~areaconta()
{
    delete ui;
}

void areaconta::on_pushButton_clicked()
{
    areadegestao *form2 = new areadegestao;
    form2->show();
    close();
}


void areaconta::on_pushButton_2_clicked()
{

    if(db_connect.isOpen()){

        QSqlQuery queryS;

        queryS.prepare("SELECT * FROM contas WHERE data LIKE :date");
        queryS.bindValue(":date",ui->dateEdit->date().toString());
        queryS.exec();



        if(queryS.next()){

            qDebug() << "query exec";


        }

    }
}

