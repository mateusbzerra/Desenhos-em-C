#include <stdio.h>
#include <stdlib.h> 

int main(){
	int i,k,j;
	int n = 15;
	for(i=0;i<n;i++){
		if(i==0 || i==(n-1)){
			for(j=0;j<n;j++){
				printf("* ");
			}
		}else{
			for(k=0;k<n;k++){
				if(k==0 || k==(n-1))
					printf("*");
				else
					printf(" ");
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
