#pragma once

#include <string>
#include <unistd.h>
//#include <windows.h>
#include "autopilot.h"

class Airplane
{
 protected:
    bool MoveStatus;
    int SerialNumber;
    string OwnerCompany;
    Autopilot AP;
    ControlUnit CU;
 public:
    Airplane();
    Airplane(int serialnumber, string ownercompany);
    void ToFlyP();
    void ToTaxiP();
    void ToFlyA();
};

#include "airplane.cpp"