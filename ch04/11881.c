#include <stdio.h>

int main(void)
{
    int a, b = 0;
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d", a - b);
    } else {
        printf("%d", b - a);
    }
}
