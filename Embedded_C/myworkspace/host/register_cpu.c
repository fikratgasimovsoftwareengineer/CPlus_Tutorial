#include <stdio.h>

//=======================REGISTERS==================
//
int main(){


register int i, sum = 0;

for (i=0; i < 10; i++){

    sum += i;

    fprintf(stdout, "Sum: %d\n", sum);


}

return 0;
}
