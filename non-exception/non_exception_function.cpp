// Java Program to demonstrate 
// use of use of the noexcept specifier 
#include <iostream> 
using namespace std; 
  
// Function that may throw an exception 
int divide(int a, int b) 
{ 
    if (b == 0) { 
        throw runtime_error("Error: Division by zero"); 
    } 
    return a / b; 
} 
  
// Function that will not throw any exceptions (using 
// noexcept) 
double safeDivide(double a, double b) noexcept
{ 
    if (b == 0) { 
        // In this case, std::terminate will be called if b 
        // is zero 
        cerr << "Error: Division by zero in safeDivide"
             << std::endl; 
        terminate(); 
    } 
    return a / b; 
} 
  
int main() 
{ 
    cout << "noexcept value for divide(): "
         << noexcept(divide(10, 0)) << "\n"; 
  
    cout << "noexcept value for safeDivide(): "
         << noexcept(safeDivide(10.0, 0.0)) << "\n"; 
  
    return 0; 
}