#ifndef CONNECTION_H
#define CONNECTION_H

#include "power.h"

class connection{

private:
    power devicePower;
    bool connectionStatus;
    int connectionLevel;

public:
    connection();
    int testConnection();
    int resetConnection();
    int getConnectionLevel() const;
    void setConnectionLevel(int);
};

#endif // CONNECTION_H
