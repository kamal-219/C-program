//reverse using pointer
#include<stdio.h>
void rev(int *a,int n){
    int *start=a;
    int *end=a+n-1;
    int temp;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main(){
   int a[100],n;
   printf("n=");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   rev(a,n);
   printf("\nAfter reverse--\n");
   for(int i=0;i<n;i++){
       printf("%d",a[i]);
   }
}
