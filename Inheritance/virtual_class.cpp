#include <stdio.h>

/* virtual class is used for avoiding multiple instances to be used */

class Person{

   public:
	   void showPerson(){
	   
	       fprintf(stdout, "Virtual Base Class\n");
	   }
	
};


class Arm: virtual public Person{
};

class Leg: virtual public Person{
};

class All: public Arm, public Leg{
};


int main(){

    All all;	
    all.showPerson();
}
