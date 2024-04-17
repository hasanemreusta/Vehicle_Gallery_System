#ifndef CARTYPE_H
#define CARTYPE_H

#include <QDialog>

namespace Ui {
class CarType;
}

class CarType : public QDialog
{
    Q_OBJECT
    bool is;
public:
    explicit CarType(QWidget *parent = nullptr);
    ~CarType();

private slots:
    void on_btnCar_clicked();

    void on_btnMotor_clicked();

    void on_btnCar_clicked(bool checked);

    void on_btnCalculate_clicked();

private:
    Ui::CarType *ui;
};

#endif // CARTYPE_H
