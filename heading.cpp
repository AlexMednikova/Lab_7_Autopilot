#include "heading.h"

Heading::Heading():Control() {}

bool Heading::ToUse()
{
    bool extra;
    cin >> extra;
    if (extra == 0)
    {
        cout << "Airplane turned left" << endl;
    }
    else 
    {
        cout << "Airplane turned right" << endl;
    }
    Status = extra;
    return Status; 
};