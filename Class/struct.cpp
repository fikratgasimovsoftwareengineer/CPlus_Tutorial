
#include <iostream>
using namespace std;
struct Person{
    int age;    
    Person (int age ){this->age = age;}

    void print();


    ~Person();
};

void Person::print(){

    cout << "Age: "<< this->age << endl;

};

Person::~Person(){

    cout << "Unconstructor " << endl;
};
int main(){

    Person per = Person(10);
    per.print();
  
    return 0;

}
