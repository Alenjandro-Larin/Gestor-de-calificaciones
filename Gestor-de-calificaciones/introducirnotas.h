#ifndef INTRODUCIRNOTAS_H
#define INTRODUCIRNOTAS_H

#include <QDialog>

namespace Ui {
class IntroducirNotas;
}

class IntroducirNotas : public QDialog
{
    Q_OBJECT

public:
    explicit IntroducirNotas(QWidget *parent = nullptr);
    ~IntroducirNotas();

private slots:
    void on_pushButton_clicked();

private:
    Ui::IntroducirNotas *ui;
};

#endif // INTRODUCIRNOTAS_H
