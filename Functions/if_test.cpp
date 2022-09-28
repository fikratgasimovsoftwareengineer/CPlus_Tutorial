#include <iostream>
#include <string>

#include <vector>
using namespace std;

bool check = false;

std::vector <double> test_vector;

void check_vector(int check_double){

  for  (int i =0; i< check_double; i++){
  
    test_vector.push_back(i);

  }
}


int main(int argc, char** argv){
 
// bool check = false;
 int count=0;
 int a = 4; 

 int b = 5;

 /*for (int i = 0; i < 10; i++){
  
  // bool check = false;  
  
   if(i == a){
      check=true;
      std::cout << b << std::endl;
      check = false;
   }
   
   else if(check) 
   {
      b = 6;
   //   std::cout << "check : " << check << std::endl;
     std::cout << "b: " << b << std::endl;
   }
  
 
 }*/
 check_vector(5);

 cout << test_vector.size() << endl;


 return 0;
}
