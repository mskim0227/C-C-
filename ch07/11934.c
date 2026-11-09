#include <stdio.h>
int main(void)
{
    for (int row = 1; row <= 3; ++row) {
        for (int col = 0; col < row; ++col) putchar('*');
        puts("");
    }
    return 0;
}
