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

    Wheel*  wh = new Wheel();

    Wheel*  wh2 = new Wheel();

    Bicycle bc(wh, wh2);

    bc.move();

    delete wh;
    delete wh2;

    return 0;
};