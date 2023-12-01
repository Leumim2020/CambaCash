#include "areaconta.h"
#include "areadegestao.h"
#include "valiadtionedit.h"
#include "ui_valiadtionedit.h"
#include "QMessageBox"

valiadtionEdit::valiadtionEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::valiadtionEdit)
{
    ui->setupUi(this);

}

valiadtionEdit::~valiadtionEdit()
{
    delete ui;
}

void valiadtionEdit::on_pushButton_clicked()
{
    if(ui->lineEdit->text() == "camba"){

        QMessageBox::information(this,"Informação","Autorizado");

        areaconta *formareaconta = new areaconta;
        formareaconta->show();
        close();

    }else{
        close();
        QMessageBox::information(this,"Informação","Ñ Autorizado");
        areadegestao *formareagestao = new areadegestao;
        formareagestao->show();

    }
}

