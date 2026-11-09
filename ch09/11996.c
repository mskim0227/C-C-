#include <stdio.h>

int main(void)
{
    int arr[5][5] = {0};
    int i, j;

    for (i = 0; i < 5; i++) {
        arr[i][0] = 1;
        for (j = 1; j <= i; j++)
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}