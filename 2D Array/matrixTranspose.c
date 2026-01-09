// Given a square matrix int arr[3][3], print its transpose using pointer notation.
#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int (*p)[3]=a;
    int i, j;
    for( i=0; i<3; i++){
        for( j=0; j<3; j++){
            printf("%d ", (*(*(p+j)+i)));
        }
        printf("\n");
    }
}