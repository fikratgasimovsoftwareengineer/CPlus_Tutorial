#include <stdio.h>
#include <string>
#include <memory>

class Person{

 private:
	 int age;
	 std::string name;
 public:
	 Person(int age, std::string name);
         void* getResult();	 

};
Person::Person(int age, std::string name){

  this->age = age;
  this->name = name;
 

}
void* Person::getResult(){

  fprintf(stdout, "Age %d", this->age);
  fprintf(stdout, "Name %s", this->name.c_str());

}

int main(){
 // manage single object
 std::unique_ptr <Person> person(new Person(27, "Unique Pointers"));

 
 person->getResult();
 return 0;

}
