#include <stdio.h>

struct Person {
    char name[50];
    int height;
};

int main(void) {
    struct Person people[5];

    for (int i = 0; i < 5; i++) {
        if (scanf("%49s %d", people[i].name, &people[i].height) != 2) {
            return 1;
        }
    }

    int min_idx = 0;
    for (int i = 1; i < 5; i++) {
        if (people[i].height < people[min_idx].height) {
            min_idx = i;
        }
    }

    printf("%s %d\n", people[min_idx].name, people[min_idx].height);

    return 0;
}