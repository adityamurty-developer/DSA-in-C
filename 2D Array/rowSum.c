// Given int arr[3][4], calculate and print sum of each row using pointers.

#include<stdio.h>
int main(){
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*p)[4]=a;
    int sum;
    for(int i=0; i<3; i++){
        sum=0;
        for(int j=0; j<4; j++){
            sum+=(*(*(p+i)+j));
        }
        printf("Sum of rows %d is %d\n", i+1, sum);
    }
    
}