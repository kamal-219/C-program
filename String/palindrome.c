//palindrome or not
#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char x[50],a[]="Silicon";
    int len=strlen(a);
    int j=0;
     for(int i=0;i<len;i++){
     printf("%c",a[i]);
    }
    printf("\n");
    for(int i=len-1;i>=0;i--){
        x[j++]=a[i];
    
    }
    
    for(int i=0;i<len;i++){
     printf("%c",x[i]);
    }
    printf("\n");
    
    int val=1;
    for(i=0;i<len;i++){
        if(a[i]!=x[i]){
           val=0;
           break;
        }
    }
    printf("\n");
    if(val==1){
        printf("This is palindrome");
    }
    else{
        printf("Not palindrome");
    }
       return 0;
}
