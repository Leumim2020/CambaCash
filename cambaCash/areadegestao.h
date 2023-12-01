#ifndef AREADEGESTAO_H
#define AREADEGESTAO_H

#include <QDialog>

namespace Ui {
class areadegestao;
}

class areadegestao : public QDialog
{
    Q_OBJECT

public:
    explicit areadegestao(QWidget *parent = nullptr);
    ~areadegestao();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::areadegestao *ui;
};

#endif // AREADEGESTAO_H
