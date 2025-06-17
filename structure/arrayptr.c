#include <stdio.h>

struct worker {
    int id;
    char name[10];
};

int main() {
    struct worker man[3] = {
        {1011, "sam"},
        {1012, "sung"},
        {1013, "ford"}
    };

    struct worker *ptr = man;  

    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s\n", (ptr + i)->id, (ptr + i)->name);
    }

    return 0;
}
