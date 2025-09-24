#include<stdio.h>
int is_sorted(int *a,int n);
int main(){
	int arr1[]={2,4,6,7,8};
	int arr2[]={10,4,7,2,8};
	int n1=(sizeof(arr1)/sizeof(arr1[0]));
	int n2=(sizeof(arr2)/sizeof(arr2[0]));
	printf("%s\n",is_sorted(arr1,n1)?"sorted":"no_sort");
	printf("%s\n",is_sorted(arr2,n2)?"sorted":"no_sort");
}
int is_sorted(int *a,int n){
	if(n==0||n==1){
		return 1;
	}
	if(*a>*(a+1)){
		return 0;
	}
	return is_sorted(a+1,n-1);
}

