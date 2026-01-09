// Given a 2D array arr[3][3], print all elements using pointer notation only.
#include<stdio.h>
int main(){
    int a[3][3];
    int (*p)[3]=a;
    
    printf("Enter elements of array:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", (*(p+i)+j));
        }
    }

    printf("2D array is:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", *(*(p+i)+j));
        }
        printf("\n");
    }
}