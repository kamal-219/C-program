#include <stdio.h>
#include <string.h>

struct RFID_Tag {
    int id;
    char name[20];
    char status[5]; 
};

int main() {
    struct RFID_Tag tag[] = {
        {1, "Laptop", "IN"},
        {2, "Tab", "OUT"},
        {3, "Mouse", "IN"}
    };
    int n = 3, i, input;

    while (1) {
        printf("\nScan ID (0 to exit): ");
        scanf("%d", &input);

        if (input == 0) break;

        for (i = 0; i < n; i++) {
            if (tag[i].id == input) {
                printf("Item: %s\n  Status: %s\n", tag[i].name, tag[i].status);
               
                strcpy(tag[i].status, strcmp(tag[i].status, "IN") == 0 ? "OUT" : "IN");
                printf("New Status: %s\n", tag[i].status);
                break;
            }
        }

        if (i == n)
            printf("Tag not found!\n");
    }

    return 0;
}
