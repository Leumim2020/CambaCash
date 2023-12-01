#ifndef VALIADTIONEDIT_H
#define VALIADTIONEDIT_H

#include <QDialog>

namespace Ui {
class valiadtionEdit;
}

class valiadtionEdit : public QDialog
{
    Q_OBJECT
public:
    explicit valiadtionEdit(QWidget *parent = nullptr);
    ~valiadtionEdit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::valiadtionEdit *ui;
};

#endif // VALIADTIONEDIT_H
