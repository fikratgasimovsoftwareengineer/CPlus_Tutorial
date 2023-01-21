#include <iostream>

using namespace std;


class Comp{

    private:

        int foo;

    public:

	Comp(int m_foo): foo(m_foo){ };

	int getFoo(Comp &comp);

};

int Comp::getFoo(Comp &comp){

    int z = comp->foo;

    return z;

}

int main(){

    Comp c(43);

    c.getFoo();

    return 0;
}
