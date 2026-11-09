#include <stdio.h>
int main(void)
{
    int number;
    while (1) {
        printf("1. Korea\\n2. USA\\n3. Japan\\n4. China\\nnumber? \\n");
        if (scanf("%d", &number) != 1) break;
        if (number < 1 || number > 4) {
            puts("none");
            break;
        }
        switch (number) {
        case 1: puts("Seoul"); break;
        case 2: puts("Washington"); break;
        case 3: puts("Tokyo"); break;
        case 4: puts("Beijing"); break;
        }
        puts("");
    }
    return 0;
}
