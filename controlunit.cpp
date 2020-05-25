#include "controlunit.h"

void ControlUnit::ChangeStatus()
{
    cout << "Enter 0 to turn off a control unit" << endl;
    cout << "Enter 1 to turn on a control unit" << endl;
    Tumblr T;
    T.ToUse();
};

bool ControlUnit::ToUseIt(Control &C) 
{
   C.ToUse();
};

