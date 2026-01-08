#include <stdio.h>

int main() {
    int a[10];       
    int size, i, num, pos;

    // Input size and array elements
    printf("Enter current size of array : ");
    scanf("%d", &size);

    if(size > 10) {
        printf("Size exceeds array capacity!\n");
        return 0;
    }

    printf("Enter %d elements: ", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Input element to insert and position
    printf("Enter the element to insert: ");
    scanf("%d", &num);

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    // Validate position and capacity
    if(pos < 1 || pos > size + 1) {
        printf("Invalid position!\n");
        return 0;
    }

    if(size == 10) {
        printf("Array is full, cannot insert!\n");
        return 0;
    }

    int index = pos - 1;  // Convert position to array index

    // Right shift elements to make space
    for(i = size - 1; i >= index; i--) {
        a[i + 1] = a[i];
    }

    // Insert the element
    a[index] = num;
    size++;  // Update size

    printf("Array after insertion: ");
    for(i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

