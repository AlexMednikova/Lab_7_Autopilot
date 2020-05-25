#pragma once

#include "tumblr.h"
#include "heading.h"
#include "speedchange.h"

class ControlUnit
{
  protected:
    Tumblr T;
    Heading H;
    SpeedChange SC;
  public:
    void ChangeStatus();
    bool ToUseIt(Control &C);
};

#include "controlunit.cpp"