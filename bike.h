#ifndef BIKE_H
#define BIKE_H
#include "vehicle.h"

class Bike:public Vehicle
{
    QString coolingType;
public:
    Bike();
    void setCoolingType(QString coolingType);
    double fuelConsumption(double km);
    QString getCoolingType();
};

#endif // BIKE_H
