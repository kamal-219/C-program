//Implement substring search without strstr().
#include <stdio.h>
#include <string.h>

int main() {
    char word[100] = "silicon craft vlsi";
    char search[50] = "craft";

    int wordlen = strlen(word);
    int searchlen = strlen(search);
    int found = 0;

    for (int i = 0; i <= wordlen - searchlen; i++) {
        int j;
        for (j = 0; j < searchlen; j++) {
            if (word[i + j] != search[j]) {
                break;
            }
        }

        if (j == searchlen) {
            found = 1;
            printf("Substring found at index %d\n", i);
            break;
        }
    }

    if (!found) {
        printf("Substring not found.\n");
    }

    return 0;
}

