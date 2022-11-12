#include <iostream>
#include <memory>

using namespace std;

/*
 * Shared Pointer or Unique Pointer always required ~Constructor() to be declared! 
 *
 * */


class MyClass{

    public:

        MyClass(){
	
	    cout << "In Constructor " << endl;
	}
    
	~MyClass(){
	
	    cout << "DeConstructor" << endl;
	}
        void show(){ std::cout << "Show " << std::endl; }
};



int main(){


    shared_ptr<MyClass> p_share (new MyClass);
    
    p_share->show();    

    // reset 
    p_share.reset();

    shared_ptr<MyClass>p2_share(p_share);

    p2_share->show();


}
