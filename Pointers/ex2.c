// Calculator
#include <stdio.h>
void sum(int *p,int *q);
void mul(int *x,int *y);
void sub(int *x,int *y);
void dev(int *x,int *y);
int main() {
  int a,b;
  scanf("%d%d",&a,&b);
  int *p=&a;
  int *q=&b;
  sum(p,q);
  mul(p,q);
  sub(p,q);
  dev(p,q);
}
void sum(int *x,int *y){
  int f=  *x+*y;
  printf("%d",f);
}
void mul(int *x,int *y){
int f=  (*x)*(*y);
 printf("\n%d",f);
}
void sub(int *x,int *y){
  int f=  *x - *y;
  printf("\n%d",f);
}
void dev(int *x,int *y){
int f=  (*x)/(*y);
 printf("\n%d",f);
}

