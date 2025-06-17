#include <stdio.h>


struct Product {
    char name[50];
    float price;
};

int main() {
    struct Product p1 = {"Vivo phone", 89999.00};
    struct Product *ptr = &p1;  
   
    printf("Original price of %s: %f\n", ptr->name, ptr->price);

    ptr->price = 5999.00;

    printf("Updated price of %s: %f\n", ptr->name, ptr->price);

    return 0;
}
