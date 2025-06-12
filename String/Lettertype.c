//count number of vowels,consonants,spaces in string
#include<stdio.h>
#include<string.h>
int main(){
    char a[]="Silicon Craft Vlsi";
    int len=strlen(a);
    int i,v=0,c=0,s=0;
    for(i=0;i<len;i++){
       if((a[i]=='a')|(a[i]=='e')|(a[i]=='i')|(a[i]=='o')|(a[i]=='u')){
           v++;
       }
       else if(a[i]==' '){
           s++;
       }
       else{
           c++;
       }
    }
    printf("No of vowels= %d\n",v);
    printf("No of consonants= %d\n",c);
    printf("No of spaces= %d",s);
    return 0;
}
