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

private slots:
    void on_Ventana_customContextMenuRequested(const QPoint &pos);

    void on_pushButton_2_clicked();

    void on_Ventana_accepted();

    void on_Ventana_finished(int result);

private:
    Ui::Ventana *ui;
};

#endif // VENTANA_H
