#include <stdio.h>
int main(void)
{
    int n, letter = 'A';
    scanf("%d", &n);
    for (int row = n; row >= 1; --row) {
        for (int col = 0; col < row; ++col) putchar(letter++);
        puts("");
    }
    return 0;
}
