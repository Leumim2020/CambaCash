#ifndef AREACASH_H
#define AREACASH_H

#include <QDialog>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>

namespace Ui {
class areacash;
}

class areacash : public QDialog
{
    Q_OBJECT

public:
    explicit areacash(QWidget *parent = nullptr);
    ~areacash();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_conta_2_clicked();

private:
    Ui::areacash *ui;
    QSqlDatabase db_connect;
    QString timeH,timeM,timeHM;
};

#endif // AREACASH_H
