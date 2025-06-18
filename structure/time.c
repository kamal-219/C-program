#include <stdio.h>

struct Time {
    int hour;
    int minute;
    int second;
};


void incrementTime(struct Time *t) {
    t->second++;
    if (t->second == 60) {
        t->second = 0;
        t->minute++;
    }
    if (t->minute == 60) {
        t->minute = 0;
        t->hour++;
    }
    if (t->hour == 24) {
        t->hour = 0;
    }
}


void displayTime(struct Time t) {
    printf("%02d:%02d:%02d\n", t.hour, t.minute, t.second);
}

int main() {
    struct Time t = {30, 59, 23}; 

    printf("Before increment: ");
    displayTime(t);

    incrementTime(&t);

    printf("After increment : ");
    displayTime(t);

    return 0;
}
