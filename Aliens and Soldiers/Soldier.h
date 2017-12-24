// Soldier header file

#ifndef SOLDIER_H
#define SOLDIER_H

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//abstract class
class Soldier
{

public:
    // virtual function
   virtual void whichWeapon()
   {
        cout<<"We have an unlimited supply of guns and ammunition!"<<endl;
    }
};




#endif /* SOLDIER_H */

