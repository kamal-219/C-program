// UNIT CONVERTER 
#include <stdio.h>

int main() {
    int choice;
    float kilometre,gram,celsius,minute;
    do{
        printf("--UNIT CONVERTER\n ");
        printf("1.KILOMETRE TO METRE-\n ");
        printf("2.GRAM TO KILOGRAM-\n ");
        printf("3.MINUTE TO HOUR-\n ");
        printf("4.CELSIUS TO FAHRENHEIT\n ");
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice){
        case 1:
             printf("Enter the kilometre");
             scanf("%f",&kilometre);
             printf("converted metre is--%f",kilometre*0.621371);
             break;
        case 2:
             printf("Enter the Gram");
                scanf("%f", &gram);
                printf("Converted kilogram is--%f",(gram/1000));
                break;
        case 3:
             printf("Enter the Celsius");
             scanf("%f", &celsius);
             printf("Converted Fahrenheit is--%f",(celsius*1.8)+32);
             break;
                
        case 4:
             printf("Enter the Minute");
             scanf("%f", &minute);
             printf("Converted hour is--%f",minute*0.0166667);
             break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    }while(choice!=4);
    return 0;
}
