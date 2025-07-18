//Create a structure Book with title, author, and price. Write a function that takes a pointer to Book as argument and displays its details.
#include<stdio.h>
#include<string.h>

struct book {
    char name[20];
    int price;
    float ratings;
};
void disp(struct book *b);
int main(){
    struct book b1={"sorrow job",115,8.5};
    struct book b2={"unlike happiness",216,6.5};
    struct book b3={"at the end",250,8.9};
    disp(&b1);
    disp(&b2);
    disp(&b3);
}
void disp(struct book *b){
    printf("name= %s\n",b->name);
    printf("price= %d\n",b->price);
    printf("ratings= %f\n",b->ratings);
}
