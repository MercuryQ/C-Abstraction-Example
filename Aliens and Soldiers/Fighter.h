//Fighter header file

#ifndef FIGHTER_H
#define FIGHTER_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Soldier.h"

using namespace std;

// Soldier child class
class Fighter: public Soldier
{
protected:
    string fightingStyle;
public:
   // overridden function
   void whichWeapon()
   {
        cout<<"I don't need a weapon! I have my fists!"<<endl;
    }
};


#endif /* FIGHTER_H */

