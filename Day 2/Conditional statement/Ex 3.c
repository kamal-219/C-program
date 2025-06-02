// Library fine Calculation
#include <stdio.h>
int main() {
    int LD,fine;
    printf("Enter the number of days late: ");
    scanf("%d",&LD);
    if(LD<=5){
        fine=1*LD;
        printf("your fine amount is:  %d",fine);
    }
     else if((LD>=6)&&(LD<=10)){
        fine=2*LD;
        printf("your fine amount is:  %d",fine);
    }
    else if((LD>=11)&&(LD<=30)){
        fine=5*LD;
        printf("your fine amount is:  %d",fine);
    }
    else{
        fine=10*LD;
        printf("Your fine amount is: %d and Membership Cancelled",fine);
    }
    return 0;
}
