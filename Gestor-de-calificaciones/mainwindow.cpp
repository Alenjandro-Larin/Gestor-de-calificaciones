#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "introducirnotas.h"
#include "mostrarnotas.h"
#include "mostrarpromedio.h"

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

void MainWindow::on_introducir_clicked()
{
    IntroducirNotas introducirnotas;
    introducirnotas.setModal('true');
    introducirnotas.exec();
}


void MainWindow::on_ver_clicked()
{
    MostrarNotas mostrarnotas;
    mostrarnotas.setModal('true');
    mostrarnotas.exec();
}

void MainWindow::on_promedio_clicked()
{
    MostrarPromedio mostrarpromedio;
    mostrarpromedio.setModal('true');
    mostrarpromedio.exec();
}

