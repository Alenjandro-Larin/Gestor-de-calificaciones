/********************************************************************************
** Form generated from reading UI file 'introducirnotas.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODUCIRNOTAS_H
#define UI_INTRODUCIRNOTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_IntroducirNotas
{
public:
    QLineEdit *matematicaI;
    QLineEdit *logica;
    QLineEdit *programacionII;
    QLineEdit *matematicadiscreta;
    QLineEdit *teo;
    QLineEdit *programacionI;
    QLineEdit *introduccion;
    QLineEdit *matematicaII;
    QLineEdit *fisica;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *tic;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_15;
    QLabel *label_13;

    void setupUi(QDialog *IntroducirNotas)
    {
        if (IntroducirNotas->objectName().isEmpty())
            IntroducirNotas->setObjectName("IntroducirNotas");
        IntroducirNotas->resize(470, 386);
        IntroducirNotas->setMinimumSize(QSize(470, 379));
        matematicaI = new QLineEdit(IntroducirNotas);
        matematicaI->setObjectName("matematicaI");
        matematicaI->setGeometry(QRect(40, 80, 113, 22));
        logica = new QLineEdit(IntroducirNotas);
        logica->setObjectName("logica");
        logica->setGeometry(QRect(300, 190, 113, 22));
        programacionII = new QLineEdit(IntroducirNotas);
        programacionII->setObjectName("programacionII");
        programacionII->setGeometry(QRect(300, 130, 113, 22));
        matematicadiscreta = new QLineEdit(IntroducirNotas);
        matematicadiscreta->setObjectName("matematicadiscreta");
        matematicadiscreta->setGeometry(QRect(300, 250, 113, 22));
        teo = new QLineEdit(IntroducirNotas);
        teo->setObjectName("teo");
        teo->setGeometry(QRect(40, 300, 113, 22));
        programacionI = new QLineEdit(IntroducirNotas);
        programacionI->setObjectName("programacionI");
        programacionI->setGeometry(QRect(40, 130, 113, 22));
        introduccion = new QLineEdit(IntroducirNotas);
        introduccion->setObjectName("introduccion");
        introduccion->setGeometry(QRect(40, 200, 113, 22));
        matematicaII = new QLineEdit(IntroducirNotas);
        matematicaII->setObjectName("matematicaII");
        matematicaII->setGeometry(QRect(300, 80, 113, 22));
        fisica = new QLineEdit(IntroducirNotas);
        fisica->setObjectName("fisica");
        fisica->setGeometry(QRect(40, 250, 113, 22));
        label = new QLabel(IntroducirNotas);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 30, 91, 16));
        pushButton = new QPushButton(IntroducirNotas);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 340, 91, 31));
        tic = new QLineEdit(IntroducirNotas);
        tic->setObjectName("tic");
        tic->setGeometry(QRect(300, 300, 113, 22));
        label_8 = new QLabel(IntroducirNotas);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(300, 60, 81, 16));
        label_11 = new QLabel(IntroducirNotas);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(300, 220, 131, 16));
        label_3 = new QLabel(IntroducirNotas);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 60, 81, 16));
        label_10 = new QLabel(IntroducirNotas);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(300, 170, 49, 16));
        label_6 = new QLabel(IntroducirNotas);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 230, 49, 16));
        label_4 = new QLabel(IntroducirNotas);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 110, 101, 16));
        label_12 = new QLabel(IntroducirNotas);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(300, 280, 49, 16));
        label_9 = new QLabel(IntroducirNotas);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(300, 110, 101, 16));
        label_5 = new QLabel(IntroducirNotas);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 30, 91, 16));
        label_7 = new QLabel(IntroducirNotas);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 280, 221, 16));
        label_15 = new QLabel(IntroducirNotas);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(40, 180, 151, 16));
        label_13 = new QLabel(IntroducirNotas);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(40, 150, 141, 41));

        retranslateUi(IntroducirNotas);
        QObject::connect(pushButton, &QPushButton::clicked, IntroducirNotas, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(IntroducirNotas);
    } // setupUi

    void retranslateUi(QDialog *IntroducirNotas)
    {
        IntroducirNotas->setWindowTitle(QCoreApplication::translate("IntroducirNotas", "Dialog", nullptr));
        matematicaII->setText(QString());
        label->setText(QCoreApplication::translate("IntroducirNotas", "Cuatrimestre 1", nullptr));
        pushButton->setText(QCoreApplication::translate("IntroducirNotas", "Listo", nullptr));
        label_8->setText(QCoreApplication::translate("IntroducirNotas", "Matematica II:", nullptr));
        label_11->setText(QCoreApplication::translate("IntroducirNotas", "Matem\303\241tica discreta:", nullptr));
        label_3->setText(QCoreApplication::translate("IntroducirNotas", "Matematica I:", nullptr));
        label_10->setText(QCoreApplication::translate("IntroducirNotas", "L\303\263gica:", nullptr));
        label_6->setText(QCoreApplication::translate("IntroducirNotas", "F\303\255sica:", nullptr));
        label_4->setText(QCoreApplication::translate("IntroducirNotas", "Programaci\303\263n I:", nullptr));
        label_12->setText(QCoreApplication::translate("IntroducirNotas", "TIC:", nullptr));
        label_9->setText(QCoreApplication::translate("IntroducirNotas", "Programaci\303\263n II:", nullptr));
        label_5->setText(QCoreApplication::translate("IntroducirNotas", "Cuatrimestre 2", nullptr));
        label_7->setText(QCoreApplication::translate("IntroducirNotas", "Tecnolog\303\255a y estructura de ordenadores:", nullptr));
        label_15->setText(QCoreApplication::translate("IntroducirNotas", "de proyectos de software:", nullptr));
        label_13->setText(QCoreApplication::translate("IntroducirNotas", "Introducci\303\263n a la gesti\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntroducirNotas: public Ui_IntroducirNotas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRODUCIRNOTAS_H
