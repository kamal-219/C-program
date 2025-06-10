//Implement a function to check if a string is a permutation of another.
#include<stdio.h>
#include<string.h>
int main(){
    char a[]={"care"},b[]={"race"};
    int alen=strlen(a);
    int blen=strlen(b);
    int count=0;
     if(alen==blen){
        for(int i=0;i<alen;i++){
            for(int j=0;j<blen;j++){
                if(a[i]==b[j]){
                   count++;
                   a[i]='1';break;
                }
            }
        }   
    }
    else{
        printf("Not a permutation");
    }
    if(count==alen){
                       printf("Permutation occurs");
                   }
    else{
                       printf("Not a permutation");
                   }
    return 0;
}
