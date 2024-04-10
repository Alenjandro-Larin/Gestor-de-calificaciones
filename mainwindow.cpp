#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"
#include "ventana.h"
#include "promedio.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Dialog deialog;
    deialog.setModal('true');
    deialog.exec();
}

void MainWindow::on_mostrar_clicked()
{
    Ventana ventana1;
    ventana1.setModal('true');
    ventana1.exec();
}


void MainWindow::on_botonpromedio_clicked()
{
    Promedio promedio1;
    promedio1.setModal('true');
    promedio1.exec();
}

