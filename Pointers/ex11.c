// Dynamic Array Input and Sum
#include <stdio.h>
#include<stdlib.h>
int main() {
    int *a;
    int n,i;
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL){
        printf("no memory");
    }
    for(i=0;i<n;i++){
        a[i]=i+10;
        printf("a[%d]= %d\n",i,a[i]);
    }
    return 0;
}
