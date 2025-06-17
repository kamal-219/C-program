#include <stdio.h>

struct Student {
    char name[20];
    int marks;
};

int main() {
    struct Student s1 = {"man1", 85};
    struct Student s2 = {"man2", 90};

    struct Student *p1 = &s1, *p2 = &s2;

    if (p1->marks > p2->marks)
        printf("%s scored higher.\n", p1->name);
    else
        printf("%s scored higher.\n", p2->name);

    return 0;
}
