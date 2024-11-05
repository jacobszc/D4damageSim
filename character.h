
#ifndef CHARACTER_H
#define CHARACTER_H

#include "gear.h"

class character {

  public:

    enum Char_Class {

        BARB,
        ROGUE,
        DRUID,
        SORCERER,
        NECRO,
        SPIRITBORN
    };

    bool hasGear = 1; // check to see if your wearing something. if default constrctor called, will switch to 0

    // instatiate a chracter with each piece of gear the user enters

    // base case naked as fuck

          character() {
            hasGear =0;  // naked
          };

          character(set set);
        
      void copy_set(set GEAR_SET);



      


     ////////////////////////////////////// vars /////////

     set mySet; /// will inherit the set from gear   



// overloaded equal operator to assign dear sets to gear sets
};
#endif