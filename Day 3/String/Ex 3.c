//Reverse a string without using extra memory.
#include<stdio.h>
#include<string.h>
int main(){
   int len,i;
   char a[20];
   printf("Enter string=");
   scanf("%s",&a);
   len=strlen(a);
   for(i=len;i>=0;i--){
    printf("%c",a[i]);
   }
   return 0;
}
