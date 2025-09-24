//Implement my_memcpy(void *dest, const void *src, size_t n) using pointer arithmetic.
#include<stdio.h>
int my_memcpy(void *dest, const void *src, size_t n);
int main(){
	int a[5]={1,2,3,4,5};
	int b[5];
	size_t n=sizeof(a)/sizeof(a[0]);
	my_memcpy(b,a,n);
}
int my_memcpy(void *dest, const void *src, size_t n){
	int i;
	for(i=0;i<4;i++){
		(int*)*(dest+i)=(int*)*(src+i);
		printf("%d ",*(dest+i));
	}
}

