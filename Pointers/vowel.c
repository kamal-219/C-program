#include<stdio.h>
#include<string.h>
int vowel(char *a,int *len){
     int i,v=0;
    for(i=0;i<*len;i++){
       if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')){
           v++;
       }
       
    }
    return v;
}
int main(){
    char a[]="Silicon Craft Vlsi";
    int len=strlen(a);
   printf("%d",vowel(a,&len));
       }
