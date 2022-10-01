#include <stdio.h>
#include "static_method.c"

static void projetStaticMethod(){

    int x = 12;

    x ++;

    test_f();

    printf("X: %d\n", 12);

}
