#include<stdio.h>
void quick_sort(int *a,int n);
int main(){
	int a[]={8,3,10,2,14,6,18};
	int n=sizeof(a)/sizeof(a[0]);
	quick_sort(a,n);
}
void quick_sort(int *a,int n){
	int i,j,k;
	k=n/2;
	for(i=0;i<n/2;i++){
		if(k<a[i]){
			int temp=a[i];
			a[i]=k;
			k=temp;
		}
		printf("%d ",a[i]);
	}
}
