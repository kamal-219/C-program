#include <stdio.h>
#include<string.h>
void array(char a[],int len);
void array(char a[],int len){
   for(int i=0;i<len;i++){
      printf("%c",a[i]);
   }

}
int main() {
  char a[]="system";
  int len=strlen(a);
  array(a,len);
  for(int i=len;i>=0;i--){
    printf("%c",a[i]);
  }

    return 0;
}
