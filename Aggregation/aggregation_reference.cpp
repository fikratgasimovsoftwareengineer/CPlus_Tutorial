#include <iostream>


/**NO DIRECT DEPENDENCY*/

class Engine{


    public:
        void getEngine(){
            std::cout << "This is engine" << std::endl;
        }

};

class Car {

    private:
  	    Engine &engine;  
    
    public:
    	Car(Engine& eng): engine(eng){}
    	
    
    	void startEngine(){
    	    engine.getEngine();
    	}
   

};

int main(){
 
    Engine eng;
    
    Car car(eng);
    car.startEngine();	

    return 0;
};
