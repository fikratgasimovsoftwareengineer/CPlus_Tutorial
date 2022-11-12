#include <iostream>

//***********************************
//**********DECLTTYPE**************
//**********************************


int main(){


    int i =4;
   
    decltype(i) z=i; 

    do{
    
      z ++;    
      std::cout << z << std::endl; 
    
    }while(z<10);    

   

}
