//recursive array sum with function pointers.
#include<stdio.h>
int sum(int a,int b){
        return a+b;
}
int output(int *a, int n, int (*f)(int, int)) {
    if (n == 1)
        return a[0];
    return f(a[0], output(a + 1, n - 1, f));
}

int main(){
	int a[]={2,4,8,10};
	int n=sizeof(a)/sizeof(a[0]);
        printf("%d",output(a,n,sum));
}



