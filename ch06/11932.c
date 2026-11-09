#include <stdio.h>
int main(void)
{
    int first, last;
    scanf("%d %d", &first, &last);
    int step = first <= last ? 1 : -1;
    for (int multiplier = 1; multiplier <= 9; ++multiplier) {
        for (int dan = first;; dan += step) {
            printf("%d * %d = %2d", dan, multiplier, dan * multiplier);
            if (dan == last) break;
            printf("   ");
        }
        puts("");
    }
    return 0;
}
