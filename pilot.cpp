#include "pilot.h"

Pilot::Pilot()
{
    Name = "Alex Smith";
    LicenseId = 12345677;
}

Pilot::Pilot(string name, int licenseid)
{
    Name = name;
    LicenseId = licenseid;
}

void Pilot::ToTalk()
{
    cout << "Ladies and gentlemen" << endl;
    cout << "Welcome on board this aircraft" << endl;
    cout << "This is your Pilot Speaking" << endl;
    cout << "My name is " << Name <<  endl;
    cout << "I wish you a pleasant flight" << endl;
};

void Pilot::ToConnectDispatcher()
{
    cout << endl;
    cout << "- Tower, airborne" << endl;
    sleep(3);
    cout << "- Roger" << endl;
};

void Pilot::ToFlyPlane(Airplane &A)
{
    A.ToFlyP();
};

void Pilot::ToTaxiPlane(Airplane &A)
{
    A.ToTaxiP();
};