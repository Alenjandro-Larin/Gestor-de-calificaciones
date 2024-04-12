/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *ver;
    QPushButton *salir;
    QPushButton *promedio;
    QPushButton *introducir;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->setMinimumSize(QSize(238, 265));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ver = new QPushButton(centralwidget);
        ver->setObjectName("ver");
        ver->setGeometry(QRect(40, 80, 161, 41));
        salir = new QPushButton(centralwidget);
        salir->setObjectName("salir");
        salir->setGeometry(QRect(80, 220, 75, 24));
        promedio = new QPushButton(centralwidget);
        promedio->setObjectName("promedio");
        promedio->setGeometry(QRect(40, 150, 161, 41));
        introducir = new QPushButton(centralwidget);
        introducir->setObjectName("introducir");
        introducir->setGeometry(QRect(40, 20, 161, 41));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(salir, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Lobby", nullptr));
        ver->setText(QCoreApplication::translate("MainWindow", "Ver Notas", nullptr));
        salir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        promedio->setText(QCoreApplication::translate("MainWindow", "Promedio total del curso", nullptr));
        introducir->setText(QCoreApplication::translate("MainWindow", "Introducir Notas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
