#include <stdio.h>
#include <stdint.h>
// const data and const pointer
void arrayDisplay(uint8_t const *const pArray, uint8_t lenItems);



int main(){

    uint8_t someData[] = {0xff,0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

    // get len of items in array
    uint8_t items = sizeof(someData) / sizeof(uint8_t);
   
    arrayDisplay(&someData[2], items-3);
    return 0;

}

void arrayDisplay(uint8_t const *const pArray, uint8_t lenItems){

    for(uint32_t i = 0; i < lenItems; i++){
    
        fprintf(stdout, "Array Element %x\n", *(pArray + i));
    }


}

