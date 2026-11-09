#include <stdio.h>
int main(void)
{
    int n, score, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &score);
        sum += score;
    }
    double average = (double)sum / n;
    printf("avg : %.1f\\n", average);
    puts(average >= 80.0 ? "pass" : "fail");
    return 0;
}
