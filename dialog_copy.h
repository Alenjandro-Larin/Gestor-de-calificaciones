#ifndef DIALOG_COPY_H
#define DIALOG_COPY_H

#include <QDialog>

namespace Ui {
class Dialog_copy;
}

class Dialog_copy : public QDialog_copy
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
};

#include <iostream>
#include <string>
#include <vector>

#endif // DIALOG_COPY_H
