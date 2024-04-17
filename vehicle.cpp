#include "vehicle.h"
#include <QApplication>

void Vehicle::setBrand(QString brand){
    this->brand=brand;
}


QString Vehicle::getBrand(){
    return brand;
}

void Vehicle::setModel(QString model){
    this->model=model;
}

QString Vehicle::getModel(){
    return model;
}

void Vehicle::setYear(QString year){
    this->year=year;
}

QString Vehicle::getYear(){
    return year;
}

void Vehicle::sethpInfo(QString hpInfo){
    this->hpInfo=hpInfo;
}

QString Vehicle::gethpInfo(){
    return hpInfo;
}

void Vehicle::setColor(QString color){
    this->color=color;
}

QString Vehicle::getColor(){
    return color;
}

void Vehicle::setFuelType(QString fuelType){ //
    this->fuelType=fuelType;
}

QString Vehicle::getFuelType(){ //
    return fuelType;
}

void Vehicle::setVehicleType(QString vehicleType){
    this->vehicleType=vehicleType;
}

QString Vehicle::getVehicleType(){
    return vehicleType;
}

double Vehicle::fuelConsumption(double km){

}


Vehicle::Vehicle() {}
