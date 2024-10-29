
#include<iostream>
#include "gear.h"
#include "input.h"

using namespace std;

// def constr
input::input(){

    for(int i=0; i<4; i++) {

        baseStats[i]=0;
    }
};

////////////////////////////////////////////////////



void input::getpiece(){
  
   int stat;
   


   bool entering = true;
   bool VALID_TOKEN = true;
   cout << "enter 1st stat then press enter: ";                          // get user input in form of consecutive integers and store them 1 by 1 into a vector of ints
   cin >> stat;
int i =0;
   baseStats[i] = stat;
 
 i++;
    while(entering) {
 
      cout << "enter next stat then press enter, if your done enter -1 ";
      cin >> stat;
      if(stat == -1) {
           entering = false;
           break;
      }

      baseStats[i] = stat;
      
   i++;

    };

    

};
/// ////////////////////////////////////////////////////
void input::printStats(){


    for(int i =0; i < 4; i++) {
        cout << i+1 << ".) " << baseStats[i] << "\n" ;
    

    }
};

