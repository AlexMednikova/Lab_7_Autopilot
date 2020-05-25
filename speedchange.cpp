#include "speedchange.h"

SpeedChange::SpeedChange():Control() {}

bool SpeedChange::ToUse()
{
    bool extra;
    cin >> extra;
    if (extra == 0)
    {
        cout << "Airplane slowed down" << endl;
    }
    else 
    {
        cout << "Airplane gained speed" << endl;
    }
    Status = extra;
    return Status; 
};