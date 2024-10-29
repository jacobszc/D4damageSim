#ifndef DAMAGE_H
#define DAMAGE_H
#include <vector>
#include<iostream>
#include "character.h"

using namespace std;


struct AVG_DAM_PARAM {

   int MinWD;  // minimum weapon damage
int MaxWD;  // u guessed it
int SP; // skill percent
int MSP; // main stat percent
int SUM_ADDI; // will  store all additive stats after summation function
vector<int> ADDI_STATS; // will store all additive stats
int MULT_SUMM; // will store all multiplicative stats after multiplication
vector<int> MULT_STATS; // will store all multiplicative stats
int GM; // global multiplier
int EDR = 0.15; // enemy damage reduction ASSUMING LEVEL 60
int CCF = 1; // class cooeficient. unknown value so ill assume 1 for now

   




};



class damage: public character {
public:
   damage(); 
   



// damage calculation variables










////////
// damage calculation functions
int summation(vector<int>ADDI_STATS);// sum all additive stats
int multiplicativeSum(vector<int>MULT_STATS); // multiply all multiplicative stats
int CALC_AVG_DAM(AVG_DAM_PARAM x); // calculate average damage



};


#endif // DAMAGE_H