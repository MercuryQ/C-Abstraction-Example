// Alien header file

#ifndef ALIEN_H
#define ALIEN_H

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//abstract class
class Alien
{

public:
    // virtual function
   virtual void whichPlanet()
   {
        cout<<"You are an Alien, Only you know where you're from!"<<endl;
    }
};


#endif /* ALIEN_H */

