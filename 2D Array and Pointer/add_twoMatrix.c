#include<stdio.h>
int main(){
    int a[3][3], sum[3][3];
    int i, j;
    printf("Enter elements of array a: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Elements of first matrix are: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int b[3][3];
    printf("Enter elements of array b: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }

    printf("Elements of second matrix are: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("Addition of matrix is: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }

}