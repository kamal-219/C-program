// Online Shopping cart
#include <stdio.h>
int main() {
    int choice,product;
    printf("Shopping cart\n");
    printf("1.Electronics\n");
    printf("2.Grocessory\n");
    printf("3.Clothes\n");
    printf("Enter the section from 1- 3 : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Electronics\n");
        printf("1.Mobile\n2.Laptop\n3.\nSmartwatch");
        printf("Enter the section from 1- 3 : ");
        scanf("%d",&product);
        switch(product){
            case 1:printf("Your Mobile ordered successfully ");break;
            case 2:printf("Your Laptop ordered successfully");break;
            case 3:printf("Your Smartwatch ordered successfully");break;
            default:printf("Unavailable product");break;
        }
        break;  
        case 2:
        printf("Grossery\n");
        printf("1.Rice\n2.Dhal\n3.Oil\n");
        printf("Enter the section from 1- 3 : ");
        scanf("%d",&product);
        switch(product){
            case 1:printf(" rice ordered successfully ");break;
            case 2:printf(" Dhal ordered successfully");break;
            case 3:printf(" Oil ordered successfully");break;
            default:printf("Unavailable product");break;
        }
        break;  
        case 3:
        printf("Clothing\n");
        printf("1.T-Shirt\n2.Pant\n3.Shirt\n");
        printf("Enter the section from 1- 3 : ");
        scanf("%d",&product);
        switch(product){
            case 1:printf("Your T-shirt ordered successfully ");break;
            case 2:printf("Your pant ordered successfully");break;
            case 3:printf("Your Shirt ordered successfully");break;
            default:printf("Unavailable product");break;
        }
        break; 
        default:printf("Invalid product type");
    }
    return 0;
}
