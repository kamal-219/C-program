#include<stdio.h>
int add(int x,int y){return x+y;}
int sub(int x,int y){return x-y;}
int mul(int x,int y){return x*y;}
int div(int x,int y){return x/y;}

int main(){
	int x=10,y=20;
	int (*op[4])(int,int)={add,sub,mul,div};

	printf("add= %d\n",op[0](x,y));
	printf("sub= %d\n",op[1](x,y));
	printf("mul= %d\n",op[2](x,y));
	printf("div= %d\n",op[3](x,y));
	return 0;
}

