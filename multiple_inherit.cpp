#include <stdio.h>
#include <string>
#include <iostream>

/*
 * Multiple Inheritance with public and Private members
 *
 * */

using namespace std;

class Father {

    public:
           
        void inheritFather(){
	
	    fprintf(stdout,"***Father 1***\n");
	}	   

	int getDigits(){
	
	    return digits;
	}	

    private:

	int digits=12;

	void inheritF(){
	
	    fprintf(stdout, "***Father 2***\n");
	
	}
};

class Mother {

    public:

        void inheritMother(){
	
	     fprintf(stdout, "Mother 1\n");
	}

    private:

	void inheritM(){
	
	    fprintf(stdout, "Mother 2\n");
	}
};

class Child: private Father, public Mother{


    public:
 	    void printMother(){
	    
	     cout <<   getDigits() << endl;
	    }
};

// Main thread!
//
int main(){

    Child child;
    
    child.printMother();
}
