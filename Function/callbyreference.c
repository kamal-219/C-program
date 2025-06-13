#include <stdio.h>
void val(int *m,int *n);
void val(int *m,int *n){
    *m=10,*n=50;
}

void main(){
    int a=15;
    int b=20;
    val(&a,&b);
    int c,choice;
    printf("1.Add\n2.sub\n3.Mul\n4.Div\n5.exit");
    scanf("%d",&choice);
    switch(choice){
        case 1: c=a+b; printf("%d ",c);break;
        case 2: c=a-b; printf("%d ",c);break;
        case 3: c=a*b; printf("%d ",c);break;
        case 4: c=a/b; printf("%d ",c);break;
        case 5: printf("Exited\n");
        default:printf("Invalid choice");
    }
}
