#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "form.h"
#include "ventana.h"

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
    void on_pushButton_clicked();

    void on_mostrar_clicked();

    void on_botonpromedio_clicked();

private:
    Ui::MainWindow *ui;
    //Form *bform;
    //Dialog *deialog;
};
#endif // MAINWINDOW_H
