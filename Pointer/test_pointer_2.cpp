#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class Box{

	public:
		Box(double length=1.2, double widht=3.4){
		
		 cout << "Initialized Class !" << endl; 
		 this->length = length;
		 this->width = width;
		}

		double area(){
		
		  return (width + length) * 2;
		}

	private:
		double length;
		double width;



};







int main(){

  Box box;

  Box *ptrBox;

  ptrBox = &box;

  cout << ptrBox->area() << endl;


}



