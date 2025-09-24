//convert decimal to binary using recursive function
#include<stdio.h>
int main(){
	int n=43;

	change(n);
}
 void change(int n) {
    if (n == 0)
        return;
    change(n / 2);         
    printf("%d", n % 2);   
}

      




