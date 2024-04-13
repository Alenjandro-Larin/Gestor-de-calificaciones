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


    if (nota[0] <= 10){
        ui->label_matematicaI->setNum(nota[0]);
    }else{
        ui->label_matematicaI->setText("- Esa calificación no es posible.");
    }
    if (nota[1] <= 10){
        ui->label_programacionI->setNum(nota[1]);
    }else{
        ui->label_programacionI->setText("- Esa calificación no es posible.");
    }
    if (nota[2] <= 10){
        ui->label_introduccion->setNum(nota[2]);
    }else{
        ui->label_introduccion->setText("- Esa calificación no es posible.");
    }
    if (nota[3] <= 10){
        ui->label_fisica->setNum(nota[3]);
    }else{
        ui->label_fisica->setText("- Esa calificación no es posible.");
    }
    if (nota[5] <= 10){
        ui->label_teo->setNum(nota[5]);
    }else{
        ui->label_teo->setText("- Esa calificación no es posible.");
    }

    if (nota[0] > 10 || nota[1] > 10 || nota[2] > 10 || nota[3] > 10 || nota[5] > 10){
        ui->label_promedio1->setText("Hay al menos una calificación no permitida.");
    }else{
        ui->label_promedio1->setText(QString::number(balance/5));
    }


    if (nota2[0] <= 10){
        ui->label_matematicaII->setNum(nota2[0]);
    }else{
        ui->label_matematicaII->setText("- Esa calificación no es posible.");
    }
    if (nota2[1] <= 10){
        ui->label_programacionII->setNum(nota2[1]);
    }else{
        ui->label_programacionII->setText("- Esa calificación no es posible.");
    }
    if (nota2[2] <= 10){
        ui->label_logica->setNum(nota2[2]);
    }else{
        ui->label_logica->setText("- Esa calificación no es posible.");
    }
    if (nota2[3] <= 10){
        ui->label_matematicadiscreta->setNum(nota2[3]);
    }else{
        ui->label_matematicadiscreta->setText("- Esa calificación no es posible.");
    }
    if (nota2[4] <= 10){
        ui->label_tic->setNum(nota2[4]);
    }else{
        ui->label_tic->setText("- Esa calificación no es posible.");
    }

    if (nota2[0] > 10 || nota2[1] > 10 || nota2[2] > 10 || nota2[3] > 10 || nota2[4] > 10){
        ui->label_promedio2->setText("Hay al menos una calificación no permitida.");
    }else{
        ui->label_promedio2->setText(QString::number(promedioSemestre2/5));
    }

}

MostrarNotas::~MostrarNotas()
{
    delete ui;
}

void MostrarNotas::on_salir_clicked()
{
    hide();
    mainwindow = new MainWindow(this);
    mainwindow->show();
}

