#include<stdio.h>
int main(){
	int row=5;
	int i,j;

	for(i=0;i<=row;i++){
		for(j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
