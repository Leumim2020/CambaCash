#include "areadegestao.h"
#include "ui_areadegestao.h"

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
