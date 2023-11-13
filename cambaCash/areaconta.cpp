#include "areaconta.h"
#include "ui_areaconta.h"

areaconta::areaconta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::areaconta)
{
    ui->setupUi(this);
}

areaconta::~areaconta()
{
    delete ui;
}
