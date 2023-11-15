#include "areacash.h"
#include "ui_areacash.h"
#include "areadegestao.h"

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
    double money = ui->boxmoney->value();
    QString date = ui->calendar->selectedDate().toString();
    ui->label_test->setText(date);
}




