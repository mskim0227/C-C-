#include <stdio.h>
int main(void)
{
    int n, number = 1;
    scanf("%d", &n);
    for (int row = 0; row < n; ++row) {
        for (int space = 0; space < 2 * row; ++space) putchar(' ');
        for (int col = 0; col < n - row; ++col) printf("%d ", number++);
        puts("");
    }
    return 0;
}
