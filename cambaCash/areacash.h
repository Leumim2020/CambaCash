#ifndef AREACASH_H
#define AREACASH_H

#include <QDialog>

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
    const QString money;
};

#endif // AREACASH_H
