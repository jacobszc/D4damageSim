#ifndef ROGUE_H
#define ROGUE_H

#include "character.h";

class rogue : public character {


rogue();





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

   
   int speed;
   int CDR;
   int LHCB; // lucky hit chance bonus

};


#endif