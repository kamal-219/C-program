//Implement swap(int **a, int **b) to swap two pointer variables.
#include<stdio.h>
int swap(int **a,int **b);
 int main(){
	 int x=21,y=7;
	 int *p1=&x,*p2=&y;
	 swap(&p1,&p2);
 }
int swap(int **a,int **b){
	**a=**a^**b;
	**b=**a^**b;
        **a=**a^**b;
	printf("x= %d\ny= %d\n",**a,**b);
	return 0;
}

