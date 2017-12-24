/* 
 * File:   main.cpp
 * Author: Nicholas MercuryQ
 * About: Aliens and Soldiers is an application containing abstract classes and multiple inheritance
 * Created on October 31, 2017, 4:16 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "GalaticForce.h"
#include "PeaceMaker.h"
#include "ShadowBlade.h"
#include "SuperSlime.h"
#include "TwoGuns.h"



using namespace std;


int main(int argc, char** argv) 
{
    // object from the grand child class GalaticForce
    GalaticForce officer;
    cout<<"Officer of the GalaticForce"<<endl;
    cout<<"---------------------------"<<endl;
    officer.whichPlanet();
    officer.whichWeapon();
    officer.setColorandHunt("Blue", 700000000);
    officer.displayGalatic();
    cout<<"---------------------------"<<endl;
    cout<<"\n"<<endl;
    
    
    // object from the grand child class ShadowBlade
    ShadowBlade darkMaster;
    cout<<"Dark Master of the ShadowBlade Organization"<<endl;
    cout<<"-------------------------------------------"<<endl;
    darkMaster.whichPlanet();
    darkMaster.whichWeapon();
    darkMaster.setColorandDodge("night", 900);
    darkMaster.displayShadow();
    cout<<"-------------------------------------------"<<endl;
    cout<<"\n"<<endl;
    
    // object from the grand child class PeaceMaker
    PeaceMaker holyGuard;
    cout<<"Holy Guard of the PeaceMaker Foundation"<<endl;
    cout<<"--------------------------------------"<<endl;
    holyGuard.whichPlanet();
    holyGuard.whichWeapon();
    holyGuard.setCountsandPeace(180000, "Healing");
    holyGuard.displayPeace();
    cout<<"--------------------------------------"<<endl;
    cout<<"\n"<<endl;
    
    // object from the grand child class TwoGuns
    TwoGuns spaceSlinger;
    cout<<"Space Slinger of the TwoGuns Outlaws"<<endl;
    cout<<"------------------------------------"<<endl;
    spaceSlinger.whichPlanet();
    spaceSlinger.whichWeapon();
    spaceSlinger.setDeathsandShot(2000, 900);
    spaceSlinger.displayGuns();
    cout<<"------------------------------------"<<endl;
    cout<<"\n"<<endl;
    
    // object from the grand child class TwoGuns
    SuperSlime poisonLeech;
    cout<<"Poison Leech of the SuperSlime Hive"<<endl;
    cout<<"-----------------------------------"<<endl;
    poisonLeech.whichPlanet();
    poisonLeech.whichWeapon();
    poisonLeech.setHeightandFight(20, "Venom");
    poisonLeech.displaySlime();
    cout<<"-----------------------------------"<<endl;
    
    return 0;
}

