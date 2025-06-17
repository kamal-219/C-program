#include<stdio.h>
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct infant {
    char name[50];
    int no;
    struct Date borndate;  
};

int main() {
    struct infant bab;

    printf("babe name: ");
    scanf("%s", bab.name);  
    printf("BED No: ");
    scanf("%d", &bab.no);

    printf("born date : ");
    scanf("%d %d %d", &bab.borndate.day, &bab.borndate.month, &bab.borndate.year);

    
    printf("\n--- Employee Details ---\n");
    printf("Name         : %s\n", bab.name);
    printf("ID           : %d\n", bab.no);
    printf("Joining Date : %02d-%02d-%04d\n", 
           bab.borndate.day, bab.borndate.month, bab.borndate.year);

    return 0;
}
