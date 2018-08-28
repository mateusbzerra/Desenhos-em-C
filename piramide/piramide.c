#include <stdio.h>
#include <stdlib.h> 

int main(){
int num=8;
int n=num-1;
int l,k,i,j;
	for (i=1; i<=num; i++){
		for (l=1; l<=n; l++){
			printf(" ");
		}
		for (j=i; j>0; j--){
			printf("%d",j);
		}
		for(k=2;k<=i;k++){
			printf("%d",k);
		}


		//printf("i=%d",i);
		
		/*
		
		for (j=i; j>0; j--){
			printf("%d",j);
		}
		
		for (j=1; j<=i; j++){
			printf("%d",j);
		}
		
		for (k=j-1; k>1; k--){
			 printf("%d",(k-1));
		}
		*/
		printf("\n");
		n--;
	}
	return 0;
}


