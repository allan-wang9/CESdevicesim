#ifndef CONNECTION_H
#define CONNECTION_H

#include "power.h"

class connection{

private:
    power devicePower;
    bool connectionStatus;    
    
public:
    connection();
    int testConnection();
    int resetConnection();
};

#endif // CONNECTION_H
