#include <iostream>
#include <stdio.h>
using namespace std;

#define MAX 4096
int main(){

int buff[MAX];

int  test[4][2] = {{2, 4}, 
                    {9, 0},
                    {12, 3},
                    {1, 6}};

bool check_state=true;

while(1){

    check_state = true;
    while(check_state){

    int i=0;    
    int col = 0;
    int row=0;

    cout << test[row][col] << " First Index"<< endl;
    
    cout << test[row + 1][col] << " Second Index " << endl;     

    check_state=false;
    

    i++;
    
    cout << i <<" @ -----"<<  endl;

    cout << endl;
    
   
    }
    
    }
    return 0;

}



