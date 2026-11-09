#include <stdio.h>
int main(void)
{
    for (int row = 1; row <= 5; ++row) {
        for (int space = 0; space < 5 - row; ++space) putchar(' ');
        for (int star = 0; star < 2 * row - 1; ++star) putchar('*');
        puts("");
    }
    return 0;
}
