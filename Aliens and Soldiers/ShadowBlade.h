//ShadowBlade header file

#ifndef SHADOWBLADE_H
#define SHADOWBLADE_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Orkeel.h"
#include "Tactical.h"

using namespace std;

//unique grand child class of Orkeel (Alien) and Tactical (Soldier)

class ShadowBlade:public Orkeel, public Tactical
{
public:
     // overridden functions
   void whichPlanet()
   {
        cout<<"It's a vague memory!"<<endl;
    }
   void whichWeapon()
   {
        cout<<"My blade is all I require."<<endl;
    }
   
   // set data
   void setColorandDodge(string skin, int smoke)
   {
      skinColor = skin;
      bombCount = smoke;
    }
    // print data
   void displayShadow()
   {
      cout<<"My color is "<<skinColor<<". I have dodged "<<bombCount<<" bombs without even trying!"<<endl; 
    }
   
};




#endif /* SHADOWBLADE_H */

