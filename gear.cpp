class gear {

    // constrcutor
     
  
    
   public:   gear():

      AGIL(0) {};


      gear(int x):

      AGIL(x) {};
    

    // core stats ////


    int AGIL;
    int DEX;
    int STR;
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

