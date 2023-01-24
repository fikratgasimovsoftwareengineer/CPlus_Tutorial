#include <stdlib.h>
#include <stdio.h>


int main(){


 int* ptr;
 int n;

 fprintf(stdout, "Enter Number\n");

 scanf("%d", &n);

 fprintf(stdout, "Number is %d\n", n);

// create vector indices
 ptr = (int*)malloc(n* sizeof(int));

 if (ptr == NULL){
 
     fprintf(stdout, "MEMORY ALLOCATION FAILED!\n");
     return -1;
 }

 else {
 
     fprintf(stdout, "Memory Allocation Successful!\n");
     
     for (int i = 0; i < n; ++i){
     
         ptr[i] += i;
	 fprintf(stdout, "Number:%d\n", ptr[i]);
     }
 }


 return 0;

}
