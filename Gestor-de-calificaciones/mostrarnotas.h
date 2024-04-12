#ifndef MOSTRARNOTAS_H
#define MOSTRARNOTAS_H

#include <QDialog>

namespace Ui {
class MostrarNotas;
}

class MostrarNotas : public QDialog
{
    Q_OBJECT

public:
    explicit MostrarNotas(QWidget *parent = nullptr);
    ~MostrarNotas();

private slots:
    void on_mostrar_clicked();

private:
    Ui::MostrarNotas *ui;
};

#endif // MOSTRARNOTAS_H
