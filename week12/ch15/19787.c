#include <stdio.h>

struct Contact {
    char name[101];
    char tel[101];
    char addr[101];
};

int main(void) {
    struct Contact info;

    if (scanf("%100s %100s %100s", info.name, info.tel, info.addr) == 3) {
        printf("name : %s\n", info.name);
        printf("tel : %s\n", info.tel);
        printf("addr : %s\n", info.addr);
    }

    return 0;
}