#include "ventana.h"
#include "ui_ventana.h"
#include "dialog.h"
#include "ventana.h"
#include "promedio.h"
extern float nota[5];
extern float nota2[4];
extern float promedioSemestre;
extern float promedioSemestre2;
extern float balance;

Ventana::Ventana(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Ventana)
{
    ui->setupUi(this);
}

Ventana::~Ventana()
{
    delete ui;
}

void Ventana::on_Ventana_customContextMenuRequested(const QPoint &pos)
{

}


void Ventana::on_pushButton_2_clicked()
{
    ui->label_matematicaI->setText(QString::number(nota[0]));
    ui->label_programacion1->setText(QString::number(nota[1]));
    ui->label_introduccion->setText(QString::number(nota[2]));
    ui->label_fisica->setText(QString::number(nota[3]));
    ui->label_tecnologia->setText(QString::number(nota[5]));

    ui->label_promedio1->setText(QString::number(balance/5));

    ui->label_matematicaII->setText(QString::number(nota2[0]));
    ui->label_programacionII->setText(QString::number(nota2[1]));
    ui->label_logica->setText(QString::number(nota2[2]));
    ui->label_matematicadiscreta->setText(QString::number(nota2[3]));
    ui->label_tic->setText(QString::number(nota2[4]));

    ui->label_promedio2->setText(QString::number(promedioSemestre2/5));

}


void Ventana::on_Ventana_accepted()
{

}


void Ventana::on_Ventana_finished(int result)
{

}

