#ifndef SHOW_H
#define SHOW_H

#include <QDialog>

namespace Ui {
class show;
}

class show : public QDialog
{
    Q_OBJECT

public:
    explicit show(QWidget *parent = nullptr);
    ~show();

private:
    Ui::show *ui;
};

#endif // SHOW_H
