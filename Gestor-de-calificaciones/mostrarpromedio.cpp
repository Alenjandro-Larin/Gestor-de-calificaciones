#include "mostrarpromedio.h"
#include "ui_mostrarpromedio.h"
extern float promedioSemestre2;
extern float balance;

MostrarPromedio::MostrarPromedio(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MostrarPromedio)
{
    ui->setupUi(this);
}

MostrarPromedio::~MostrarPromedio()
{
    delete ui;
}

float promedioTotal;

void MostrarPromedio::on_pushButton_2_clicked()
{
    promedioTotal = (((balance/5) + (promedioSemestre2/5))/2);

    if (promedioTotal>4){
        ui->promedio->setText("El promedio total de los 2 semestres fue de: " + QString::number(promedioTotal));
    }
    if (promedioTotal > 8){
        ui->promedio->setText("Felicidades obtuviste una matricula de honor!!, con un: " + QString::number(promedioTotal));
    }
    if (promedioTotal <= 4){
        ui->promedio->setText("Lastimosamente has reprobado con: " + QString::number(promedioTotal));
    }
    if (promedioTotal > 10 || promedioTotal < 0){
        ui->promedio->setText("Esa calificacion no es posible: " + QString::number(promedioTotal));
    }
}

