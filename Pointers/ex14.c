// String Array Using Pointers ,print reverse using pointer;
#include <stdio.h>
#include<stdlib.h>
int main(){
    char *s;
    int i,size=5;
    s=(char *)malloc((size+1)*sizeof(char));
    printf("message= ");
    scanf("%s",s);
    for(i=4;i>=0;i--){
         printf("%c",*(s+i));
    }
    free(s);
    return 0;
}
