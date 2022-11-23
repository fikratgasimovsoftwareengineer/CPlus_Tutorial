#include <stdio.h>

/* Virtual class is used for avoiding multiple instances to be used 
 * In more detail, virtual class is helping to avoid copying base class properties to 
 * Some derived classes which are in fact, inherited by other derived classes!
 * NO AMBIGUITY!
 * */

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
