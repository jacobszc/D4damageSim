#include "character.h"
#include "gear.h"




character::character() {
    hasGear = 0;
   
}

character::character(set set) {

    copy_set(set);

    
}

void character::copy_set(set GEAR_SET) {
    character::mySet.helm = GEAR_SET.helm;
    character::mySet.chest = GEAR_SET.chest;
    character::mySet.pants = GEAR_SET.pants;
    character::mySet.amulet = GEAR_SET.amulet;
    character::mySet.gloves = GEAR_SET.gloves;
    character::mySet.boots = GEAR_SET.boots;
    character::mySet.OHW = GEAR_SET.OHW;
    character::mySet.OffH = GEAR_SET.OffH;
    character::mySet.ring = GEAR_SET.ring;
    character::mySet.THW = GEAR_SET.THW;
       

};



