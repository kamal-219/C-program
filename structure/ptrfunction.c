#include <stdio.h>

struct Car {
    char model[20];
    int version;
};

void printCar(struct Car *c) {
    printf("Model= %s\n", c->model);
    printf("version= %d\n", c->version);
}

int main() {
    struct Car c1 = {"BMW", 2025};
    printCar(&c1);
    return 0;
}
