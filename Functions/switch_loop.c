#include <stdio.h>
#include <stdbool.h>

int main(){


    bool val = true;

    int k = 0;

    while(val){
    
	    
        switch(k){
	
	    case 0:
		    fprintf(stdout, "Prima\n");
		    fprintf(stdout, "===================\n");
		    break;
	
	    case 1:
		   fprintf(stdout, "Secondo\n");
		   fprintf(stdout, "===================\n");
	           break;


	    case 2:
		   fprintf(stdout, "Third\n");
		   fprintf(stdout, "===================\n");
		   break;

    }
	fprintf(stdout, "Exit\n");
        k++;	

    
	if (k == 3){
	    k == 0;
	}



}

return 0;
}
