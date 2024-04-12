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
    hide();
    introducirnotas = new IntroducirNotas(this);
    introducirnotas->show();
}


void MainWindow::on_ver_clicked()
{
    hide();
    mostrarnotas = new MostrarNotas(this);
    mostrarnotas->show();
}

void MainWindow::on_promedio_clicked()
{
    hide();
    Mostrarpromedio = new MostrarPromedio(this);
    Mostrarpromedio->show();
}

