#include <iostream>

using namespace std;

class MyClass{


    public:
	    MyClass();
	    ~MyClass();
	    int getAge(){return *itsAge;}
	    int getWeight(){return *itsWeight;}

	    void setAge(int age){*itsAge = age;}
	    void setWeight(int weight){*itsWeight=weight;}

    private:
	    // dynamically allocated members
	    int* itsAge;

	    int* itsWeight;


};


MyClass::MyClass(){

    itsAge = new int(4);
    itsWeight = new int (10);
}
MyClass::~MyClass(){

    delete itsAge;
    delete itsWeight;
}



int main(int argc, char** argv){

    MyClass *objectPointer = new MyClass();

    cout << "Age: " << objectPointer->getAge() << endl;

    objectPointer->setAge(8);

    cout << "Age: " << objectPointer->getAge() << endl;

    cout << "AgeWithPointer: " << objectPointer->getAge() << endl;
    return 0;

}
