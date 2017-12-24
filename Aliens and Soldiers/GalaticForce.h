//GalaticForce header file

#ifndef GALATICFORCE_H
#define GALATICFORCE_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Orkeel.h"
#include "Sniper.h"

using namespace std;

//unique grand child class of Orkeel (Alien) and Sniper (Soldier)

class GalaticForce:public Orkeel, public Sniper
{
public:
    // overridden functions
   void whichPlanet()
   {
        cout<<"We Protect the entire Universe!"<<endl;
    }
   void whichWeapon()
   {
        cout<<"Swords, guns, bombs, ships, you name it we got it!"<<endl;
    }
     // set data
   void setColorandHunt(string color, int hFar)
   {
      skinColor = color;
      howFar = hFar;
    }
    // print data
   void displayGalatic()
   {
      cout<<"Our color is "<<skinColor<<"! We will hunt you down even if you are "<<howFar<<" miles away!"<<endl; 
    }
   
};

#endif /* GALATICFORCE_H */

