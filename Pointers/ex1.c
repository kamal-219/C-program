// C to demonstrate how to handle pointers in a program.
#include <stdio.h>
void sam(int *p);
int main() {
    int a=230;
    int *p=&a;
    printf("%d",*p);
    *p=600;
    printf("\n%d",*p);
    printf("\n%d",a);
    int **q=&p;
    printf("\n%d",**q);
    int ***e=&q;
    printf("\n%d",***e);
    sam(&a);
    return 0;
}
void sam(int *p){
    printf("\n%d\n%d",*p++,++*p);
}
