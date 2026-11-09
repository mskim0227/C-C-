#include <stdio.h>
int main(void)
{
    int n, number = 1, letter = 'A';
    scanf("%d", &n);
    for (int row = 1; row <= n; ++row) {
        for (int col = 1; col <= n + 1; ++col) {
            if (col <= n - row + 1) printf("%d ", number++);
            else printf("%c ", letter++);
        }
        puts("");
    }
    return 0;
}
