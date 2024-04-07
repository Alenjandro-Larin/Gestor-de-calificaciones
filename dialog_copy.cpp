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

float nota[4];

void Dialog::on_pushButton_clicked()
{
    QString matematica1=ui->matematicaI->text();
    nota[0]=matematica1.toFloat();
}

