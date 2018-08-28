#include <stdio.h>
#include <stdlib.h> 

int main(){
	int i,j,spaceTop,spaceBot,auxTop,auxBot,p;
	int n = 5; //Somente números ímpares
	spaceTop = ((n-1)/2)-1;
	for(i=0;i<n;i++){
		if(i==0 || i==(n-1)){
			auxTop = (n-1)/2;
			for(j=0;j<=auxTop;j++){
				if(j==(auxTop)){
					printf("x");
				}else{
					printf(" ");
				}
			}		
		}else{
			auxTop = (2*i)+1;
			for(j=0;j<spaceTop;j++){
				printf(" ");
			}
			if(auxTop<=n){
				for(j=0;j<auxTop;j++){
					printf("x");
				}
				spaceTop--;
				auxBot = auxTop-2;
			}else{
				spaceBot = (n-auxBot)/2;
				for(p=0;p<spaceBot;p++){
					printf(" ");
				}
				for(j=0;j<auxBot;j++){
					printf("x");
				}
				auxBot = auxBot-2;	
			}
		}
		printf("\n");	
	}
	
	return 0;
}

