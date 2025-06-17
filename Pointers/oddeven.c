//odd or even using pointer
#include<stdio.h>
void count(int *even,int *odd,int *a,int n){
    *even=0;
    *odd=0;
for(int i=0;i<n;i++){
    if(*(a+i)%2==0){
        (*even)++;
    }
    else{
        (*odd)++;
    }
}
}
int main(){
    
    int a[]={12,50,32,54,65,73,11,3,6,8};
    int n=sizeof(a)/sizeof(a[0]);
    int even,odd;
    count(&even,&odd,a,n);
    printf("even= %d and odd= %d",even,odd);
    return 0;
}
