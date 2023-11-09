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

private:
    Ui::areacash *ui;
};

#endif // AREACASH_H
