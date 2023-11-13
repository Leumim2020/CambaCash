#ifndef AREACONTA_H
#define AREACONTA_H

#include <QDialog>

namespace Ui {
class areaconta;
}

class areaconta : public QDialog
{
    Q_OBJECT

public:
    explicit areaconta(QWidget *parent = nullptr);
    ~areaconta();

private:
    Ui::areaconta *ui;
};

#endif // AREACONTA_H
