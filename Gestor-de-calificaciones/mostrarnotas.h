#ifndef MOSTRARNOTAS_H
#define MOSTRARNOTAS_H

#include <QDialog>
#include "mainwindow.h"

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

    void on_salir_clicked();

private:
    Ui::MostrarNotas *ui;
    QMainWindow *mainwindow;
};

#endif // MOSTRARNOTAS_H
