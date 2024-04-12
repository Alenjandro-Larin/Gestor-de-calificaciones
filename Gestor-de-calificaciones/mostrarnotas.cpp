#include "mostrarnotas.h"
#include "ui_mostrarnotas.h"
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
    ui->label_matematicaI->setText(QString::number(nota[0]));
    ui->label_programacionI->setText(QString::number(nota[1]));
    ui->label_introduccion->setText(QString::number(nota[2]));
    ui->label_fisica->setText(QString::number(nota[3]));
    ui->label_teo->setText(QString::number(nota[5]));

    ui->label_promedio1->setText(QString::number(balance/5));

    ui->label_matematicaII->setText(QString::number(nota2[0]));
    ui->label_programacionII->setText(QString::number(nota2[1]));
    ui->label_logica->setText(QString::number(nota2[2]));
    ui->label_matematicadiscreta->setText(QString::number(nota2[3]));
    ui->label_tic->setText(QString::number(nota2[4]));

    ui->label_promedio2->setText(QString::number(promedioSemestre2/5));
}

