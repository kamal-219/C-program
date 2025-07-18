//Write a function that swaps the first half of an array with the second half using pointers.
#include <stdio.h>
void change(int *a,int l){
     int i,b[10];
    for(i=0;i<l;i++){
       b[i]=a[i+l]; 
    }
    for(i=l;i<l*2;i++){
        b[i]=a[i-l];
    }
    for(i=0;i<l*2;i++){
        printf("%d  ",b[i]);
    }
}
int main() {
    int a[]={1,2,3,4,5,6};
    int *ptr=a;
    int l=sizeof(a)/sizeof(a[0]);
    l/=2;
    change(a,l);
      return 0;
}
