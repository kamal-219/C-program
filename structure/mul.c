#include<stdio.h>


struct numbers {
    int a;
    int b;
};


int mul(struct numbers *num) {
    return (num->a) * (num->b);
}

int main() {
    struct numbers n;
  
    printf("Enter a and b = ");
    scanf("%d%d", &n.a, &n.b);
    
    int result = mul(&n);
    printf("Multiplication = %d\n", result);

    return 0;
}
