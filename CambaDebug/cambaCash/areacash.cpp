#include "areacash.h"
#include "areaconta.h"
#include "ui_areacash.h"
#include "areadegestao.h"
#include "ctime"
#include "QMessageBox"
#include "vector"

areacash::areacash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::areacash)
{
    ui->setupUi(this);

    std::time_t T = std::time(nullptr);
    std::tm* T_CORRENTLY = std::localtime(&T);

    if(T_CORRENTLY->tm_hour <= 11){

        timeH.setNum(T_CORRENTLY->tm_hour);
        timeM.setNum(T_CORRENTLY->tm_min);
        timeHM += timeH;
        timeHM += ":";
        timeHM += timeM;
        ui->label_period->setText("AM");

    }else{

        timeH.setNum(T_CORRENTLY->tm_hour);
        timeM.setNum(T_CORRENTLY->tm_min);
        timeHM += timeH;
        timeHM += ":";
        timeHM += timeM;
        ui->label_period->setText("PM");

    }

    ui->label_time->setText(timeHM);

    db_connect = QSqlDatabase::addDatabase("QSQLITE");
    db_connect.setDatabaseName("cambadb.db");
    db_connect.open();

    if(db_connect.isOpen())
        ui->label_test->setText("db open");
    else
        ui->label_test->setText("db not was open");

    std::vector <QString> item{"","BAR-UP","BAR-DOWN","BARBEARIA","LOJA ZAP","SALÃO DE BELEZA"};
    std::vector <QString> imagecombox{"",":/area/area/bar.png",":/area/area/bar.png",":/area/area/barbearia.png",":/area/area/zap.png",":/area/area/salao.png"};
    for(size_t i = 0; i < imagecombox.size(); ++i)
        ui->boxarea->addItem(QIcon(imagecombox.at(i)),item.at(i));
}

areacash::~areacash()
{
    delete ui;
}

void areacash::on_pushButton_clicked()
{
    areadegestao *form3 = new areadegestao;
    form3->show();
    close();
}

void areacash::on_pushButton_conta_2_clicked()
{
    QLocale locale = QLocale{QLocale::Portuguese, QLocale::Angola};

    if(ui->boxarea->currentText().isEmpty() && !ui->boxmoney->value()){

        QMessageBox::warning(this,"Informação","Área e quantia(AOA) não preenchidas");

    }else if(ui->boxarea->currentText().isEmpty() && ui->boxmoney->value()){

        QMessageBox::warning(this,"Informação","Área não preenchida");

    }else if(!ui->boxarea->currentText().isEmpty() && !ui->boxmoney->value()){

        QMessageBox::warning(this,"Informação","Quantia(AOA) não preenchida");

    }else{

        QMessageBox::StandardButton answer = QMessageBox::question(this,"Informação","Verifique se dados estão bem preenchidos antes de submeter conta",QMessageBox::Yes|QMessageBox::No);

        if(db_connect.isOpen()){

            if(QMessageBox::Yes == answer){

                QSqlQuery queryR,queryS;
                double totalPrevious{},totalCurrent{};

                queryS.prepare("SELECT SUM(dinheiro) mtotal FROM contas WHERE area LIKE :area");
                queryS.bindValue(":area",ui->boxarea->currentText());
                queryS.exec();

                if(queryS.next()){

                    totalCurrent = ui->boxmoney->value();
                    totalPrevious = queryS.value("mtotal").toDouble();
                    totalCurrent += totalPrevious;
                    queryR.prepare("INSERT INTO contas(area,dinheiro,data,time,total) VALUES(:area,:money,:date,:time,:total)");
                    queryR.bindValue(":area",ui->boxarea->currentText());
                    queryR.bindValue(":money",ui->boxmoney->value());
                    queryR.bindValue(":date",locale.toString(ui->calendar->selectedDate()));
                    queryR.bindValue(":time",timeHM);
                    queryR.bindValue(":total",totalCurrent);
                    queryR.exec();

                }else{
                    ui->label_test->setText("total not was found");
                }

            }else{
                return;
            }
        }
    }
}

void areacash::on_pushButton_conta_clicked()
{
    areaconta formconta(this,"areaconta");
    formconta.exec();
    close();
}
