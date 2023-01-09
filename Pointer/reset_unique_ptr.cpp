#include <iostream>
#include <memory>

using namespace std;


int main(){


    std::unique_ptr<int> ptr;

    cout << "Ptr get: " << ptr.get() << endl;

    ptr.reset(new int);

    *ptr = 5;

    cout << *ptr << endl;

    
    std::unique_ptr<int> puple = move(ptr);

    *puple =10;

    cout << *puple << endl;



}
