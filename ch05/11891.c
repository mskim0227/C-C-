#include <stdio.h>
int main(void)
{
    int score;
    while (scanf("%d", &score) == 1 && score >= 0 && score <= 100)
        puts(score >= 80 ? "Pass" : "Fail");
    return 0;
}
