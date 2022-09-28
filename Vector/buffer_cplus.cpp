#include <stdio.h>
#include <string>
#define BUFFER_SIZE 106


using namespace std;

int main (){

 int buffer[BUFFER_SIZE];
	
 int *p_buffer;

 p_buffer = buffer;
 
 string  convert = "4.55";
 string convert_2 = "2.33";

 for (int i = 0; i < 500; i++){

   sscanf(convert, "%lf\n", &i);
   sscanf(convert_2, "%lf\n", &(i+ 1));

   *(p_buffer) = i;
   *(p_buffer + 1) = i+1;
   
   sscanf(convert, "%lf\n", &p_buffer);
   sscanf(convert_2, "%lf\n",&p_buffer);

   fprintf(stdout, "Buffer : %d\n", *p_buffer);
   fprintf(stdout, "Buffer : %d\n", *(p_buffer+1));

  

  // fprintf(stdout, "Size of:%zu \n", sizeof(buffer)); sizeof buffer = sizeof(int) * BUFFER_SIZE
   // If Pointer exceed buffersize, throw error
   /*if (*p_buffer > sizeof(buffer)){

       	fprintf(stdout, "Buffer Size Exceded Alarm\n");

	p_buffer = buffer;
	
	 	
   }*/
        
 }

 fprintf(stdout, "Buffer : %d\n", *p_buffer);



}
