#include <iostream>

/*
 * Final Keyword is used for restricting Class Inheritance 
 * And Function Overriding!
 *
 * */

// Final Keyword will not allow Function Overriding!
class Parent {

    public:
        virtual void show() final{
        
            // inside parent
	    fprintf(stdout, "...Parent...\n");
        }

};

class Child:Parent{

    public:
        void show(){
    
            //inside the child
	    fprintf(stdout, "....Child....\n");
        }

};

int main(){

    Child child;

    child.show();

}
