#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;


class Default_Constructor{

    //PRivate members 
    private:
	    int rollno;
	    string name;
	    double fee;
    public:
	    Default_Constructor();
	    
	    void display();

	    void setRoll(int);

	    void setName(string);

	    void setFee(double); 
};

// Default Constructor

// Initialization of Private Members with Only Constructor!!
/*==================Here I used default constructor to call Set Members ==================*/
Default_Constructor::Default_Constructor(){

    cout << "Enter Roll: ";
    setRoll(12); 
      
     
    cout << "Enter the name: ";
    setName("Fikrat");

    cout << "Enter the fee: ";
    setFee(3.5);

}
//=========Set Members===================
void Default_Constructor::setRoll(int b_roll){

    rollno = b_roll;
    fprintf(stdout, "ROLL: %d\n", rollno);
}

void Default_Constructor::setName(string name_s){

    name = name_s;

    fprintf(stdout, "Name: %s\n", name.c_str());
}

void Default_Constructor::setFee(double fee_set){

    fee = fee_set;
    fprintf(stdout, "Fee: %f\n", fee);
}

/*void Default_Constructor::display(){


    cout << endl << rollno << '\t' << name << '\t' << fee << endl;

}*/

int main(int argc, char ** argv){
 
    Default_Constructor def;
   
    return 0;


}
