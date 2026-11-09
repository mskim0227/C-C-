#include <stdio.h>
int main(void)
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    for (int row = 1; row <= rows; ++row) {
        for (int col = 1; col <= cols; ++col) printf("%d ", row * col);
        puts("");
    }
    return 0;
}
