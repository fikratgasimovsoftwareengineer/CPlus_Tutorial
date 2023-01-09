#include <stdio.h>

int swap(int &a, int &b ){

    int z = a;
    a = b;
    b = z;
    fprintf(stdout, "A: %d\n", a);

    fprintf(stdout, "B: %d\n", b);
    return a, b;
}



int main(){

    int x = 3;
    int y = 4;

    //fprintf(x, y)


    return 0;
}
