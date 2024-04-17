#ifndef CAR_H
#define CAR_H
#include "vehicle.h"

class Car: public Vehicle
{
    QString gearType;
public:
    void setGearType(QString gearType);
    QString getGearType();
    double fuelConsumption(double km);
    Car();
};

#endif // CAR_H
