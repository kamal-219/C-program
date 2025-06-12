// Replace string letter.
#include<stdio.h>
#include<string.h>
int main(){
 
    char a[50];
    printf("enter string= ");
    scanf("%s",&a);
    int len=strlen(a);
    getchar();
    char x[1],y[1];
    printf("enter the letter which want to replace= ");
    scanf("%c",&y);
    printf("letter will replace as =");
    getchar();
    scanf("%c",&x);
    
    printf("\nAfter replaced---");
    for(int i=0;i<len;i++){
        if(a[i]==y[0]){
            a[i]=x[0];
        }
        printf("%c",a[i]);
        
    }
  
    return 0;
}
