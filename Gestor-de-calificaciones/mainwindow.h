#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "introducirnotas.h"
#include "mostrarnotas.h"
#include "mostrarpromedio.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_introducir_clicked();

    void on_ver_clicked();

    void on_promedio_clicked();

private:
    Ui::MainWindow *ui;
    QDialog *introducirnotas;
    QDialog *mostrarnotas;
    QDialog *Mostrarpromedio;
};
#endif // MAINWINDOW_H
