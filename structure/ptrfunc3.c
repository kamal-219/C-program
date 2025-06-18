//scores print use struct and pointer
#include <stdio.h>
struct Team {
    int id;
    int scores[5];
};


void fillScores(struct Team *t) {
    printf("Enter team ID: ");
    scanf("%d", &t->id);

    printf("Enter 5 scores:\n");
    for (int i = 0; i < 5; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &t->scores[i]);
    }
}


void displayScores(struct Team *t) {
    printf("\nTeam ID: %d\n", t->id);
    printf("Scores: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", t->scores[i]);
    }
    printf("\n");
}

int main() {
    struct Team t;

   
    fillScores(&t);
    displayScores(&t);

    return 0;
}

