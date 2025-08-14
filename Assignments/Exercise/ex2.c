//power shell
#include <stdio.h>
#include <string.h>

void open_shell();

int main() {
    open_shell();
    return 0;
}

void open_shell() {
    char command[20];
    char stored_dir[20] = "";
    
    while (1) {
        printf(">> ");
        scanf("%s", command);

        if (strcmp(command, "mkdir") == 0) {
            char filename[20];
            scanf("%s", filename);
            strcpy(stored_dir, filename);
            printf("Directory '%s' created \n", filename);
        }
        else if (strcmp(command, "ls") == 0) {
            if (strlen(stored_dir) > 0)
                printf("%s\n", stored_dir);
            else
                printf("No directories\n");
        }
        else if (strcmp(command, "pwd") == 0) {
            printf("/home/user/%s\n", stored_dir);
        }
        else if (strcmp(command, "exit") == 0) {
            printf("Exiting shell...\n");
            break;
        }
        else {
            printf("Unknown command: %s\n", command);
        }
    }
}
