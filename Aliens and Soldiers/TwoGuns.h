//TwoGuns header file
#ifndef TWOGUNS_H
#define TWOGUNS_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Zye.h"
#include "Sniper.h"


using namespace std;

//unique grand child class of Zye (Alien) and Sniper (Soldier)

class TwoGuns:public Zye, public Sniper
{
public:
    // overridden functions
   void whichPlanet()
   {
       cout<<"I can't tell you where I'm from!"<<endl;
    }
   void whichWeapon()
   {
        cout<<"I always use two guns! POW! POW!"<<endl;
    }
   // set data
   void setDeathsandShot(int dead, int veryFar)
   {
      zyeCount = dead;
      howFar = veryFar;
    }
   // print data
   void displayGuns()
   {
      cout<<"I've killed "<<zyeCount<<" aliens and my pistols have a range of "<<howFar<<" miles!"<<endl; 
    }
   
};




#endif /* TWOGUNS_H */

