#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int row = 1; row <= n; ++row) {
        for (int space = 0; space < n - row; ++space) putchar(' ');
        for (int star = 0; star < row; ++star) putchar('*');
        puts("");
    }
    return 0;
}
