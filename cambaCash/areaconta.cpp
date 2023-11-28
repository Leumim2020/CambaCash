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

        QSqlQuery queryS,queryRowCount;
        int rownumber{0},totalrow{1};

        queryS.prepare("SELECT * FROM contas WHERE data LIKE :date");
        queryS.bindValue(":date",ui->dateEdit->date().toString());
        queryS.exec();

        queryRowCount.prepare("SELECT area FROM contas WHERE data LIKE :date");
        queryRowCount.bindValue(":date",ui->dateEdit->date().toString());
        queryRowCount.exec();

        if(queryRowCount.next()){

            while(queryRowCount.next()){
                qDebug() << totalrow;
                totalrow++;
            }

            ui->tableWidget->setRowCount(totalrow);

            while(queryS.next()){

                ui->tableWidget->setItem(rownumber,0,new QTableWidgetItem(queryS.value("id").toString()));
                ui->tableWidget->setItem(rownumber,1,new QTableWidgetItem(queryS.value("area").toString()));
                ui->tableWidget->setItem(rownumber,2,new QTableWidgetItem(queryS.value("dinheiro").toString()));
                ui->tableWidget->setItem(rownumber,3,new QTableWidgetItem(queryS.value("data").toString()));
                ui->tableWidget->setItem(rownumber,4,new QTableWidgetItem(queryS.value("time").toString()));
                ui->tableWidget->setItem(rownumber,5,new QTableWidgetItem(queryS.value("total").toString()));
                rownumber++;
            }

        }else{

            QMessageBox::information(this,"Informação","Não foi encontrado conta(s) relacionada a data'"+ui->dateEdit->date().toString()+"'");

        }

    }
}


void areaconta::on_pushButton_delete_clicked()
{
    if(db_connect.isOpen()){

        QSqlQuery queryD;
        queryD.prepare("DELETE * FROM contas WHERE data LIKE :date");
        queryD.bindValue(":date",ui->dateEdit_Delete->date().toString());

        QMessageBox::StandardButton answer = QMessageBox::question(this,"Informação","Tem certeza que deseja apagar esta(s) conta(s) permanente mente",QMessageBox::Yes|QMessageBox::No);

        if(QMessageBox::Yes == answer){
            queryD.exec();
        }
    }
}

