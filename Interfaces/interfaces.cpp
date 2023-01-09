#include <iostream>


/* C++ INTERFACE */

using namespace std;



class Design{


    public:
        
        virtual double getVolume() = 0; 
	
	void setWidth(double w){
	
	    width = w;
	}

	void setHeight(double h){
	
	    height = h;
	
	}
    protected:
        double width;
	double height;
	
};



class Car_BMW:public Design{


    public:
	    double getVolume(){
	        
	        return width * height;
	    }

};


int main(){

    Car_BMW car;

    car.setWidth(4);
    car.setHeight(5);


    cout << car.getVolume() << endl;

    return 0;



}
