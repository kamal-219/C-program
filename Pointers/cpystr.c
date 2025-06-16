//Copy One String to Another Using Pointers
#include<stdio.h>
#include<string.h>
void another(char a[],char y[],int len){
    for (int i = 0; i < len; i++) {
        *(y+i)=*(a+i);
    }
    *(y+len)='\0';
}

int main() {
    char a[50];
    char y[50];
    printf("Enter string: ");
    scanf("%s", a); 

    int len = strlen(a);
    another(a,y,len);
    
    printf("%s",y);

    return 0;
}
