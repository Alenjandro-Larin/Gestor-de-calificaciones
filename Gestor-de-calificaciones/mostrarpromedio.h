#ifndef MOSTRARPROMEDIO_H
#define MOSTRARPROMEDIO_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class MostrarPromedio;
}

class MostrarPromedio : public QDialog
{
    Q_OBJECT

public:
    explicit MostrarPromedio(QWidget *parent = nullptr);
    ~MostrarPromedio();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MostrarPromedio *ui;
    QMainWindow *mainwindow;
};

#endif // MOSTRARPROMEDIO_H
