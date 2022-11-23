#include <iostream>
using namespace std;

class A {
  public:
    A() {
        cout << "Constructor A\n";
    }
    void display() {
      cout << "Hello form Class A \n";
    }
};

class B: virtual public A {
};

class C: virtual public A {
};

class D: public B, public C {
};

int main() {
  D object;

  object.display();
}
