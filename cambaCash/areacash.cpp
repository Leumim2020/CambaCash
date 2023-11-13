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


void areacash::on_boxmoney_textChanged(const QString &arg1)
{
  ui->boxmoney->textChanged(arg1);
}

void areacash::on_pushButton_conta_2_clicked()
{
    QString word;
    double dinheiro = 0;
    on_boxmoney_textChanged(word);
    dinheiro = word.toDouble();
    dinheiro+=10;
    ui->label_test->setText(word.setNum(dinheiro));
}




