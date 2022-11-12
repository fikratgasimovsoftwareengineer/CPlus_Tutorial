#include <iostream>

/*
 * Final Keyword is used for restricting Class Inheritance 
 * And Function Overriding!
 *
 * */

// Final Keyword will not allow Parent Class
// to be Inherited!
class Parent final{

    public:
        void show(){
        
            // inside parent
	    fprintf(stdout, "...Parent...\n");
        }

};

class Child:Parent{

    public:
        void print(){
    
            //inside the child
	    fprintf(stdout, "....Child....\n");
        }

};

int main(){

    Child child;

    child.print();

}
