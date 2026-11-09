#include <stdio.h>

int main(void)
{
    int num = 0;

    scanf("%d", &num);

    if (num > 0) {
        printf("plus");
    } else if (num == 0) {
        printf("zero");
    } else {
        printf("minus");
    }

}
