#include <vector>
#include<iostream>
using namespace std;


class input {

public:


vector<int> inputStats;


/// getters

void getpiece(){
  
   int stat=0;


   bool entering = true;
   bool VALID_TOKEN = true;
   cout << "enter 1st stat then press enter: ";                          // get user input in form of consecutive integers and store them 1 by 1 into a vector of ints
   cin >> stat;

   inputStats.push_back(stat);
 

    while(entering) {
 
      cout << "enter next stat then press enter, if your done enter -1 ";
      cin >> stat;
      if(stat == -1) {
           entering = false;
      }

      inputStats.push_back(stat);
      


    };

};

void printStats(){


    for(int i =0; i < inputStats.size(); i++) {
        cout << i+1 << ".) " << inputStats[i] << "\n" ;
    

    }
}

};