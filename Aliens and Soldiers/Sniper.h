//Sniper header file

#ifndef SNIPER_H
#define SNIPER_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Soldier.h"

using namespace std;

// Soldier child class
class Sniper: public Soldier
{
protected:
    int howFar;
public:
    // overridden function
   void whichWeapon()
   {
        cout<<"I need the rifle with the greatest range!"<<endl;
    }
};



#endif /* SNIPER_H */

