#ifndef POWER_H
#define POWER_H


class power
{
public:
    power();
    void changeBattery();
    int getBatteryCharge() const;
    
private:
    int batteryCharge;
};

#endif // POWER_H

