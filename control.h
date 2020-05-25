#pragma once

#include <iostream>
#include <string>

using namespace std;

class Control
{
  protected:
    bool Status;
  public:
    Control();
    Control(bool status);
    virtual bool ToUse();
};

#include "control.cpp"