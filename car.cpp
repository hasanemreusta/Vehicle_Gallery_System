#include "car.h"

Car::Car() {}

void Car::setGearType(QString gearType){
    this->gearType=gearType;
}

QString Car::getGearType(){
    return gearType;
}

double Car::fuelConsumption(double km){
    return 5*km;
}
