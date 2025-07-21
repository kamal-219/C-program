//Allocate memory for an array of n integers, accept input, and copy its contents to a new array.
#include <stdio.h>
#include<stdlib.h>
int main() {
    int *obj,*cpy,i,n;
    printf("elements= ");
    scanf("%d",&n);
    obj=(int*)malloc(n*sizeof(int));
    cpy=(int*)malloc(n*sizeof(int));
    
    for(i=0;i<n;i++){
        scanf("%d",&obj[i]);
        cpy[i]=obj[i];
    }
    
    for(i=0;i<n;i++){
        printf("%d",cpy[i]);
    }
    
    return 0;
}
