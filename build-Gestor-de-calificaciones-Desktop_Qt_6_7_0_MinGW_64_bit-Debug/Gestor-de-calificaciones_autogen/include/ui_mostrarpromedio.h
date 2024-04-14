/********************************************************************************
** Form generated from reading UI file 'mostrarpromedio.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRARPROMEDIO_H
#define UI_MOSTRARPROMEDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MostrarPromedio
{
public:
    QPushButton *pushButton;
    QLabel *promedio;

    void setupUi(QDialog *MostrarPromedio)
    {
        if (MostrarPromedio->objectName().isEmpty())
            MostrarPromedio->setObjectName("MostrarPromedio");
        MostrarPromedio->resize(352, 93);
        MostrarPromedio->setMinimumSize(QSize(311, 93));
        pushButton = new QPushButton(MostrarPromedio);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 50, 75, 24));
        promedio = new QLabel(MostrarPromedio);
        promedio->setObjectName("promedio");
        promedio->setGeometry(QRect(20, 20, 311, 16));

        retranslateUi(MostrarPromedio);
        QObject::connect(pushButton, &QPushButton::clicked, MostrarPromedio, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(MostrarPromedio);
    } // setupUi

    void retranslateUi(QDialog *MostrarPromedio)
    {
        MostrarPromedio->setWindowTitle(QCoreApplication::translate("MostrarPromedio", "Promedio Total", nullptr));
        pushButton->setText(QCoreApplication::translate("MostrarPromedio", "Salir", nullptr));
        promedio->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MostrarPromedio: public Ui_MostrarPromedio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARPROMEDIO_H
