#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int row = n; row >= 1; --row) {
        for (int col = 0; col < row; ++col) putchar('*');
        puts("");
    }
    return 0;
}
