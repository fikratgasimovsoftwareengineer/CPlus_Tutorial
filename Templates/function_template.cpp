#include <iostream>

using namespace std;

template<class X>

X func(X a, X b){

    return (a > b) ? a : b;

}

int main(){


    cout << func(6, 5) << endl;
    cout << "=----------" << endl;
    cout << func('c', 'h') << endl;
}
