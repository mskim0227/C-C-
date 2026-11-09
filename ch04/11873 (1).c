#include <stdio.h>
int main(void)
{
    int a, b, c, maximum;
    scanf("%d %d %d", &a, &b, &c);
    maximum = a;
    if (b > maximum) maximum = b;
    if (c > maximum) maximum = c;
    printf("max = %d\\n", maximum);
    return 0;
}
