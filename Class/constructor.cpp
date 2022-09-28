#include <iostream>

/*This code explains about how to use private member in outsitde and inside the class with setter and getter*/



using namespace std;

class Constructor{

  private:
	  int num_1;
	  int num_2;
  public:
	  Constructor();
	  
	  //Constructor(const Constructor &obj){num_1 = obj.num_1,num_2 = obj.num_2;}
	  int getA();
	 
	  //void socket(int buffer_size); 

	  void printnum_1 ();
	/*  int getB(){
           return num_2;
	 };*/
};

Constructor::Constructor(){

  num_1 = 12;
  num_2 = 14;

}

void Constructor :: printnum_1(){

  int a = num_1;
  int b = num_2;
  cout << "A: "<< a << endl; 
  cout << "B: "<< b << endl;
}

/*int Constructor::getA(){

  return num_1;
}*/


/*void Constructor::socket(int buffer_size){

  num_1 = buffer_size;

}*/


int main(){
  Constructor cons;
 
 // cons.socket(123);
  //cons.getA();

  cons.printnum_1();
  //Constructor copy = cons;
  
  //cout << cons.getA() << endl;
  
  return 0;
}
























