#pragma once

#include <string>
#include "airplane.h"

class Pilot
{
  protected:
    int LicenseId;
    string Name;
  public:
    Pilot();
    Pilot(string name, int licenseid);
    void ToTalk();
    void ToConnectDispatcher();
    void ToFlyPlane(Airplane &A);
    void ToTaxiPlane(Airplane &A);
};

#include "pilot.cpp"
