#ifndef VEHICLE_H
#define VEHICLE_H
#include <QApplication>
class Vehicle
{
    QString brand;
    QString model;
    QString color;
    QString fuelType;
    QString hpInfo;
    QString year;
    QString vehicleType;
public:
    Vehicle();
    void setBrand(QString brand);
    void setModel(QString model);
    void setColor(QString color);
    void sethpInfo(QString hpInfo);
    void setFuelType(QString fuelType);
    void setYear(QString year);
    void setVehicleType(QString vehicleType);
    virtual double fuelConsumption(double km);
    QString getYear();
    QString getBrand();
    QString getModel();
    QString getColor();
    QString gethpInfo();
    QString getFuelType();
    QString getVehicleType();
    virtual ~Vehicle(){}

};

#endif // VEHICLE_H
