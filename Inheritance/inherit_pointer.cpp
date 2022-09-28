#include <iostream>

using namespace std;

class Base
{

    public:
   
       virtual void display();
       virtual void start();
       virtual void stop();
       
       
};

class der1:public Base {

    public:
      

        void display () override {
            cout << " 1_baseFunction override from Derived" << endl;     
        }

        void start () override {
            cout << " 1_base System starting .... " << endl;
        }

        void stop() override {
            cout << " 1_basesystem stopping ... " << endl;

        } 
    
   
   
};

class der2:public Base{
    
    public:

        void display () override {
            cout << " 2_base Function override from Derived" << endl;     
        }

        void start () override {
            cout << " 2_base System starting .... " << endl;
        }

        void stop() override {
            cout << " 2_base system stopping ... " << endl;

        } 
    



};

int main(){

    Base *bas = new der1();
    bas->start();

    bas = new der2();
    bas->start(); 
}    
   // derived der1;

    //Base *bas=&der1;

    

     //der1.display();

    //der2.Base::display();
    // pointer assignment of Base class
    //Base *p;

    //derived d;

    //Base *p = &d;

    // assign all features base to derived
    //p = new derived("Name");

    /*cout << p->func1() << endl;
    cout << p->func2()<< endl;
    cout << p->func3() << endl;*/

   // p->display();

    //cout << p->func4() << endl;    
    //cout << 

    





