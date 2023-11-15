#include "areacash.h"
#include "ui_areacash.h"
#include "areadegestao.h"
#include "QMessageBox"

areacash::areacash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::areacash)
{
    ui->setupUi(this);
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

    if(ui->boxarea->currentText().isEmpty() && !ui->boxmoney->value()){

        QMessageBox::warning(this,"Informação","Área e quantia(AOA) não preenchidas");

    }else if(ui->boxarea->currentText().isEmpty() && ui->boxmoney->value()){

        QMessageBox::warning(this,"Informação","Área não preenchida");

    }else if(!ui->boxarea->currentText().isEmpty() && !ui->boxmoney->value()){

        QMessageBox::warning(this,"Informação","Quantia(AOA) não preenchida");

    }else{
        QMessageBox::warning(this,"Informação","Dados preenchidos");
    }
}




