#include<iostream>

#include<cmath>

class managerVector{

    private:
        float _x;
        float _y;

    public:
        managerVector(float x=0.0f, float y=0.0f) noexcept:_x(x), _y(y){}

        // gett methods
        float getX() const noexcept {return _x;}
        float getY() const noexcept {return _y;}

        // computer length

        float lengthGet() const noexcept {

            return std::sqrt(_x * _x + _y*_y);
        }

        managerVector operator+(const managerVector& other) const noexcept{
            return managerVector(_x + other._x, _y + other._y);
        }



};




int main(){

    managerVector v1(3, 5);
    managerVector v2(1, 2);

    managerVector sum = v1 + v2;

    
    std::cout << "v1 + v2 = (" << sum.getX() << ", " << sum.getY() << ")" << std::endl;
    std::cout << "Length of v1 = " << v1.lengthGet() << std::endl;


    return 0;
}