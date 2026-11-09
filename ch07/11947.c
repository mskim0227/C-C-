#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int row = 1; row < 2 * n; ++row) {
        int width = row <= n ? row : 2 * n - row;
        for (int star = 0; star < width; ++star) putchar('*');
        puts("");
    }
    return 0;
}
