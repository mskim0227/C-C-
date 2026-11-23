#include <stdio.h>

int main(void) {
    char name[21];
    char school[21];
    int grade;

    if (scanf("%20s %20s %d", name, school, &grade) == 3) {
        printf("Name : %s\n", name);
        printf("School : %s\n", school);
        printf("Grade : %d\n", grade);
    }

    return 0;
}