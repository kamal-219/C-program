#include <stdio.h>

int main() {
    int a[] = {4, 6, 5, 4, 9, 2, 6, 2, 5};  
    int output = 0;
    int len = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < len; i++) {
            output ^= a[i];
    }

    printf("The non-repeating number is: %d\n", output);

    return 0;
}
