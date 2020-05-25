#pragma once

#include <unistd.h>
//#include <windows.h>
#include "controlunit.h"

class Autopilot
{
  protected:
    bool Status;
    int Id;
    ControlUnit CU;
  public:
    Autopilot();
    Autopilot(int id);
    void GetSignal();
    void ChangeStatus();
};

#include "autopilot.cpp"