//Write a function to find the maximum element in an array using pointer arithmetic only.
#include<stdio.h>
void check(int max,int *ptr);
int main(){
    int a[]={10,50,60,2,25};
    int i;
    int *ptr=a;
    int max=*ptr;
    check(max,ptr);
}
void check(int max,int *ptr){
    int i;
    for(i=0;i<5;i++){
       if(*(ptr+i)>max){
           max=*(ptr+i);
       }
    }
    printf("%d",max);
 }
