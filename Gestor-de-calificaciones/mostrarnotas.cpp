#include "mostrarnotas.h"
#include "ui_mostrarnotas.h"
#include "mainwindow.h"
extern float nota[5];
extern float nota2[4];
extern float promedioSemestre;
extern float promedioSemestre2;
extern float balance;

MostrarNotas::MostrarNotas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MostrarNotas)
{
    ui->setupUi(this);
}

MostrarNotas::~MostrarNotas()
{
    delete ui;
}

void MostrarNotas::on_mostrar_clicked()
{
    ui->label_matematicaI->setNum(nota[0]);
    ui->label_programacionI->setNum(nota[1]);
    ui->label_introduccion->setNum(nota[2]);
    ui->label_fisica->setNum(nota[3]);
    ui->label_teo->setNum(nota[5]);

    ui->label_promedio1->setText(QString::number(balance/5));

    ui->label_matematicaII->setNum(nota2[0]);
    ui->label_programacionII->setNum(nota2[1]);
    ui->label_logica->setNum(nota2[2]);
    ui->label_matematicadiscreta->setNum(nota2[3]);
    ui->label_tic->setNum(nota2[4]);

    ui->label_promedio2->setText(QString::number(promedioSemestre2/5));
}


void MostrarNotas::on_salir_clicked()
{
    hide();
    mainwindow = new MainWindow(this);
    mainwindow->show();
}

