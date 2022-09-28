#include <iostream>
using namespace std;

namespace first_space{

 void func(){
   cout << "Inside the first NAME" << endl;
 }

}
namespace sec_space{

 void func2(){
 
   cout << "Inside the second Name" << endl;
 }

}

int main(){

 // cal first namespcae
 first_space::func();
 //
 // call second namespace
 sec_space::func2();
 return 0;
}
