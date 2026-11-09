#include <stdio.h>
int main(void)
{
    int number, small = 0, large = 0;
    while (scanf("%d", &number) == 1) {
        if (number < 50) ++small;
        else ++large;
        if (number >= 100) break;
    }
    printf("small : %d\\nlarge : %d\\n", small, large);
    return 0;
}
