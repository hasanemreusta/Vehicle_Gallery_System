#include "bike.h"

Bike::Bike() {}

void Bike::setCoolingType(QString coolingType){
    this->coolingType=coolingType;
}

QString Bike::getCoolingType(){
    return coolingType;
}

double Bike::fuelConsumption(double km){
    return 2*km;
}
