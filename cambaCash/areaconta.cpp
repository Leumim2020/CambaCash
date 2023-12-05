#include "areaconta.h"
#include "areadegestao.h"
#include "ui_areaconta.h"
#include "QMessageBox"
#include "editaccount.h"


areaconta::areaconta(QWidget *parent,QString areaX) :
    QDialog(parent),
    ui(new Ui::areaconta)
{
    ui->setupUi(this);
    db_connect = QSqlDatabase::addDatabase("QSQLITE");
    db_connect.setDatabaseName("cambadb.db");
    db_connect.open();

    if(areaX == "areaconta"){
        QMessageBox::information(this,"Informação","Camba apenas poderá visualizar contas e não poderá Editar/Deletar para isso precisará da permissão do Boss pela área home");
        ui->lineEdit_Delete->setEnabled(false);
        ui->dateEdit_Delete->setEnabled(false);
        ui->pushButton_edit->setEnabled(false);
        ui->pushButton_delete->setEnabled(false);
    }

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
//------------------------------------------------------------------------------------------------------- searching date with date(dd/mm/yyyy)
        if(ui->comboBox_month->currentText().isEmpty()){

            QSqlQuery queryS,queryRowCount;
            unsigned int rownumber{0},totalrow{0};

            queryS.prepare("SELECT * FROM contas WHERE data LIKE :date");
            queryS.bindValue(":date",ui->dateEdit->date().toString());

            queryRowCount.prepare("SELECT area FROM contas WHERE data LIKE :date");
            queryRowCount.bindValue(":date",ui->dateEdit->date().toString());
            queryRowCount.exec();

            if(queryS.exec()){

                while(queryRowCount.next()){
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
                    ++rownumber;
                }
            }else{

                QMessageBox::information(this,"Informação","Não foi encontrado conta(s) relacionada a data'"+ui->dateEdit->date().toString()+"'");
            }
        }
//-------------------------------------------------------------------------------------------------------end searching date with date(dd/mm/yyyy)
//------------------------------------------------------------------------------------------------------- searching date with month
        if(!ui->comboBox_month->currentText().isEmpty()){

            QSqlQuery queryS,queryRowCount;
            unsigned int rownumber{0},totalrow{0};

            QString month = ui->comboBox_month->currentText();
            convert_month->cambaconvertmonth(month);

            queryS.prepare("SELECT * FROM contas WHERE data LIKE '%"+month+"%'");

            queryRowCount.prepare("SELECT area FROM contas WHERE data LIKE '%"+month+"%'");
            queryRowCount.exec();

            ui->tableWidget->setRowCount(0);

            if(queryS.exec()){

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
                    ++rownumber;
                }

            }else{
                QMessageBox::information(this,"Informação","Não foi encontrado conta(s) relacionada a data'"+ui->comboBox_month->currentText()+"'");
            }

        }
//-------------------------------------------------------------------------------------------------------end searching date with month
    }
}

void areaconta::on_pushButton_delete_clicked()
{

    if(db_connect.isOpen()){

        QMessageBox::StandardButton answer = QMessageBox::question(this,"Informação","Camba selecionou linha ou data da conta?",QMessageBox::Yes|QMessageBox::No);

        if(QMessageBox::Yes == answer){

//------------------------------------------------------------------------------------------------------- verify if user selected two camps for they will be delected
            if(ui->dateEdit_Delete->date().toString() != _dateOLD && ui->tableWidget->currentRow() >= 0){

                QMessageBox::warning(this,"Aviso","Camba não pode selecionar linha e data para E/D");
                ui->dateEdit_Delete->setDate(QDate(2023,11,23));

            }else{
//------------------------------------------------------------------------------------------------------- deleting account with id only a row
                if(ui->dateEdit_Delete->date().toString() == _dateOLD && ui->tableWidget->currentRow() >= 0){

                    QSqlQuery queryS,queryD;
                    queryS.prepare("SELECT * FROM contas WHERE data LIKE :date");
                    queryS.bindValue(":date",ui->dateEdit_Delete->date().toString());
                    queryS.exec();
                    queryD.prepare("DELETE FROM contas WHERE id =:ID");
                    queryD.bindValue(":ID",ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt());

                    QMessageBox::StandardButton answer = QMessageBox::question(this,"Informação","Camba tem certeza que deseja deletar contaº '"+ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text()+"' permanentemente? Não poderá recuperar conta deletada",QMessageBox::Yes|QMessageBox::No);

                    if(QMessageBox::Yes == answer){

                        QMessageBox::StandardButton answer = QMessageBox::question(this,"Informação","Confirmar deleção de conta '"+ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text()+"'",QMessageBox::Yes|QMessageBox::No);

                        if(QMessageBox::Yes == answer){

                            if(queryD.exec()){
                                ui->tableWidget->removeRow(ui->tableWidget->currentRow());
                            }else{
                                QMessageBox::warning(this,"Erro","Não foi possível deletar linha 'QUERY not was executed'");
                            }
                        }
                    }
                }
//------------------------------------------------------------------------------------------------------- end deleting account with id only a row
//------------------------------------------------------------------------------------------------------- deleting acount like date*
                if(ui->dateEdit_Delete->date().toString() != _dateOLD && ui->tableWidget->currentRow() == -1){

                    unsigned int totalrow{0};
                    QSqlQuery queryS,queryD;
                    queryS.prepare("SELECT * FROM contas WHERE data LIKE :date");
                    queryS.bindValue(":date",ui->dateEdit_Delete->date().toString());
                    queryS.exec();
                    queryD.prepare("DELETE FROM contas WHERE data LIKE :date");
                    queryD.bindValue(":date",ui->dateEdit_Delete->date().toString());

                    while(queryS.next()){
                        totalrow++;
                    }

                    QMessageBox::StandardButton answer = QMessageBox::question(this,"Informação","Camba tem certeza que deseja deletar Contas* '"+ui->dateEdit_Delete->date().toString()+"' data permanente mente",QMessageBox::Yes|QMessageBox::No);
                    if(QMessageBox::Yes == answer){

                        QMessageBox::StandardButton answer = QMessageBox::question(this,"Informação","Confirmar deleção de Conta* '"+ui->dateEdit_Delete->date().toString()+"'",QMessageBox::Yes|QMessageBox::No);
                        if(QMessageBox::Yes == answer){
                            if(queryD.exec()){

                                if(!totalrow)
                                    QMessageBox::warning(this,"Erro","Não existe(m) conta relacionada '"+ui->dateEdit_Delete->date().toString()+"'");

                            }else{
                                QMessageBox::warning(this,"Erro","Não foi possível deletar linha 'QUERY not was executed'");
                            }
                        }
                    }
                }
            }
//------------------------------------------------------------------------------------------------------- end deleting account like date*
        }else{
            QMessageBox::warning(this,"Informação","Selecione!");
        }
    }
    return;
}


void areaconta::on_pushButton_edit_clicked()
{
    if(db_connect.isOpen()){

        if(ui->tableWidget->currentRow() >= 0){
           editaccount formedit(this,ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt());
           formedit.exec();

        }else{
            return;
        }

    }else{
        QMessageBox::warning(this,"Aviso","DB not was open");
    }
}

