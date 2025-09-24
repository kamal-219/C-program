#include<stdio.h>
void multiply(int a[2][2]);
int main(){
	int a[2][2]={{2,3},{4,5}};
	multiply(a);
}
void multiply(int a[2][2]){
       int i,j;
       for(i=0;i<2;i++){
	       for(j=0;j<2;j++){
		       if(i==0){
		printf("%d ",(*(*(a+i)+j))*(*(*(a+i)+j+1)));
	           }
		       else{
			       printf("%d ",(*(*(a+i)+j))*(*(*(a+i)+j-1)));
		       }
		 
	       }
	       printf("\n");
 }
}
