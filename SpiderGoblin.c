#include<stdio.h>
#include<stdlib.h>
#include<time.h>


 int spiderManAttacks(int a){  //Spiderman is attacking in here
	
	enum MoveS {
		Move1=6,Move2=9,Move3=10
};
	enum MoveS moveSpiderMan ;
	
	int randomnumber ;
	 randomnumber=1+rand()%100 ;
	
	if(randomnumber>=1 && randomnumber<=45){
		
			printf("Spider-Man uses spider-sense!\n");
     moveSpiderMan=Move1 ;
	
	}
  else if(randomnumber>45 && randomnumber<=65){
	
	
	printf("Spider-Man shoots spider web!\n");
     moveSpiderMan=Move2 ;	
     
	}
 else if(randomnumber>65 && randomnumber<=100){
 	
	printf("Spider-Man uses super agility and speed!\n");
    moveSpiderMan=Move3 ;
		
}
     return moveSpiderMan ;  //returning a value

}

int greenGoblinAttacks(int b){ //Green Goblin is attacking in here
	
			
	enum MoveG {
		
		Move4=5,Move5=7,Move6=13
		
	};
	
		enum MoveG moveGreenGoblin ; 
		
	int randomnumber2 ;
   randomnumber2=1+rand()%100 ;
	
	if(randomnumber2>=1 && randomnumber2<=45){
	moveGreenGoblin= Move4 ;
   	
   	printf("Green Goblin throws a jack-o’-lantern!\n");
		
	}
	
  else	if(randomnumber2>45 && randomnumber2<=85){
		
	printf("Green Goblin sends out razor bats!\n");
	moveGreenGoblin=Move5 ;	
}
   else if(randomnumber2>85 && randomnumber2<=100){
		
	printf("Green Goblin throws a ghost bomb!\n ");
		moveGreenGoblin=Move6 ;
		
}
    return moveGreenGoblin ; //returning a value

}

void printEnergies(int spiderManEnergy,int greenGoblinEnergy ){

  	printf("Spider-Man:%d      	Green Goblin:%d\n",spiderManEnergy,greenGoblinEnergy); // printing energies
  			
  }
  
  int main()
  {

  	int throw ; //head or tail
  	int greenGoblinEnergy=100 ;
  	int spiderManEnergy=100 ;
  	int moveSpiderMan,moveGreenGoblin ; 
  	int randomnumber ;
  	int randomnumber2 ;
  	
  	srand(time(NULL)); // random numbers
  	randomnumber=1+rand()%100 ;	
  
  	printf("Battle begins!!!\n");
  	

  	srand(time(NULL));
  	throw=rand()%2 ;
 
  	
  	if(throw==0){ // this means that spiderman begins the attack
	  
  	
    	while(spiderManEnergy>0 && greenGoblinEnergy>0 ){

  		
  		greenGoblinEnergy-=(spiderManAttacks(moveSpiderMan));
  		printEnergies(spiderManEnergy,greenGoblinEnergy);
    	randomnumber=1+rand()%100 ;	
    	
  	
  		spiderManEnergy-=(greenGoblinAttacks(randomnumber));
  		printEnergies(spiderManEnergy,greenGoblinEnergy);
         randomnumber2=1+rand()%100 ; 
  }
    
  		
	  }
  	
  	else if(throw==1){ // this means that green goblin begins the attack
	
  	
  		while(spiderManEnergy>0 && greenGoblinEnergy>0 ){
    
  		
  		spiderManEnergy-=(greenGoblinAttacks(moveGreenGoblin));
  		printEnergies(spiderManEnergy,greenGoblinEnergy);
         randomnumber2=1+rand()%100 ;
  		
  		greenGoblinEnergy-=(spiderManAttacks(moveSpiderMan));
  		printEnergies(spiderManEnergy,greenGoblinEnergy);
       	randomnumber=1+rand()%100 ;	
	  }
  	 
  	
  }
  	
  	printf("Battle ends!"); 
  	
  	if(greenGoblinEnergy<spiderManEnergy)
		printf("\nSpider-Man wins! Yeah Spidey rules!");
	
	else if(spiderManEnergy<greenGoblinEnergy)
		printf("\nGreen Goblin won! Yeah Jack-o'-lanterns! ");
	
  	
  	return 0;
  	
  	

  	
  }


