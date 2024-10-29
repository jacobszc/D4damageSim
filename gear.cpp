#include "gear.h"

gear::gear(){

     INT = 0;
     STR =0;
     WP=0;
     DEX =0;
}
////////////////////////////////////////


gear::gear(int x[], int pieceType) {
      
         INT = x[0];
         DEX = x[1];
         STR = x[2];
         WP = x[3];
        

            };








void gear::printBaseStats(){

    
    
    cout << "agility: " << INT << "\n";
    cout << "dexterity: " << DEX << "\n";
    cout << "strength: " << STR << "\n" ;
    cout << "WillPower: " << WP<< "\n";


    
}