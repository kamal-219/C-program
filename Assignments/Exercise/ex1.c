//Define a struct Book with title,  price. Store data for books and sort them 
#include<stdio.h>
#include<string.h>
struct sort{
    char book[30];
    int price;
};
int main(){
    struct sort s[3]={
    {"at the end",500},
    {"nothing can",300},
    {"fate defines",450}
    };
    int i,j;
    struct sort temp;
    for(i=0;i<3;i++){
        for(j=1;j<3;j++){
            if(strcmp(s[i].book,s[j].book)>0){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<3;i++){
        
            printf("%s = %d",s[i].book,s[i].price);
       
    }
}
