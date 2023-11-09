#include "areacash.h"
#include "ui_areacash.h"

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
