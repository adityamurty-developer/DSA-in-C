#include <stdio.h>

int main() {
    int a[10], size, i, num, pos;

    printf("Enter size of array (max 9): ");
    scanf("%d", &size);

    if(size >= 10) {
        printf("Array is full, insertion not possible.\n");
        return 0;
    }

    printf("Enter elements of array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter data you want to insert: ");
    scanf("%d", &num);

    printf("Enter position (1 to %d): ", size + 1);
    scanf("%d", &pos);

    if(pos < 1 || pos > size + 1) {
        printf("Invalid position!\n");
        return 0;
    }

    for(i = size - 1; i >= pos - 1; i--) {
        a[i + 1] = a[i];
    }

    a[pos - 1] = num;
    size++;

    printf("Array after insertion:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
