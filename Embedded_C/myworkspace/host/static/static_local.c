#include <stdio.h>


/*static local variable is alive throught the program, BUT is visible only within block/function*/


void display();
void display_2();



int main(){

    static int x = 4;

    display();
    display_2();


}


void display(){

    x++;

}


void display_2(){

    x--;
}
