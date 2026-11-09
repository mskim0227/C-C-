#include <stdio.h>
int main(void)
{
    int month;
    scanf("%d", &month);
    switch (month) {
    case 2: puts("28"); break;
    case 4: case 6: case 9: case 11: puts("30"); break;
    default: puts("31");
    }
    return 0;
}
