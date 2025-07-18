//Write a program that takes a string and counts the number of vowels using a pointer.
#include<stdio.h>
#include<string.h>

int main(){
    char a[]="hey silicon";
    char *ptr=a;
     int l=strlen(a);
    printf("%d\n",strlen(a));
    int i,count=0;
       for(i=0;i<l;i++){
            if((*(ptr+i)=='a')||(*(ptr+i)=='e')||(*(ptr+i)=='i')||(*(ptr+i)=='o')||(*(ptr+i)=='u')){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
