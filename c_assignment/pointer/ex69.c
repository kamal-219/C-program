// pointer program to print addresses of array elements.
#include<stdio.h>
int main(){
int a[]={1,2,3,4,5,6};
int *p=a;
int i;
for(i=0;i<6;i++){
	printf("%p\n",(p+i));
}
return 0;
}
