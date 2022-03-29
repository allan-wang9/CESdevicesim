#ifndef POWER_H
#define POWER_H


class power
{
public:
    power();
    void changeBattery();
    int getBatteryCharge() const;
    void setBatteryCharge(int);
private:
    int batteryCharge;
};

#endif // POWER_H

