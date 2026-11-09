#include <stdio.h>
int main(void)
{
    int number, even = 0;
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &number);
        if (number % 2 == 0) ++even;
    }
    printf("Even numbers = %d\\n", even);
    return 0;
}
