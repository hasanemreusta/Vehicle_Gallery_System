#include "cartype.h"
#include "ui_cartype.h"
#include "SaveCar.h"
#include "ui_SaveCar.h"
#include "vehicle.h"
#include "savemotor.h"
#include "calculateconsumption.h"

CarType::CarType(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CarType)
{
    ui->setupUi(this);
}

CarType::~CarType()
{
    delete ui;
}



void CarType::on_btnCar_clicked()
{
    MainMenu *m=new MainMenu();
    m->show();
}

void CarType::on_btnMotor_clicked()
{
    SaveMotor *saveMotor= new SaveMotor();
    saveMotor->show();
}





