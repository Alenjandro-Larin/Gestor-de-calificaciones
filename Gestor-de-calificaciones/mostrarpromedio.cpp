#include "mostrarpromedio.h"
#include "ui_mostrarpromedio.h"
#include "mainwindow.h"
extern float promedioSemestre2;
extern float balance;
extern float nota[5];
extern float nota2[4];
float promedioTotal;

MostrarPromedio::MostrarPromedio(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MostrarPromedio)
{
    ui->setupUi(this);

    promedioTotal = (((balance/5) + (promedioSemestre2/5))/2);

    if (promedioTotal>=4){
        ui->promedio->setText("Has pasado con un promedio de: " + QString::number(promedioTotal));
    }
    if (promedioTotal>=4 && promedioTotal<=5){
        ui->promedio->setText("Te has salvado por poco, pasaste con un promedio de: " + QString::number(promedioTotal));
    }
    if (promedioTotal >= 8){
        ui->promedio->setText("Felicidades obtuviste una matricula de honor!!, con un: " + QString::number(promedioTotal));
    }
    if (promedioTotal < 4){
        ui->promedio->setText("Lastimosamente has reprobado con: " + QString::number(promedioTotal));
    }
    if (promedioTotal<4 && promedioTotal>=3){
        ui->promedio->setText("Te faltado poco, pero reprobaste con un promedio de: " + QString::number(promedioTotal));
    }
    if (nota[0] > 10 || nota[1] > 10 || nota[2] > 10 || nota[3] > 10 || nota[5] > 10 || nota2[0] > 10 || nota2[1] > 10 || nota2[2] > 10 || nota2[3] > 10 || nota2[4] > 10){
        ui->promedio->setText(("Hay al menos una calificación no permitida."));
    }
}

MostrarPromedio::~MostrarPromedio()
{
    delete ui;
}

void MostrarPromedio::on_pushButton_clicked()
{
    hide();
    mainwindow = new MainWindow(this);
    mainwindow->show();
}

