#include <stdio.h>
int main(void)
{
    int n, value, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &value);
        sum += value;
    }
    printf("%.2f\\n", (double)sum / n);
    return 0;
}
