#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int minimum = a < b ? a : b;
    minimum = minimum < c ? minimum : c;
    printf("%d\\n", minimum);
    return 0;
}
