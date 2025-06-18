#include <stdio.h>

struct sensor {
    char t[5];       
    float s[7];      
};

int main() {
    struct sensor S;
    float sum = 0;

   
    for (int i = 0; i < 7; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &S.s[i]); 
        sum += S.s[i];
    }

    float avg = sum / 7;
    printf("Average temperature = %.2f\n", avg);  
    return 0;
}
