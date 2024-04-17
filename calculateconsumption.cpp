#include "calculateconsumption.h"
#include "ui_calculateconsumption.h"

CalculateConsumption::CalculateConsumption(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CalculateConsumption)
{
    ui->setupUi(this);
}

CalculateConsumption::~CalculateConsumption()
{
    delete ui;
}

void CalculateConsumption::on_btnCalculateCons_clicked()
{

}

