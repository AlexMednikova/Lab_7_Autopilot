#include <iostream>
#include <string>
#include <unistd.h>
//#include <windows.h>
#include "control.h"
#include "tumblr.h"
#include "speedchange.h"
#include "heading.h"
#include "controlunit.h"
#include "autopilot.h"
#include "airplane.h"
#include "pilot.h"

using namespace std;

int main()
{
    Pilot P = Pilot();
    Airplane A = Airplane();
    bool action = 1;
    while (action == 1)
    {
        cout << "Today you will try yourself as a pilot" << endl << endl;
        sleep(2);
        cout << "First you should greet passengers" << endl << endl;
        sleep(2);
        P.ToTalk();
        cout << endl;
        sleep(2);
        P.ToTaxiPlane(A);
        cout << "Choose how to fly a plane (enter 1 - by pilot/ 0 - using autopilot)"<< endl;
        int extra;
        cin >> extra;
        switch(extra)
        {
            case 0: P.ToConnectDispatcher(); cout << endl; sleep(2); A.ToFlyA(); break;
            case 1: P.ToConnectDispatcher(); cout << endl; sleep(2); P.ToFlyPlane(A); break; 
        }
        sleep(2);
        cout << "Enter 1 - to try again/ 0 - to stop" << endl;
        cin >> action;
    }
    return 0;
}