#pragma once

#include "control.h"

class Heading: public Control
{
  public:
    Heading();
    bool ToUse();
};

#include "heading.cpp"