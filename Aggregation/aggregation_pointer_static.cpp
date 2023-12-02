#include <iostream>


/**NO DIRECT DEPENDENCY*/


class Wheel{

    public:

        void rotate(){
            std::cout << "Wheel" << std::endl;
        }


};

class Bicycle{

    private:
        Wheel* wheelPart;
        Wheel* wheelBack;


    public:
        Bicycle(Wheel* wheelP, Wheel* wheelB): wheelPart(wheelP), wheelBack(wheelB){}

        void move(){

            wheelPart->rotate();
            wheelBack->rotate();
        }
};
int main(){

    Wheel wh;

    Wheel wh2;

    Bicycle bc(&wh, &wh2);

    bc.move();

   

    return 0;
};