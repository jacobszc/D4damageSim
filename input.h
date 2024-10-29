
#ifndef INPUT_H
#define INPUT_H


#include "gear.h"


class input: public gear {

public:

int baseStats[4] {0,0,0,0};



input();
//////////////////////////////
void getpiece();
void printStats();


};



#endif // INPUT_H