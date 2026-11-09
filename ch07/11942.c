#include <stdio.h>
int main(void)
{
    int n, number = 1;
    scanf("%d", &n);
    for (int row = 1; row <= n; ++row) {
        for (int col = 0; col < row; ++col) printf("%d ", number++);
        puts("");
    }
    return 0;
}
