#include <stdio.h>
#include "exter_additional.c"

int a = 5;

void main(){

    //int a = 2;

    for (int i =0; i < 3; i++){

        printAdd();
        
	//fprintf(stdout, "Value: %d\n: ", a);
    }


}

void printAdd(){
    a--;
    printf("Val2: %d\n: ", a);
    printf("---------------\n");


}
