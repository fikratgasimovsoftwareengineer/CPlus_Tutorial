#include <stdio.h>
#include "static_additional.c"




void display();
//void test_static();

//used in static additional file
extern void test2_static();

//void static_local();
// this global extern
extern int z;

/*========================================*/
/* this will not be accessible outside of this C file.*/
//static int z = 12; 
//==========================================
int main(){
  
    static int test = 5;

    int i;
        
    for (i=0; i < 3; i++){
          

  	display();

	fprintf(stdout , "fIKRAT\n");

	//test_static();

    }

    //static_local();
    test = 123;
    x = 12;

    printf("Static Local: %d\n", test);

    printf("Additional File: %d\n", x);


    // call function
    test2_static();
}

/*void static_local(){

    test = 23;

    printf("Static Local: %d\n", test); 

}*/


void display(){

    static int x = 5;
    int y = 5;
    
    x++;
    y++;

    // increase global static
    //z++;

    // fprintf(stdout , "X: %d===============\n", x);

   // fprintf(stdout , "Y: %d**************\n", y);
    
    //fprintf(stdout , "Z: %d**************\n", z);
    
}


/*void test_static(){

    z+=5;
    fprintf(stdout , "Z_2: %d-----------------\n", z);    


}*/


