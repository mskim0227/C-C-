#include <stdio.h>
int main(void)
{
    char grade;
    scanf(" %c", &grade);
    switch (grade) {
    case 'A': puts("Excellent"); break;
    case 'B': puts("Good"); break;
    case 'C': puts("Usually"); break;
    default: puts("error");
    }
    return 0;
}
