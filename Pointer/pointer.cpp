#include <stdio.h>

int variables_return(void* ptr_1, void* ptr_2){

    int x = * (int*) ptr_1;
    int y = * (int*) ptr_2;
    
    fprintf(stdout, "X: %d\n", x);
    fprintf(stdout, "Y: %d\n", y);
    
    return x + y;
}



int main(){

    int a = 12;
    int b = 23;

    variables_return(&a, &b);

    return 0;
}
