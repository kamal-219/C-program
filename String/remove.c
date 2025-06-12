//remove of vowels in string
#include<stdio.h>
#include<string.h>
int main(){
    char x[50],a[]="Silicon Craft Vlsi";
    int len=strlen(a);
    int i,j=0;
    for(i=0;i<len;i++){
       if((a[i]!='a')&&(a[i]!='e')&&(a[i]!='i')&&(a[i]!='o')&&(a[i]!='u')){
          x[j++]=a[i];
       }
    }
    x[j]='\0';
          for(i=0;i<j;i++){
           printf("%c",x[i]);
          }
    return 0;
}
