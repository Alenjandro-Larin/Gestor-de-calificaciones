#include "introducirnotas.h"
#include "ui_introducirnotas.h"
#include "mainwindow.h"


IntroducirNotas::IntroducirNotas(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IntroducirNotas)
{
    ui->setupUi(this);
}

IntroducirNotas::~IntroducirNotas()
{
    delete ui;
}

float nota[5];
float nota2[4];
float promedioSemestre;
float balance;
float promedioSemestre2;

void IntroducirNotas::on_pushButton_clicked()
{
    nota[0] = ui->matematicaI->value();

    nota[1] = ui->programacionI->value();

    nota[2] = ui->introduccion->value();

    nota[3] = ui->fisica->value();

    nota[5] = ui->teo->value();

    balance = (nota[0] + nota[1] + nota[2] + nota[3] + nota[5]);


    nota2[0] = ui->matematicaII->value();

    nota2[1] = ui->programacionII->value();

    nota2[2] = ui->logica->value();

    nota2[3] = ui->matematicadiscreta->value();

    nota2[4] = ui->tic->value();

    promedioSemestre2 = (nota2[0] + nota2[1] + nota2[2] + nota2[3] + nota2[4]);

    hide();
    mainwindow = new MainWindow(this);
    mainwindow->show();
}

