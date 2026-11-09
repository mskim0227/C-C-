#include <stdio.h>

int main(void)
{
    int arr[200];
    int n = 2;
    int i;

    arr[0] = 100;
    scanf("%d", &arr[1]);

    while (1) {
        arr[n] = arr[n - 2] - arr[n - 1];
        n++;
        if (arr[n - 1] < 0)
            break;
    }

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}