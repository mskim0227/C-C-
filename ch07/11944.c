#include <stdio.h>
int main(void)
{
    int letter = 'a', number = 1;
    for (int row = 1; row <= 4; ++row) {
        for (int col = 1; col <= 5; ++col) {
            if (col <= row) printf("%c ", letter++);
            else printf("%d ", number++);
        }
        puts("");
    }
    return 0;
}
