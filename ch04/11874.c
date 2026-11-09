#include <stdio.h>
int main(void)
{
    int number;
    scanf("%d", &number);
    if (number <= 0) {
        puts("Non positive");
    } else if (number % 2 == 0) {
        puts("Even Number");
    } else {
        puts("Odd Number");
    }
    return 0;
}
