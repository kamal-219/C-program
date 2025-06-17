//string concatenation
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World";
    
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}
