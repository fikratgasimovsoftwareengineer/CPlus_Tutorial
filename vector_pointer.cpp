
// C++ program to illustrate call-by-methods in C++
  
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

//========= Vector Reading with loop =======

void printVec(std::vector<int> *myVec){

    for(int i =0; i< myVec->size(); i++){

        // at return reference to exact index     
        cout << myVec->at(i)<< endl;
    
    }
    
}


//=========Vector Reading with Auto ==================
/*void AutoVec(std::vector<int> * myVec){

    for(auto &element:myVec){
        cout << element << endl;

    }

}*/

int main()
{   
    //Vector initialization
    std::vector<int> a = {1, 2, 3, 4, 5};
    printVec(&a);
}
