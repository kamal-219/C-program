// length of array using pointer
#include <stdio.h>
int length(char *s){
    int l=0;
    while(*s!='\0'){
        l++;
        s++;
    }
    return l;
}

int main(){
    char s[100];
    printf("enter string= ");
    scanf("%s",s);
    int len=length(s);
    printf("%d",len);
    return 0;
    
}
