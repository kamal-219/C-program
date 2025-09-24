#include<stdio.h>
int main(){
	int i,j,k,row=5;
         
        for(i=0;i<row;i++){

         	for(k=0;k<=i;k++){
		printf(" ");
		}
		for(j=0;j<row-i;j++){
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}


