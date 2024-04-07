#ifndef PROMEDIO_H
#define PROMEDIO_H

#include <QDialog>

namespace Ui {
class Promedio;
}

class Promedio : public QDialog
{
    Q_OBJECT

public:
    explicit Promedio(QWidget *parent = nullptr);
    ~Promedio();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Promedio *ui;
};

#endif // PROMEDIO_H
