#include <stdio.h>
int main(void)
{
    int number, odd = 0, even = 0;
    while (scanf("%d", &number) == 1 && number != 0) {
        if (number % 2) ++odd;
        else ++even;
    }
    printf("odd : %d\\neven : %d\\n", odd, even);
    return 0;
}
