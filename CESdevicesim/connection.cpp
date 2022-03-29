#include "connection.h"
#include "power.h"

//constructor
connection::connection(){
    this->connectionStatus = false;
    this->connectionLevel = 0;
    
}

//testConnection() -> return 0 if an error is detected (no 9V battery), otherwise return 1
int connection::testConnection(){
    if (devicePower.getBatteryCharge() <= 0){
        return 0;
    } else {
        return 1;
    }
}

//resetConnection -> return 0 if connection cannot be reset, otherwise return 1 
int connection::resetConnection(){
    return 1; //will require more info on what determines a "reset"
}

//getter for connectionLevel
int connection::getConnectionLevel() const {return connectionLevel;}
