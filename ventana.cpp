#include "ventana.h"
#include "ui_ventana.h"

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
