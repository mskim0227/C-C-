#include <stdio.h>

struct Rect {
    int x1;
    int y1;
    int x2;
    int y2;
};

int main(void) {
    struct Rect r1, r2, bounding;

    if (scanf("%d %d %d %d", &r1.x1, &r1.y1, &r1.x2, &r1.y2) != 4) {
        return 1;
    }
    if (scanf("%d %d %d %d", &r2.x1, &r2.y1, &r2.x2, &r2.y2) != 4) {
        return 1;
    }

    bounding.x1 = (r1.x1 < r2.x1) ? r1.x1 : r2.x1;
    bounding.y1 = (r1.y1 < r2.y1) ? r1.y1 : r2.y1;
    bounding.x2 = (r1.x2 > r2.x2) ? r1.x2 : r2.x2;
    bounding.y2 = (r1.y2 > r2.y2) ? r1.y2 : r2.y2;

    printf("%d %d %d %d\n", bounding.x1, bounding.y1, bounding.x2, bounding.y2);

    return 0;
}