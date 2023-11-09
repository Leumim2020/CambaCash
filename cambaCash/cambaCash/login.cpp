#include "login.h"
#include "ui_login.h"
#include "QMessageBox"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

    db_connect = QSqlDatabase::addDatabase("QSQLITE");
    db_connect.setDatabaseName("cambadb.db");
    db_connect.open();

    if(db_connect.isOpen()){
        QMessageBox::information(this,"Informacao","db open");
    }else{
        QMessageBox::information(this,"Inforamcao","not was open");
    }
}

login::~login()
{
    delete ui;
}

void login::on_btnentrar_clicked()
{

    if(ui->line_user->text().isEmpty() && ui->line_pass->text().isEmpty()){

        QMessageBox::warning(this,"Informção","Você não digitou usuário e senha");
        ui->line_user->setFocus();

    }else if(!(ui->line_user->text().isEmpty()) && ui->line_pass->text().isEmpty()){

        QMessageBox::warning(this,"Informção","Você não digitou usuário");
        ui->line_user->setFocus();

    }else if (ui->line_user->text().isEmpty() && !(ui->line_pass->text().isEmpty())){

        QMessageBox::warning(this,"Informção","Você não digitou senha");
        ui->line_pass->setFocus();

    }else if(!(ui->line_user->text().isEmpty()) && !(ui->line_pass->text().isEmpty())){

        if(db_connect.isOpen()){

            qDebug() << "db open";
            QSqlQuery query;

            query.prepare("SELECT password FROM funcionarios WHERE name LIKE :nameofuser");
            query.bindValue(":nameofuser",ui->line_user->text());
            query.exec();

            if(query.next()){
                if(query.value("password").toString() == ui->line_pass->text()){
                    form2 = new areadegestao;
                    form2->show();
                    ui->line_user->clear();
                    ui->line_pass->clear();
                }else{
                     QMessageBox::warning(this,"Informação","Senha incorreta");
                }
            }else{
                QMessageBox::warning(this,"Informação","Usuário incorreto");

            }
        }else{
            QMessageBox::warning(this,"Informação","Erro na conexão do banco de dados!");
        }
    }
}

