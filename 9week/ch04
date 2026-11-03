#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int row = 1; row < 2 * n; ++row) {
        int width = row <= n ? row : 2 * n - row;
        int spaces = row <= n ? 0 : row - n;
        for (int i = 0; i < 2 * spaces; ++i) putchar(' ');
        for (int col = 0; col < width; ++col) printf("# ");
        puts("");
    }
    return 0;
}
