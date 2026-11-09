#include <stdio.h>

int main(void)
{
    int arr[10][10] = {0};
    int n;
    int i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        arr[i][0] = 1;
        for (j = 1; j <= i; j++)
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
    }

    for (i = n - 1; i >= 0; i--) {
        for (j = 0; j <= i; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}