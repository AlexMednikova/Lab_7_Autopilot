#pragma once

#include "control.h"

class SpeedChange: public Control
{
  public: 
    SpeedChange();
    bool ToUse();
};

#include "speedchange.cpp"