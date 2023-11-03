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

private:
    Ui::areadegestao *ui;
};

#endif // AREADEGESTAO_H
