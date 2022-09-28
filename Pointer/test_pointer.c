#include <stdio.h>

int main(){

 int size = 25;
 
 int buffer[size];
 
 int *p ;
 p = buffer;
 
 for (int i = 0; i < size; i++){
 
     buffer += i;	
     fprintf(stdout, "buffer %d\n", buffer[i]);

     *(p++);

     fprintf(stdout, "pointer %d\n", *p);
 
 }

}
