#include <stdio.h>

void sum();


int main(){

    sum();
    
    sum();
    // static keyword is accessible only within the scope
    //fprintf(stdout, "Sum: %d\n", sum_num);
}

void sum(){

    int sum_num=0;
    
    for(int i=0; i < 5; i++){
        
        sum_num += i;

	printf("Sum:%d\n", sum_num);
    
    }

}
