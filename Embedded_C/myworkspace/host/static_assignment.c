#include <stdio.h>

void display();
void test_static();
static int z = 3;

int main(){
  
    int i;
   
    for (i=0; i < 3; i++){
          

  	display();
	fprintf(stdout , "fIKRAT\n");
        test_static();
    }
  

}


void display(){

    static int x = 5;
    int y = 5;
    
    x++;
    y++;
    // increase global static
    z++;
   // fprintf(stdout , "X: %d===============\n", x);

   // fprintf(stdout , "Y: %d**************\n", y);
    
    fprintf(stdout , "Z: %d**************\n", z);
    
}


void test_static(){

    z+=5;
    fprintf(stdout , "Z_2: %d-----------------\n", z);    


}
