#include<stdio.h>
int main(){
	int i,j;
	int row=5,col=5;
	for(i=0;i<row;i++){
	       for(j=0;j<col-i;j++){
	       printf("* ");
	       }
               printf("\n");
	}
        return 0;
}

