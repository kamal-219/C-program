#include<stdio.h>
#include<stdlib.h>
int main(){
	int a=20;
	int *p;
	int *ptr;

    printf("%d",*ptr);
	

	p=(int*)malloc(sizeof(int));
	*p=30;
	free(p);

    printf("%d",*p);
    }

