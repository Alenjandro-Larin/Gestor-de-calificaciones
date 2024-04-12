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
    QPushButton *pushButton_2;
    QLabel *promedio;

    void setupUi(QDialog *MostrarPromedio)
    {
        if (MostrarPromedio->objectName().isEmpty())
            MostrarPromedio->setObjectName("MostrarPromedio");
        MostrarPromedio->resize(311, 93);
        MostrarPromedio->setMinimumSize(QSize(311, 93));
        pushButton = new QPushButton(MostrarPromedio);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 50, 75, 24));
        pushButton_2 = new QPushButton(MostrarPromedio);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 50, 111, 24));
        promedio = new QLabel(MostrarPromedio);
        promedio->setObjectName("promedio");
        promedio->setGeometry(QRect(20, 20, 271, 16));

        retranslateUi(MostrarPromedio);
        QObject::connect(pushButton, &QPushButton::clicked, MostrarPromedio, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(MostrarPromedio);
    } // setupUi

    void retranslateUi(QDialog *MostrarPromedio)
    {
        MostrarPromedio->setWindowTitle(QCoreApplication::translate("MostrarPromedio", "Promedio Total", nullptr));
        pushButton->setText(QCoreApplication::translate("MostrarPromedio", "Salir", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MostrarPromedio", "Conocer resultado", nullptr));
        promedio->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MostrarPromedio: public Ui_MostrarPromedio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRARPROMEDIO_H
