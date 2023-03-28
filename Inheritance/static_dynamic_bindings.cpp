#include <iostream>

using namespace std;


class Animal{

    public:
	    virtual void speak(){cout << "Animal Speaks!" << endl;}

};

class Dog:public Animal{

    public:
	    void speak() override {cout << "Dog barks!" << endl;}


};

class Cat:public Animal{

    public:
	    void speak() override {cout << "cat is smeshing!" << endl;}
};

int main(){

	// polymorphisim
    Animal *animal = new Dog();
    animal->speak();

    /*2. Dog *dog = static_cast<Dog*>(new Animal);
    dog->speak();*/


    // cast type of object with animal object
    Dog *dog = dynamic_cast<Dog*>(animal);

    if (dog!=nullptr){
         cout << "FAILED!" << endl;
    }
    else{
        dog->speak();
    }

 

    delete dog;



    return 0;



}
