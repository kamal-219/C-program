//Write a function that reverses a string in-place using only pointers (no str[i] access).
#include<stdio.h>
#include<string.h>
void ch(char*a,int l);
int main(){
    char a[]="hey silicon";
    int l=strlen(a);
    printf("%d\n",l);
    ch(a,l);
    printf("%s",a);
    return 0;
}
void ch(char*ptr,int l){
     
           char t;
           char *s=ptr;
           char *e=ptr+l-1;
           while(s<e){
               t=*s;
           *s=*e;
           *e=t; 
           s++;
           e--;
           }
           
}
