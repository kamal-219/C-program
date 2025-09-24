#include<stdio.h>
int main(){
	int a[]={1,2,3,4};
	int b[]={5,6,7,8};

	int (*p1)[4]=&a;
	int (*p2)[4]=&b;
        int i;     
        for(i=0;i<4;i++){

	(*p1)[i]=(*p1)[i]^(*p2)[i];
	(*p2)[i]=(*p1)[i]^(*p2)[i];
	(*p1)[i]=(*p1)[i]^(*p2)[i];
	}
	

      
	printf("p1=");

	for(i=0;i<4;i++){
		printf("%d ",(*p1)[i]);
	}

	printf("\np2");
	for(i=0;i<4;i++){
		printf("%d ",(*p2)[i]);
	}
	return 0;
}


