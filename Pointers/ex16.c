//Dynamically allocate memory for n integers and find the maximum and minimum.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,max,min,i,n;
    printf("elements= ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max)max=a[i];
        if(a[i]<min)min=a[i];
    }
    printf("max= %d\n",max);
    printf("min= %d\n",min);
    return 0;
}
