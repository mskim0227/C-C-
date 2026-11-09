#include <stdio.h>
int main(void)
{
    int a, b, sum = 0, count = 0;
    scanf("%d %d", &a, &b);
    if (a > b) { int temp = a; a = b; b = temp; }
    for (int i = a; i <= b; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            ++count;
        }
    }
    printf("sum : %d\\navg : %.1f\\n", sum,
           count ? (double)sum / count : 0.0);
    return 0;
}
