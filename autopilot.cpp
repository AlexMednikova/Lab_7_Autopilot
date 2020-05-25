#include "autopilot.h"

Autopilot::Autopilot()
{
    Status = 0;
    Id = 694974398;
}

Autopilot::Autopilot(int id)
{
    Status = 0;
    Id = id;
}

void Autopilot::ChangeStatus()
{
    cout << "Enter 0 to turn off an autopilot" << endl;
    cout << "Enter 1 to turn on an autopilot" << endl;
    Tumblr T;
    if (T.ToUse() == 1)
    {
        Status = 1;
        cout << "Autopilot is turned on";
    }
    else 
    {
        Status = 0;
        cout << "Autopilot is turned off";
    }
};

void Autopilot::GetSignal()
{
    cout << "Set your parameters" << endl;
    int action = 1;
    sleep(2);
    cout << endl;
    while (action == 1)
    {
        cout << "Which parameter do you need to change?" << endl;
        cout << "Enter 1 to change device status" << endl;
        cout << "Enter 2 to change speed" << endl;
        cout << "Enter 3 to change direction" << endl;
        int extra;
        cin >> extra;
        Tumblr T;
        SpeedChange SC;
        Heading H;
        string change;
        switch(extra)
        {
            case 1: cout << "1 - turn on/ 0 - turn off" << endl; CU.ToUseIt(T); break;
            case 2: cout << "1 - to speed up/ 0 - to slow down" << endl; CU.ToUseIt(SC); break;
            case 3: cout << "1 - to turn right/ 0 - to turn left" << endl; CU.ToUseIt(H); break;
        }
        sleep(2);
        cout << "Do you want to change one more parameter ?(enter 1/yes or enter 0/no)" << endl;
        cin >> action;
    }
};