#ifndef AREACONTA_H
#define AREACONTA_H
#define _dateOLD "Thu Nov 23 2023"

#include <QDialog>
#include <QDebug>
#include <QLocale>
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
    explicit areaconta(QWidget *parent = nullptr,QString areaX="no");
    ~areaconta();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_delete_clicked();
    void on_pushButton_edit_clicked();

private:
    Ui::areaconta *ui;
    QSqlDatabase db_connect;
    QLocale locale = QLocale{QLocale::Portuguese, QLocale::Angola};
};

#endif // AREACONTA_H
