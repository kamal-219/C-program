// check palindrome
#include <stdio.h>
#include<string.h>
int Palindrome(char str[], int start, int end) {
    if (start >= end) return 1;
    if (str[start] != str[end]) return 0;
    return Palindrome(str, start + 1, end - 1);
}

void main(){
    char str[]="Kamal";
    int len=strlen(str);
    if(Palindrome(str,0,len-1)){
    printf("its palindrome");
    }
    else{
        printf("not palindrome");
    }
    
    
}
