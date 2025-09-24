//Write recursive function to print array backward using pointers.
#include<stdio.h>
int back(int *a,int l);
int main(){
	int a[]={2,3,4,5,6};
	int l=sizeof(a)/sizeof(a[0]);
	back(a,l);
}
int back(int *a,int l){
	int b=*(a+(l-1));
	if(l>0){
	printf("%d",b);

	back(a,l-1);


	}
return 0;
}

