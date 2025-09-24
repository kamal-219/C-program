#include <stdio.h>
#include <string.h>

void rem(char *s, int l) {
    int i, j = 0;
    for (i = 0; i < l; i++) {
        if (*(s + i) != ' ') { 
            *(s + j) = *(s + i);
            j++;
        }
    }
    *(s + j) = '\0';  
}


int main() {
    char a[] = "my name";
    int l = strlen(a);
    rem(a, l);
    printf("%s\n", a);
    return 0;
}

