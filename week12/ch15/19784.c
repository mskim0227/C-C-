#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int height;
    double weight;
};

int main(void) {
    struct Person people[5];

    for (int i = 0; i < 5; i++) {
        if (scanf("%49s %d %lf", people[i].name, &people[i].height, &people[i].weight) != 3) {
            return 1;
        }
    }

    // 이름(name) 기준 사전순 오름차순 정렬
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (strcmp(people[j].name, people[j + 1].name) > 0) {
                struct Person temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n", people[i].name, people[i].height, people[i].weight);
    }

    return 0;
}