#include <iostream>


using namespace std;


class Man{

    protected:
	    int a ;
	    int b ;
	    

};

class human:public Man{

    public:
	    void setA(int a_1){a = a_1;}

	    void setB(int b_1){b = b_1;}

	    void display(){
	        cout << a << "\n";
		cout << b << "\n";
	    }

};

int main(){

    
    human hum;

    hum.setA(4);
    hum.setB(5);

    hum.display();

}
