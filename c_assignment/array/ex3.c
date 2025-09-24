//Implement a function that finds the majority element (appears > n/2 times) using only O(1) extra space.
#include<stdio.h>
void func(int *ptr,int n);
int main(){
	int arr[10]={2,2,3,3,2,3,5,3,3,3};
	int n=(sizeof(arr)/sizeof(arr[0]));
	func(arr,n);
}
void func(int *ptr,int n){
	int i,j,count=0,max=0,major;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(*(ptr+i)==*(ptr+j)){
			      count++;  
			}
		}
		if(count>max){
			max=count;
			major=*(ptr+i);
		}

	}
	printf("%d",major);
}	


