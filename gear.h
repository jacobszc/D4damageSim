#ifndef GEAR_H
#define GEAR_H

#include "damage.h"

struct set {

   gear helm;
   gear chest;
   gear gloves;
   gear pants;
   gear boots;
   gear OHW;
   gear THW;
   gear amulet;
   gear ring;
   gear OffH;

     
};


enum GearType {
    HELM,  // 0
    CHEST, // 1
    GLOVES, //2
    PANTS, // 3
    BOOTS, // 4
    ONE_H_WEAP, // 5
    TWO_H_WEAP, // 6
    AMULET, // 7
    RING,  //8
    OFFHAND, // 9


};

class gear: public damage {

    // default constrcutor
     
  
    
   public:   
   
   gear(); // default contr

     


      gear(int piece_Stats[], int piece_type); // constructor with an array of ints represetning user input stats.
      
       
   /////// other fuction defs

             void printBaseStats();

      /// prototypes ////

     
    
set newSet;
    // core stats ////
    int CoreStats[4];
   
    int STR;
     int DEX;
    int INT;
    int WP;
   
    ///////////////////////////////////////

    // offesive stats

    int Wdam;
    int Wspeed;
    int AttSpeed;
    int CritChance;
    int CritDamage;
    int OverPowerChance;
    int OverPowerDam;
    int VunDam;
    int CCdam; /// damage vs CCed enemy
    int Closedam;
    int Basicdam;
    int CoreDam;
    int LuckyHitExecute; // need to do some research on this one
    int thorns;

    ///////////////////////////////////////////////////////// defensive stats///////

   int MaxLife;
   int PotCharges;
   int LOK; // life on kill
   int Lregen;
   int Armor;
   int ArmorCont; // contribution from armour
   int DodgeChan;
   int XResis; // no idea about this

   ////////////////// utility stats //////////////

   int maxFury;
   int furyregen;
   int speed;
   int CDR;
   int LHCB; // lucky hit chance bonus




  





};

#endif // GEAR_H