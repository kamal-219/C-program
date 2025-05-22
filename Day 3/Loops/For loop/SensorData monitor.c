//sensor Data Monitor system
#include <stdio.h>

int main() {
    float temps[24], sum = 0, avg, max, min;
    int i;

    printf("Enter temperature readings for 24 hours:\n");
    for(i = 0; i < 24; i++) {
        printf("Hour %2d: ", i + 1);
        scanf("%f", &temps[i]);
        sum += temps[i];

        if(i == 0) {
            max = min = temps[i]; 
        } else {
            if(temps[i] > max)
                max = temps[i];
            if(temps[i] < min)
                min = temps[i];
        }
    }

    avg = sum / 24.0;

    printf("\nTemperature Analysis:\n");
    printf("Maximum Temperature: %.2f°C\n", max);
    printf("Minimum Temperature: %.2f°C\n", min);
    printf("Average Temperature: %.2f°C\n", avg);

    return 0;
}
