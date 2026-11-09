#include <stdio.h>
int main(void)
{
    int choice;
    do {
        printf("1. Input\\n2. Output\\n3. Delete\\n4. Finish\\nEnter number: \\n");
        if (scanf("%d", &choice) != 1) break;
        switch (choice) {
        case 1: puts("You selected Input."); break;
        case 2: puts("You selected Output."); break;
        case 3: puts("You selected Delete."); break;
        case 4: puts("You selected Finish."); break;
        default: puts("Wrong input.");
        }
        if (choice != 4) puts("");
    } while (choice != 4);
    return 0;
}
