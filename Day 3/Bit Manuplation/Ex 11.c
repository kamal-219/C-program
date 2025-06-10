#include <stdio.h>
#define nbit(n,p) ((n>>p)&1)
int main()
{
 int n,p,value;
 scanf("%d %d",&n,&p);
 value=nbit(n,p);
 printf("%d\n",value);
 return 0;
}
