#include <stdio.h>
int main(void)
{
    int n, letter = 'A', number = 0;
    scanf("%d", &n);
    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            if (col < n - row) printf("%c ", letter++);
            else printf("%d ", number++);
        }
        puts("");
    }
    return 0;
}
