#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

float nota[5];
float nota2[4];
float promedioSemestre;
float promedioSemestre2;
float balance;

void Dialog::on_pushButton_clicked()
{
    nota[4] = 0;
    QString matematica1 = ui->matematicaI->text();
    nota[0] = matematica1.toFloat();

    QString programacion1 = ui->programacion1->text();
    nota[1] = programacion1.toFloat();

    QString introduccion1 = ui->introduccion->text();
    nota[2] = introduccion1.toFloat();

    QString fisica1 = ui->fisica->text();
    nota[3] = fisica1.toFloat();

    QString tecnologia1 = ui->tecnologia->text();
    nota[5] = tecnologia1.toFloat();

    balance = (nota[0] + nota[1] + nota[2] + nota[3] + nota[5]);


    QString matematica2 = ui->matematicaII->text();
    nota2[0] = matematica2.toFloat();

    QString programacion2 = ui->programacion2->text();
    nota2[1] = programacion2.toFloat();

    QString logica1 = ui->logica->text();
    nota2[2] = logica1.toFloat();

    QString matematicadiscreta1 = ui->matematicadiscreta->text();
    nota2[3] = matematicadiscreta1.toFloat();

    QString tic1 = ui->tic->text();
    nota2[4] = tic1.toFloat();

    promedioSemestre2 = (nota2[0] + nota2[1] + nota2[2] + nota2[3] + nota2[4]);

}
