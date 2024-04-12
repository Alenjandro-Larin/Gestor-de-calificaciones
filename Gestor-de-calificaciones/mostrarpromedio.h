#ifndef MOSTRARPROMEDIO_H
#define MOSTRARPROMEDIO_H

#include <QDialog>

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
    void on_pushButton_2_clicked();

private:
    Ui::MostrarPromedio *ui;
};

#endif // MOSTRARPROMEDIO_H
