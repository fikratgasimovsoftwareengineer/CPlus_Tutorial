#include <iostream>
#include <string.h>

using namespace std;

class Marks{
 private: 
	 int rno;
	 float 	perc;
 public:
	 // default constructor
	 Marks(){};

	 void readMark(){
	  cout << "Enter the roll No" << endl;
	  cin >> rno;
	  cout << "Enter percentage" << endl;
	  cin >> perc;
	 
	 }
	 void printMarks()
	 {
	   cout << "Roll: " << rno << endl;
	   cout << "Percentage" << perc << "% " << endl;
	 
	 }
};

class Student{

 private:
	 char name[30];
	 // use Class object
	 Marks mark_obj;
 public:
	 void readStudent(){
	  // read name, rollnumber and percentage from terminal
	   cin.getline(name, 30);

	   mark_obj.readMark();
	 }
         // printStudent
	 void printStudent(){
	  // Name return
	   cout << "Name " << name << endl;
	   mark_obj.printMarks();
	
	 }

};

int main(int argc, char** argv){
 
  Student student;
  student.readStudent();
  student.printStudent();

  return 0;




}
	 




