#include "control.h"

Control::Control()
{
    Status = false;
}

Control::Control(bool status)
{
    Status = status;
}

bool Control::ToUse() {};

