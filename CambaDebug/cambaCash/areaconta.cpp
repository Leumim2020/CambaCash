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
        if(ui->dateEdit->date().toString() != _dateOLD && ui->comboBox_month->currentText().isEmpty()){

            QSqlQuery queryS,queryRowCount;
            unsigned int rownumber{0},totalrow{0};

            queryS.prepare("SELECT * FROM contas WHERE data LIKE :date");
            queryS.bindValue(":date",locale.toString(ui->dateEdit->date()));

            queryRowCount.prepare("SELECT area FROM contas WHERE data LIKE :date");
            queryRowCount.bindValue(":date",locale.toString(ui->dateEdit->date()));
            queryRowCount.exec();

            if(queryS.exec()){

                while(queryRowCount.next()){
                    totalrow++;
                }

                if(totalrow){

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
                    QMessageBox::warning(this,"Erro","Não existe(m) conta relacionada '"+locale.toString(ui->dateEdit->date())+"'");
                }

            }else{

                QMessageBox::information(this,"Informação","Não foi encontrado conta(s) relacionada a data'"+locale.toString(ui->dateEdit->date())+"'");
            }
        }
//-------------------------------------------------------------------------------------------------------end searching date with date(dd/mm/yyyy)
//------------------------------------------------------------------------------------------------------- searching date with month
        if(ui->dateEdit->date().toString() == _dateOLD && !ui->comboBox_month->currentText().isEmpty()){

            QSqlQuery queryS,queryRowCount;
            unsigned int rownumber{0},totalrow{0};

            queryS.prepare("SELECT * FROM contas WHERE data LIKE '%"+ui->comboBox_month->currentText()+"%'");

            queryRowCount.prepare("SELECT area FROM contas WHERE data LIKE '%"+ui->comboBox_month->currentText()+"%'");
            queryRowCount.exec();

            ui->tableWidget->setRowCount(0);

            if(queryS.exec()){

                while(queryRowCount.next()){
                    totalrow++;
                }

                if(totalrow){

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
                    QMessageBox::warning(this,"Erro","Não foi encontrado conta(s) relacionada a '"+ui->comboBox_month->currentText()+"'");
                }

            }else{
                QMessageBox::information(this,"Informação","Não foi encontrado conta(s) relacionada a data'"+ui->comboBox_month->currentText()+"'");
            }

        }
//-------------------------------------------------------------------------------------------------------end searching date with month
//-------------------------------------------------------------------------------------------------------verify if camba not selected two camps
        if(ui->dateEdit->date().toString() != _dateOLD && !ui->comboBox_month->currentText().isEmpty()){
            QMessageBox::warning(this,"Aviso","Camba não pode selecionar dois campos para busca data(dd/mm/yyyy) e mês para que busca seja feita campo data será resetado a data padrão '23/11/2023'");
            ui->dateEdit->setDate(QDate(2023,11,23));
        }
//-------------------------------------------------------------------------------------------------------verify if camba not selected two camps
    }
}

void areaconta::on_pushButton_delete_clicked()
{

    if(db_connect.isOpen()){

//------------------------------------------------------------------------------------------------------- deleting account with id only a row
                if(ui->dateEdit_Delete->date().toString() == _dateOLD && ui->tableWidget->currentRow() >= 0){

                        QSqlQuery queryD;
                        queryD.prepare("DELETE FROM contas WHERE id =:ID");
                        queryD.bindValue(":ID",ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt());

                        QMessageBox::StandardButton answer = QMessageBox::question(this,"Informação","Confirmar deleção de conta '"+ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text()+"'",QMessageBox::Yes|QMessageBox::No);

                        if(QMessageBox::Yes == answer){

                            if(queryD.exec()){
                                ui->tableWidget->removeRow(ui->tableWidget->currentRow());
                            }else{
                                QMessageBox::warning(this,"Erro","Não foi possível deletar linha 'QUERY not was executed'");
                            }
                    }
                }
//------------------------------------------------------------------------------------------------------- end deleting account with id only a row
//------------------------------------------------------------------------------------------------------- deleting acount like date*
                if((ui->dateEdit_Delete->date().toString() != _dateOLD && ui->tableWidget->currentRow() == -1) || (ui->dateEdit_Delete->date().toString() != _dateOLD && ui->tableWidget->currentRow() >= 0)){

                        unsigned int totalrow{0};
                        QSqlQuery queryS,queryD;
                        queryS.prepare("SELECT * FROM contas WHERE data LIKE :date");
                        queryS.bindValue(":date",locale.toString(ui->dateEdit_Delete->date()));
                        queryS.exec();
                        queryD.prepare("DELETE FROM contas WHERE data LIKE :date");
                        queryD.bindValue(":date",locale.toString(ui->dateEdit_Delete->date()));

                        while(queryS.next()){
                            totalrow++;
                        }

                        QMessageBox::StandardButton answer = QMessageBox::question(this,"Informação","Camba tem certeza que deseja deletar Contas* '"+locale.toString(ui->dateEdit_Delete->date())+"' data permanente mente",QMessageBox::Yes|QMessageBox::No);
                        if(QMessageBox::Yes == answer){

                            QMessageBox::StandardButton answer = QMessageBox::question(this,"Informação","Confirmar deleção de Conta* '"+locale.toString(ui->dateEdit_Delete->date())+"'",QMessageBox::Yes|QMessageBox::No);
                            if(QMessageBox::Yes == answer){
                                if(queryD.exec()){
                                    if(!totalrow){
                                        QMessageBox::warning(this,"Erro","Não existe(m) conta relacionada '"+locale.toString(ui->dateEdit_Delete->date())+"'");
                                    }
                                    ui->dateEdit_Delete->setDate(QDate(2023,11,23));
                                }
                            }
                        }
                }

//------------------------------------------------------------------------------------------------------- end deleting account like date*
    }
}


void areaconta::on_pushButton_edit_clicked()
{
    if(ui->tableWidget->currentRow() == -1){
        QMessageBox::information(this,"Informação","Selecione linha para edição");
    }else{
        if(db_connect.isOpen()){

            if(ui->tableWidget->currentRow() >= 0){
                editaccount formedit(this,ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt());
                formedit.exec();
                close();
            }

        }else{
                    QMessageBox::warning(this,"Aviso","DB not was open reload the account area");
        }
    }
}

