#include<stdio.h>
void rev(int *ptr,int f,int l);
int main(){
	int arr[]={10,20,30,40,50};
	int n=(sizeof(arr)/sizeof(arr[0]));
	rev(arr,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
void rev(int *ptr,int f,int l){
	if(f>=l)
		return;
	int t=*(ptr+f);
         *(ptr+f)=*(ptr+l);
        *(ptr+l)=t;
     rev(ptr,f+1,l-1);
}

	

