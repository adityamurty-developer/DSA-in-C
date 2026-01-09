// Given a 2D array int arr[3][3], find the maximum element using pointers.
#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int (*p)[3]=a;
    int max=(*(*(p+0)+0));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(max<(*(*(p+i)+j))){
                max=(*(*(p+i)+j));
            }
        }
    }
    printf("Max element in given 2D array is: %d ", max);
    return 0;
}