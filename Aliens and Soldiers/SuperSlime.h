//SuperSlime header file

#ifndef SUPERSLIME_H
#define SUPERSLIME_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Xino.h"
#include "Fighter.h"

using namespace std;

//unique grand child class of Xino (Alien) and Fighter (Soldier)

class SuperSlime:public Xino, public Fighter
{
public:
    // overridden functions
   void whichPlanet()
   {
        cout<<"My home was destroyed!"<<endl;
    }
   void whichWeapon()
   {
        cout<<"However, I've been trained in the deadly arts of combat!"<<endl;
    }
   // set data
   void setHeightandFight(int myHeight, string myStyle)
   {
      height = myHeight;
      fightingStyle = myStyle;
    }
   // print data
   void displaySlime()
   {
      cout<<"I'm "<<height<<" feet tall and I spew "<<fightingStyle<<endl; 
    }
   
};



#endif /* SUPERSLIME_H */

