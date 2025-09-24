#include<stdio.h>
#define n 2
int main(){
	int a[n][n]={{10,20,},{30,40}};
	int i,j,b[n][n];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		 
			b[j][n-1-i]=a[i][j];
					}
		}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",b[i][j]);
		}
			printf("\n");


	}

}
