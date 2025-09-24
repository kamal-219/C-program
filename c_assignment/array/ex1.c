#include<stdio.h>
int main(){
	int arr[5]={10,20,30,40,50};
	int (*ptr)[5]=&arr;
	int n=(sizeof(arr)/sizeof(arr[0]));
	int i,k,j;
	printf("position= ");scanf("%d",&k);
	for(i=0;i<k;i++){
	int last=(*ptr)[n-1];
	for(j=n-1;j>0;j--){
	(*ptr)[j]=(*ptr)[j-1];
	}
	(*ptr)[0]=last;
	}
	for(i=0;i<n;i++){
		printf("%d ",(*ptr)[i]);
	}

	return 0;
}
	
