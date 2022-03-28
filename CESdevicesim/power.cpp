#include "power.h"

power::power()
{
    this->batteryCharge = batteryCharge;
}

//getter for batteryCharge
int power::getBatteryCharge() const {return batteryCharge;}

//seter for batteryCharge
void power::setBatteryCharge(int charge) {batteryCharge = charge;}
