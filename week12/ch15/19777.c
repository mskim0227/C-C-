#include <stdio.h>

int main(void) {
    char my_name[] = "Yejun";
    int my_age = 12;

    char friend_name[50];
    int friend_age;

    if (scanf("%49s %d", friend_name, &friend_age) == 2) {
        printf("Your name: %s, age: %d\n", my_name, my_age);
        printf("Friend's name: %s, age: %d\n", friend_name, friend_age);
    }

    return 0;
}