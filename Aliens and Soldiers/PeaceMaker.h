//PeaceMaker header file

#ifndef PEACEMAKER_H
#define PEACEMAKER_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Zye.h"
#include "Fighter.h"

using namespace std;

// unique grand child class of Zye (Alien) and Fighter (Soldier)

class PeaceMaker:public Zye, public Fighter
{
public:
     // overridden functions
   void whichPlanet()
   {
        cout<<"My planet is very Peaceful!"<<endl;
    }
   void whichWeapon()
   {
        cout<<"I don't engage in violence."<<endl;
    }
    // set data
   void setCountsandPeace(int blessed, string holy)
   {
      zyeCount = blessed ;
      fightingStyle = holy;
    }
     // print data
   void displayPeace()
   {
      cout<<"I have saved over "<<zyeCount<<" species from different planets. I have no fighting style, it's "<<fightingStyle<<"."<<endl; 
    }
   
};




#endif /* PEACEMAKER_H */

