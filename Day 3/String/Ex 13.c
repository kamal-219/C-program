//Implement dynamic string concatenation (strcat) without library functions.
#include <stdio.h>
int main() {
    char a[] = "Silicon";
    char b[] = "Craft";
    char result[100]; 
    int i = 0, j = 0;
    while (a[i] != '\0') {
        result[i] = a[i];
        i++;
    }
    while (b[j] != '\0') {
        result[i] = b[j];
        i++;
        j++;
    }
    result[i] = '\0';
    printf("Concatenated string: %s\n", result);

    return 0;
}
