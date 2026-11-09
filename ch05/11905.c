#include <stdio.h>
int main(void)
{
    double base, height;
    char again;
    do {
        if (scanf("%lf %lf", &base, &height) != 2) break;
        printf("Triangle area = %.1f\\nContinue? ", base * height / 2.0);
        if (scanf(" %c", &again) != 1) break;
    } while (again == 'Y' || again == 'y');
    return 0;
}
