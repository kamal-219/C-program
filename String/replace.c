// Replace string.
#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="\nSilicon craft vlsi";
     int len=strlen(a);
    printf("original string");
    for(int i=0;i<len;i++){
         printf("%c",a[i]);
    }
    char x[50]="\nfood";
    int len2=strlen(x);
    printf("\nAfter replaced---");
     if(len2!=len){
            len=len2;
     }
    for(int i=0;i<len;i++){
        a[i]=x[i];
        printf("%c",a[i]);
    }
  
    return 0;
}
