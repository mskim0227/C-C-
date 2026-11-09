#include <stdio.h>
int main(void)
{
    char ch;
    scanf(" %c", &ch);
    for (int i = 0; i < 20; ++i) putchar(ch);
    return 0;
}
