/* Given a 2D array int arr[3][3], count how many even elements are present using pointer notation. */
#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int (*p)[3]=a;
    // to print even elements in given 2d array:
    printf("Even elements are: ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if((*(*(p+i)+j))%2==0){
                printf("%d ", *(*(p+i)+j));
            }
        }
    }

    // to count even elements and print total:
    int count = 0;
    printf("\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(*(*(p+i)+j) % 2 == 0){
                count++;
            }
        }
    }
    printf("Total even elements = %d\n", count);
    return 0;
}