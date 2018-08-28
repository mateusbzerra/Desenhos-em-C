#include <stdio.h>
#include <stdlib.h> 

int main(){
	int i,k,j;
	int n = 50;
	for(i=0;i<n;i++){
	    if(i==(n-1)){
	        for(j=0;j<n;j++){
	            printf("* ");
	        }
	        
	    }else{
    	    for(k=0;k<(i+1);k++){
    			printf("* ");
    		}
	    }
	    printf("\n");
	    }
		
	return 0;
}

