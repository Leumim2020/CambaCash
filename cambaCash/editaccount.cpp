#include "editaccount.h"
#include "ui_editaccount.h"
#include "QMessageBox"
#include "string"

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

        qDebug() << QDate(queryS.value("data").toDate());

        ui->linetotal->setText(queryS.value("total").toString());
    }
}

editaccount::~editaccount()
{
    delete ui;
}
