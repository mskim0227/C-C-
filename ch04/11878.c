#include <stdio.h>
int main(void)
{
    double gpa;
    scanf("%lf", &gpa);
    if (gpa >= 4.0) puts("scholarship");
    else if (gpa >= 3.0) puts("next semester");
    else if (gpa >= 2.0) puts("seasonal semester");
    else puts("retake");
    return 0;
}
