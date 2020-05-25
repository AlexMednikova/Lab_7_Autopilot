#include "airplane.h"

Airplane::Airplane()
{
    MoveStatus = 0;
    SerialNumber = 358467;
    OwnerCompany = "Emirates";
}

Airplane::Airplane(int serialnumber, string ownercompany) 
{
    MoveStatus = 0;
    SerialNumber = serialnumber;
    OwnerCompany = ownercompany;
}

void Airplane::ToTaxiP()
{
    cout << "You are on the ground" << endl << endl;
    sleep(2);
    cout << "You should turn on a Control Unit" << endl << endl;
    CU.ChangeStatus();
    sleep(2);
    cout << "Now you should start driving to the runway" << endl;
    bool action = 1;
    SpeedChange SC;
    Heading H;
    while (action == 1)
    {
        int extra;
        cout << "Enter 1 - to change speed/ 2 - to change direction" << endl;
        cin >> extra;
        switch(extra)
        {
            case 1: cout << "Enter 1 - to speed up/ 0 - to slow down" << endl; CU.ToUseIt(SC); break;
            case 2: cout << "Enter 1 - to turn right/ 0 - to turn left" << endl; CU.ToUseIt(H); break;
        }
    sleep(2);
    cout << endl;
    cout << "Do you need to change some parametres again? (enter 1 - yes/ 0 - no)" << endl;
    cin >> action;
    }
    cout << endl;
    cout << "You are on the runway" << endl << endl;
    sleep(2);
    cout << "You are taking off" << endl << endl;
    sleep(2);
};

void Airplane::ToFlyP()
{
    cout << "You took off" << endl << endl;
    sleep(2);
    cout << "You need to manage the flight parametres" << endl;
    bool action = 1;
    SpeedChange SC;
    Heading H; 
    while (action == 1)
    {
        int extra;
        cout << "Enter 1 - to change speed/ 2 - to change direction" << endl;
        cin >> extra;
        switch(extra)
        {
            case 1: cout << "Enter 1 - to speed up/ 0 - to slow down" << endl; CU.ToUseIt(SC); break;
            case 2: cout << "Enter 1 - to turn right/ 0 - to turn left" << endl; CU.ToUseIt(H); break;
        }
    cout << endl;
    cout << "Do you need to change some parametres again? (enter 1 - yes/ 0 - no)" << endl;
    cin >> action;
    cout << endl;
    }
    cout << "You are flying in the right direction" << endl;
    sleep(2);
    cout << "You are at destination. Bye" << endl;
    sleep(2);
};

void Airplane::ToFlyA()
{
    cout << "You took off" << endl << endl;
    sleep(2);
    AP.GetSignal();
    cout << "You are flying in the right direction" << endl;
    sleep(2);
    cout << "You are at destination. Bye" << endl;
    sleep(2);
};



