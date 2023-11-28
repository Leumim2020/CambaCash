#ifndef AREACONTA_H
#define AREACONTA_H

#include <QDialog>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>

namespace Ui {
class areaconta;
}

class areaconta : public QDialog
{
    Q_OBJECT

public:
    explicit areaconta(QWidget *parent = nullptr);
    ~areaconta();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_delete_clicked();

private:
    Ui::areaconta *ui;
    QSqlDatabase db_connect;
};

#endif // AREACONTA_H
