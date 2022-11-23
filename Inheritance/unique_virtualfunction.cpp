#include<iostream>
#include <memory>

using namespace std;

class Person {
     
    public:
	Person(){cout << "Start Person" << endl;};

        virtual void move() = 0;
	
	~Person() {cout << "Finish Person\n" << endl;};

};


class Arm: public Person{
    
    
    public:
	Arm(){};

        void move(){
    
        cout << "Arm" << endl;
        }

	~Arm(){};
};


class Testa: public Person{

    public:
        Testa(){cout << "Constructor!" << endl;};
       
	void move(){
	
	    cout << "Testa" << endl;
	
	}

	~Testa(){cout << "DE-Constructor!" << endl;};
    

};





int main(){

    std::unique_ptr<Testa> test = std::make_unique <Testa>();
    
    test->move();
  

    return 0;
}
