#ifndef CALCULATECONSUMPTION_H
#define CALCULATECONSUMPTION_H

#include <QDialog>

namespace Ui {
class CalculateConsumption;
}

class CalculateConsumption : public QDialog
{
    Q_OBJECT

public:
    explicit CalculateConsumption(QWidget *parent = nullptr);
    ~CalculateConsumption();

private slots:
    void on_btnCalculateCons_clicked();

private:
    Ui::CalculateConsumption *ui;
};

#endif // CALCULATECONSUMPTION_H
