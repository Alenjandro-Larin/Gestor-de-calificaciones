#ifndef VENTANA_H
#define VENTANA_H

#include <QDialog>

namespace Ui {
class Ventana;
}

class Ventana : public QDialog
{
    Q_OBJECT

public:
    explicit Ventana(QWidget *parent = nullptr);
    ~Ventana();

private:
    Ui::Ventana *ui;
};

#endif // VENTANA_H
