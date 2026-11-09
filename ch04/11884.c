#include <stdio.h>

int main(void)
{
    int number = 0;
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("dog");
            break;
        case 2:
            printf("cat");
            break;
        case 3:
            printf("chick");
            break;
        default:
            printf("blank");
            break;
    }
}
