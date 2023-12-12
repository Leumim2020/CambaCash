#ifndef EDITACCOUNT_H
#define EDITACCOUNT_H

#include <QDialog>
#include <QDate>
#include <QDateEdit>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>

namespace Ui {
class editaccount;
}

class editaccount : public QDialog
{
    Q_OBJECT

public:
    explicit editaccount(QWidget *parent = nullptr,int id = 0);
    ~editaccount();

private:
    Ui::editaccount *ui;
    QSqlDatabase db_connect;
};

#endif // EDITACCOUNT_H
