//Tactical header file
#ifndef TACTICAL_H
#define TACTICAL_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Soldier.h"

using namespace std;

// Soldier child class
class Tactical: public Soldier
{
protected:
    int bombCount;
public:
    // overridden function
   void whichWeapon()
   {
        cout<<"Where is the C-4 and mines? I have traps to place."<<endl;
    }
};



#endif /* TACTICAL_H */

