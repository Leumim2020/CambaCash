#include "login.h"
#include "ui_login.h"
#include "QMessageBox"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    /*database.setDatabaseName("C:/Users/HP/Documents/C++ Projects/cambaCash/cambaCash/datebase/cambadb.db");
    if(database.open())
       ui->label_db->setText("1");
    else
        ui->label_db->setText("0");*/

}

login::~login()
{
    delete ui;
}

void login::on_btnentrar_clicked()
{
    QString USER = ui->line_user->text();
    QString PASSWORD = ui->line_pass->text();

    if(USER == "cboss" && PASSWORD == "cboss1234"){
        areadegestao area_main;
        area_main.setModal(true);
        area_main.exec();
    }


   /* QSqlQuery query; if(database.open()){
        if(query.exec("select * from tb_users where user='"+USER+"' and password='"+PASSWORD+"'")){
            if(query.next()){
                QMessageBox::information(this,"informacao","dentro");
            }
        }
        else
            QMessageBox::information(this,"informacao","fora");
    }
    */

}

