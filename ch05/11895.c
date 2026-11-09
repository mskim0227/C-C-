#include <stdio.h>
int main(void)
{
    int number, maximum = 0, minimum = 101;
    while (scanf("%d", &number) == 1 && number != 0) {
        if (number < 1 || number > 100) continue;
        if (number > maximum) maximum = number;
        if (number < minimum) minimum = number;
    }
    printf("MAX = %d\\nMIN = %d\\n", maximum, minimum);
    return 0;
}
