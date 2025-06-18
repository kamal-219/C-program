#include <stdio.h>

struct Device {
    char name[15];
    int status; 
};

int main() {
    struct Device d[3];
    int errorCount = 0;

    for (int i = 0; i < 3; i++) {
        printf("Device %d name: ", i + 1);
        scanf("%s", d[i].name);
        printf("Status 0 = OK, 1 = ERROR : ");
        scanf("%d", &d[i].status);

        if (d[i].status == 1)
            errorCount++;
    }

    printf("Devices with ERROR: %d\n", errorCount);
    return 0;
}
