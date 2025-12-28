#include<stdio.h>
int main(){
    int arr[5], i, sum=0;
    
    printf("Enter 5 elements of array: \n");
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("Sum of array is: %d", sum);

    return 0;
}