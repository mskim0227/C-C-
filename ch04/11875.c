#include <stdio.h>
int main(void)
{
    int choice;
    printf("1. ADD\\n2. EDIT\\n3. DEL\\nSelect: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
        puts("You selected ADD.");
        break;
    case 2:
        puts("You selected EDIT.");
        break;
    case 3:
        puts("You selected DEL.");
        break;
    default:
        puts("Wrong choice.");
    }
    return 0;
}
