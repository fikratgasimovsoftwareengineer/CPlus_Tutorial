#include <iostream>
using namespace std;


class Base {

   private :
     int num;

   public:
     
     // constructor default
     Base():num (0){};
     
     // friend function(non-class member)
     friend int friendFunc(Base);

};

// implementation of friend
int friendFunc(Base b){
  
  b.num = 12; // non member function access to data member
  return b.num;

};
int main(){

 Base base1;

 cout << friendFunc(base1) << '\n';
 return 0;


}

