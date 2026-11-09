#include <stdio.h>
int main(void)
{
    int number;
    scanf("%d", &number);
    puts(number % 2 == 0 ? "Even" : "Odd");
    return 0;
}
