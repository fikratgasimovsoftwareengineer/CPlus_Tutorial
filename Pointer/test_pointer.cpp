#include <iostream>
#include <stdio.h>
using namespace std;

void gamello(int *x, int *y);

int my_int_func(void* x, void* y){
  int a = * (int*)x;
  int b = * (int*)y;
  cout << a << endl;
  cout << b << endl;
  return a, b;  
}

int main(){
 
 int temp = 4;
 int temp_2 = 5;
 int* x = &temp;
 int* y = &temp_2;

 x = &temp;
 y = &temp_2;

 my_int_func(x, y);

 //void (*func) (int);
 //func = &my_int_func;
 //func(4);


 int* c;
 int a = 100;
 int b = 200;
 c = &a;
 cout << "C-->" << c << endl;
 cout << "First Result :" << a << "\n Second Res " << b << endl;

 gamello(&a,&b);

 cout << "3" << a << "\n4" << b << endl;

};


void gamello(int *x, int *y){

  int temp;

  temp = *x;
  *x = *y;
  *y = temp;


}
