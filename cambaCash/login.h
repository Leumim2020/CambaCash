#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include "areadegestao.h"


QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();
    QSqlDatabase database;

private slots:
    void on_btnentrar_clicked();

private:
    Ui::login *ui;

};
#endif // LOGIN_H
