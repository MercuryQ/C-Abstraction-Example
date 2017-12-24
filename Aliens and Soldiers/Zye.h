//Zye header file

#ifndef ZYE_H
#define ZYE_H

#include <cstdlib>
#include <iostream>
#include <string>
#include "Alien.h"

using namespace std;

// Alien child class
class Zye:public Alien
{
protected:
    int zyeCount;
public:
    // overridden function
   void whichPlanet()
   {
        cout<<"I'm an Zye, Born from the grains of GIA k-32!"<<endl;
    }
};


#endif /* ZYE_H */

