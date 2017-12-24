//Orkeel header file

#ifndef ORKEEL_H
#define ORKEEL_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Alien.h"

using namespace std;

// Alien child class
class Orkeel:public Alien
{
protected:
    string skinColor;
public:
    // overridden function
   void whichPlanet()
   {
        cout<<"I'm an Orkeel, from the mists of OrginKnight!"<<endl;
    }
};


#endif /* ORKEEL_H */

