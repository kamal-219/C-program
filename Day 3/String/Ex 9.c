#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter string = ");
    scanf("%s",&str);
    int i,j,len;
    len=strlen(str);
    for(i=0;i<len;i++){
        for(j=i+1;j<len;){
            if(str[i]==str[j]){
                len--;
                str[j]=str[len];
            }
            else{
                j++;
            }
        }
    }
    str[len]='\0';
    printf("string after removed== %s",str);
    return 0;
}
