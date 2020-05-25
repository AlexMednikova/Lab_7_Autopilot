#include "tumblr.h"

Tumblr::Tumblr():Control() {}

bool Tumblr::ToUse()
{
    bool extra;
    cin >> extra;
    if (extra == 0)
    {
        cout << "Device is turned off" << endl;
    }
    else 
    {
        cout << "Device is turned on" << endl;
    }
    Status = extra;
    cout << "current status of device is " << Status << endl << endl;
    return Status; 
};