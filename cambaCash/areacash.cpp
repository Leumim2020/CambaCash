#include "areacash.h"
#include "ui_areacash.h"
#include "areadegestao.h"
#include "QMessageBox"
#include "vector"

areacash::areacash(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::areacash)
{
    ui->setupUi(this);

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




