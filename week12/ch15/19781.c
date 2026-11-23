#include <stdio.h>

struct Student {
    char name[50];
    int score;
};

int main(void) {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        if (scanf("%49s %d", students[i].name, &students[i].score) != 2) {
            return 1;
        }
    }

    int top_idx = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].score > students[top_idx].score) {
            top_idx = i;
        }
    }

    printf("%s %d\n", students[top_idx].name, students[top_idx].score);

    return 0;
}