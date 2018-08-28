#include <stdio.h>
#include <stdlib.h> 

int main(){
int n=8;
int space=n-1;
int l,k,i,j;
	for (i=1; i<=n; i++){
		for (l=1; l<=space; l++){
			printf(" ");
		}
		for (j=i; j>0; j--){
			printf("%d",j);
		}
		for(k=2;k<=i;k++){
			printf("%d",k);
		}

		printf("\n");
		space--;
	}
	return 0;
}


