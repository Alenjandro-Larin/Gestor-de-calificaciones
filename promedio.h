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

private:
    Ui::Promedio *ui;
};

#endif // PROMEDIO_H
