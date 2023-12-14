#include "editaccount.h"
#include "ui_editaccount.h"
#include "QMessageBox"
#include "areaconta.h"

editaccount::editaccount(QWidget *parent,int id) :
    QDialog(parent),
    ui(new Ui::editaccount)
{
    ui->setupUi(this);

    db_connect = QSqlDatabase::addDatabase("QSQLITE");
    db_connect.setDatabaseName("cambadb.db");
    db_connect.open();

    QSqlQuery queryS;
    queryS.prepare("SELECT * FROM contas WHERE id =:ID");
    queryS.bindValue(":ID",id);

    if(queryS.exec()){

        queryS.first();

        ui->label_ID->setText(queryS.value("id").toString());
        ui->linearea->setText(queryS.value("area").toString());
        ui->boxmoney->setValue(queryS.value("dinheiro").toDouble());
        ui->linehour->setText(queryS.value("time").toString());

        QString GETtimeHM = {queryS.value("time").toString()};
        QString timeH = GETtimeHM.at(0);
        timeH += GETtimeHM.at(1);
        unsigned short UtimeH = timeH.toUShort();

        if(UtimeH <= 11){
            ui->labelperiodo->setText("AM");
        }else{
            ui->labelperiodo->setText("PM");
        }

        ui->lineEditdate->setText(queryS.value("data").toString());
        ui->linetotal->setText(queryS.value("total").toString());
    }
}

editaccount::~editaccount()
{
    delete ui;
}

void editaccount::on_pushButton_clicked()
{
    QMessageBox::StandardButton answer = QMessageBox::question(this,"Informação","Verifique se dados estão bem preenchidos antes de submeter edição",QMessageBox::Yes|QMessageBox::No);

    if(QMessageBox::Yes == answer){
        QLocale locale = QLocale{QLocale::Portuguese, QLocale::Angola};

        if(db_connect.isOpen()){

            QSqlQuery queryU,queryU2,queryS;
            double totalCurrent{};


            if(ui->dateEdit->date().toString() != _dateOLD){
                queryU.prepare("UPDATE contas SET dinheiro=:moneyCurrent,data=:dateCurrent,time=:horaCurrent WHERE id LIKE :ID");
                queryU.bindValue(":moneyCurrent",ui->boxmoney->value());
                queryU.bindValue(":dateCurrent",locale.toString(ui->dateEdit->date()));
                queryU.bindValue(":horaCurrent",ui->linehour->text());
                queryU.bindValue(":ID",ui->label_ID->text().toInt());

                if(queryU.exec()){
                    qDebug() << "query exec";
                    queryS.prepare("SELECT area, sum(dinheiro) AS Ctotal FROM contas  GROUP BY :area");
                    queryS.bindValue(":area",ui->linearea->text());
                    if(queryS.exec()){

                        queryS.first();
                        totalCurrent = queryS.value("Ctotal").toDouble();
                        queryU2.prepare("UPDATE contas SET total=:totalcurrent WHERE id LIKE :ID");
                        queryU2.bindValue(":totalcurrent",totalCurrent);
                        queryU2.bindValue(":ID",ui->label_ID->text().toInt());
                        queryU2.exec();
                        ui->linetotal->setText(queryS.value("Ctotal").toString());
                        QMessageBox::StandardButton answer2 = QMessageBox::question(this,"Informação"," Dados editados com sucesso! Deseja fechar janela de edição?",QMessageBox::Yes|QMessageBox::No);
                        if(QMessageBox::Yes == answer2){
                            close();
                            areaconta *formareaconta = new areaconta;
                            formareaconta->show();
                            }
                    }
                }
            }else{
                QMessageBox::information(this,"Informação","Data corrente não alterada");
            }
        }
    }


}


