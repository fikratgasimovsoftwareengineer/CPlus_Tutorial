#include <stdio.h>
//#include "static_method_2.c"


int z = 12;

static void fikrat();

static void test_2();

static void test_f();

int main(){

//    test_2();
//
    //projetStaticMethod();
     
}


void test_f(){
   
    int b = 2;
    
    b++;
    
    fprintf(stdout, "Test 3 %d\n", b);

    z--;
}

static void test_1(){

    int a = 0;

    a += 2;
    printf("Test%d\n", a);

}

void test_2(){

    int x = 12;

    x ++;

    test_f();

    printf("X: %d\n", 12);

}
