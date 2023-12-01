#include "areadegestao.h"
#include "ui_areadegestao.h"
#include "areacash.h"
#include "areaconta.h"
#include "valiadtionedit.h"
#include "QMessageBox"

areadegestao::areadegestao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::areadegestao)
{
    ui->setupUi(this);
}

areadegestao::~areadegestao()
{
    delete ui;
}

void areadegestao::on_pushButton_clicked()
{
    areacash *form3 = new areacash;
    form3->show();
    hide();
}

void areadegestao::on_pushButton_2_clicked()
{

    valiadtionEdit *formvalidtion = new valiadtionEdit;
    formvalidtion->show();
    hide();
}

