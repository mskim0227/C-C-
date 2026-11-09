#include <stdio.h>
int main(void)
{
    int score, count = 0, sum = 0;
    while (scanf("%d", &score) == 1 && score >= 0 && score <= 100) {
        sum += score;
        ++count;
    }
    printf("sum : %d\\navg : %.1f\\n", sum,
           count ? (double)sum / count : 0.0);
    return 0;
}
