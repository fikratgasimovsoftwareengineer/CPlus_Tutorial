#include <stdio.h>
#include <iostream>

using namespace std;

/*Virtual Function is used to be override in inheritance! 
 * this overriden helps derived class to use same name function member of base class
 * but with different signature(data type must be the same)!
 * We need to add overriden keyword beside the function on derived class to ensure that 
 * there is no missing typing error on the name of virtual function and they match between base and derived class
 * */

class Base {

   public:
	 virtual int print(int b){


	       fprintf(stdout, "**value : %d\n", b);
	       return b;
	   }

};


class Derived:public Base {

    public:
        int print(int d) override{
	
	    fprintf(stdout, "**DRIVE PRINT: %d\n", d);
	    return d;
	}	   

};

int main(){
 
    Derived der;
 
    Base *base = &der;
    
    cout << base->print(12) << endl;

    return 0;

}
