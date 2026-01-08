#include <stdio.h>
int main() {
    int a[2][3] = {{1,2,3}, {4,5,6}};
    int (*p)[3] = a;  // pointer to array of 3 ints

    printf("%d\n", *(*(p + 0) + 1));  // row 0, col 1 → 2
    printf("%d\n", *(*(p + 1) + 2));  // row 1, col 2 → 6
    return 0;
}


