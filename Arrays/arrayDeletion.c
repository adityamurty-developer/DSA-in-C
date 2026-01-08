#include<stdio.h>

int main(){
    int a[10], size, pos, i;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array:\n");
    for(i = 0; i < size; i++){
        scanf("%d", &a[i]);   // FIXED
    }

    printf("From which position you want to delete an element: ");
    scanf("%d", &pos);       // FIXED

    if(pos < 1 || pos > size){
        printf("Invalid Position !!");
    } 
    else {
        for(i = pos - 1; i < size - 1; i++){
            a[i] = a[i + 1];
        }
        size--;
    }

    printf("Array after deletion is:\n");
    for(i = 0; i < size; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
