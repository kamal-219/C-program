// mobile details
#include <stdio.h>
struct pro{
    char mob[10];
    float frq;
    int rate;
};

int main() {
    struct pro p;
    struct pro *ptr=&p;
    printf("name= ");
    scanf("%s",ptr->mob);
    printf("freq= ");
    scanf("%f",&ptr->frq);
    printf("rate= ");
    scanf("%d",&ptr->rate);
    return 0;
}
