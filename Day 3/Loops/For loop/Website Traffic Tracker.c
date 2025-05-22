//Website Traffic Tracker
#include <stdio.h>

int main() {
    int hits[7], total = 0, maxHits = 0, maxDay = 0;
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Enter website hits for each day of the week:\n");
    for(int i = 0; i < 7; i++) {
        printf("%s: ", days[i]);
        scanf("%d", &hits[i]);
        total += hits[i];

        if(hits[i] > maxHits) {
            maxHits = hits[i];
            maxDay = i;
        }
    }

    printf("\nTotal Weekly Website Hits: %d\n", total);
    printf("Highest Traffic: %s with %d hits\n", days[maxDay], maxHits);

    return 0;
}
