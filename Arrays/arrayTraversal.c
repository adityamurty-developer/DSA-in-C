#include<stdio.h>
int main(){
    int arr[10], size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: \n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Elements in array are: ");
    for(int i=0; i<size; i++){
        printf("%d  ", arr[i]);
    }
    return 0;
}