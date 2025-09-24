//function to return pointer to maximum element in array.
#include<stdio.h>
int main(){
	int a[]={1,4,3,86,4,9};
	int n=sizeof(a)/sizeof(a[0]);
        int max=point(a,n);
	printf("%d",max);
}
int  point(int *a,int n){
   int i;
   int max=a[0];
   for(i=0;i<n;i++){
	   if(a[i]>max){
		   max=a[i];
	   }
   }
   return max;
}

