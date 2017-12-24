//Xino header file

#ifndef XINO_H
#define XINO_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Alien.h"

using namespace std;

// Alien child class
class Xino:public Alien
{
protected:
    int height;
public:
    // overridden function
   void whichPlanet()
   {
        cout<<"I'm an Xino, our planets is dark and cold. She is know as ShadowHeart!"<<endl;
    }
};


#endif /* XINO_H */

