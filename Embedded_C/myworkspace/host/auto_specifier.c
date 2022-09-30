#include <stdio.h>


// ATTENTION!! you can not declare auto specifier outside the function as global/program scope!

//auto int x = 12; //NOT ALLOWED

//======================================
//
void auto_specifier();


int main(){

    auto_specifier();

    auto_specifier();

    auto_specifier();

}

// Auto Class Specifier ONLY Function/Block Scope
void auto_specifier(){

    auto int a = 0;
    a += 1;
    

    fprintf(stdout, "Auto %d\n", a);

}
