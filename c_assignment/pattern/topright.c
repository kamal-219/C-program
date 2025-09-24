#include<stdio.h>
int main(){
	int i,j,k,row=5;
	for(i=0;i<=row;i++){

		for(k=0;k<=row-i;k++){
			printf("* ");
		}

		for(j=0;j<i;j++){
			printf(" ");
		}
		printf("\n");
	}
}

