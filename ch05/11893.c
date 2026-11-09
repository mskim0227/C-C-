#include <stdio.h>
int main(void)
{
    int number, count = 0, sum = 0;
    while (scanf("%d", &number) == 1 && number != 0) {
        ++count;
        sum += number;
    }
    printf("cnt = %d\\nsum = %d\\navg = %.2f\\n", count, sum,
           count ? (double)sum / count : 0.0);
    return 0;
}
