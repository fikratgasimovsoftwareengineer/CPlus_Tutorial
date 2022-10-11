#include <stdio.h>
#include <stdint.h>

// Wait for user input
void wait_for_user_input(void);

//display arrayes
//
void display_array(int32_t*, uint32_t);

// swap array
void swap_arrays(int32_t*, int32_t*, uint32_t, uint32_t);



int main(){

    int32_t buf_item, buf_item_2;

    fprintf(stdout, "Array Swapping Program\n");

    fprintf(stdout, "Enter Some Element of Array 1 and 2! \n");

    scanf("%d %d", &buf_item, &buf_item_2);

    if((buf_item < 0) || (buf_item_2 < 0)){
    
        fprintf(stdout, "Number of Elements can not be negative \n");

	wait_for_user_input();
	return 0;
    
    }

    // Otherwise
    //
    //Initialize buffer 
    int32_t array1[buf_item];

    int32_t array2[buf_item_2];
   
    // put elements in order
    for(uint32_t i = 0; i < buf_item; i++ ){
    
        fprintf(stdout, "Buffer 1 elements%d\n: ", i);
	scanf("%d", &array1[i]);
    }

    for(uint32_t i = 0; i < buf_item_2; i++ ){

        fprintf(stdout, "Buffer 2 elements%d\n: ", i);
        scanf("%d", &array2[i]);
    }

    fprintf(stdout, "Contents of Arrays before swap\n");

    //Read first Buffer
    display_array(array1, buf_item);
    printf("\n");

    //============================================
    //Read Second buffer
    display_array(array2, buf_item_2);
    printf("\n");

    printf("NOW SWAP :: :\n");

    swap_arrays(array1, array2, buf_item, buf_item_2);

    display_array(array1,buf_item);
 
    printf("\n");

    display_array(array2, buf_item_2);

    printf("\n");
 
    wait_for_user_input();





}

// Display Array
void display_array(int32_t* pArray, uint32_t nitems){

    for (uint32_t i = 0; i < nitems; i++){
    
        fprintf(stdout, "Array Elements Reads : %d\n", pArray[i]);

    }


}


void swap_arrays(int32_t* pArray, int32_t* pArray_2, uint32_t nItem, uint32_t nItem_2){

   uint32_t len = nItem < nItem_2 ? nItem : nItem_2;

  for (uint32_t i = 0; i < len; i++){
  
      int temp = pArray[i];
      pArray[i] = pArray_2[i];
      pArray_2[i] = temp;
  } 

}

void wait_for_user_input(){

    fprintf(stdout, "Please Enter key to exit application\n");

    while(getchar() != '\n'){
    
        //read the input and do nothing
    }
    getchar();

}
