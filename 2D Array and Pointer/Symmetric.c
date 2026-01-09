// Using pointers, check whether a given n x n matrix is symmetric.
#include<stdio.h>
int main(){
    int a[3][3] = {{1,2,3},{2,5,6},{3,6,9}};
    int (*p)[3] = a;
    int flag = 1;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(*(*(p+i)+j) != *(*(p+j)+i)){
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("Symmetric Matrix\n");
    else
        printf("Not Symmetric Matrix\n");

    return 0;
}
