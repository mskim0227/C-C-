#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int row = 1; row <= n; ++row) {
        for (int space = 0; space < 2 * (n - row); ++space) putchar(' ');
        for (int star = 0; star < 2 * row - 1; ++star) putchar('*');
        puts("");
    }
    return 0;
}
