#include <stdio.h>

int main(void)
{
    int arr[10];
    int i;
    int sum = 0;
    int odd_sum = 0;
    double avg;

    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < 10; i++) {
        if (i % 2 == 1)
            sum += arr[i];
        else
            odd_sum += arr[i];
    }

    avg = odd_sum / 5.0;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}