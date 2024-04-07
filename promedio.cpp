#include "promedio.h"
#include "ui_promedio.h"

Promedio::Promedio(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Promedio)
{
    ui->setupUi(this);
}

Promedio::~Promedio()
{
    delete ui;
}
