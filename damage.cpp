
#include "damage.h"

class damage {

   damage::damage() {


   };


   int SUM_AS(vector<int>ADDI_STATS) {
      int sum = 0;
      for (int i = 0; i < ADDI_STATS.size(); i++) {
         sum += ADDI_STATS[i];
      }
      return sum;
   };

    int MULT_MS(vector<int>MULT_STATS) {
        int mult = 1;
        for (int i = 0; i < MULT_STATS.size(); i++) {
            mult *= MULT_STATS[i];
        }
        return mult;
    };

    int CALC_AVG_DAM(AVG_DAM_PARAM x) {
        int avg_dam = 0;
        avg_dam = 

        (x.MinWD + x.MaxWD / 2) * (x.SP) * (1 + x.MSP/x.CCF) * (1 + x.SUM_ADDI) * (1 + x.MULT_SUMM) * (1 + x.GM) * (x.EDR);
        
        
        
        
        
        return avg_dam;
   

    };



};