/* Given a square matrix int mat[3][3], calculate sum of main diagonal using pointer notation only.
Use *(*(mat+i)+i) to access diagonal elements. */

#include<stdio.h>
int main(){
    int mat[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int (*p)[3]=mat;
    int sum=0;
    for(int i=0; i<3; i++){
        sum+=(*(*(p+i)+i));
    }
    printf("Diagonal sum is %d", sum);
    return 0;
}