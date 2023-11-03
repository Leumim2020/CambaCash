#include "login.h"
#include "ui_login.h"
#include "QMessageBox"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatebase("QSQLITE");
    database.setDatabaseName("C:/Users/HP/Documents/C++ Projects/cambaCash/cambaCash/datebase/cambadb.db");
    if(database.open())
       ui->label_db->setText("1");
    else
        ui->label_db->setText("0");

}

login::~login()
{
    delete ui;
}

void login::on_btnentrar_clicked()
{
    QString USER = ui->line_user->text();
    QString PASSWORD = ui->line_pass->text();

     QSqlQuery query;

    if(database.isOpen()){
        query.prepare("SELECT * FROM usuarios WHERE user = :USER AND password = :PASSWORD");
        query.bindValue(":user", USER);
        query.bindValue(":password", PASSWORD);
        if(query.exec()) {
               QMessageBox::information(this,"informacao","dentro");
        } else {
            qDebug() << query.lastError().databaseText();
        }
    }

}

