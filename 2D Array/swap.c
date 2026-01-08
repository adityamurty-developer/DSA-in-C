// swap a 2D array --> d[2][2] = {{1,2},{3,4}};

#include<stdio.h>
int main(){
    int d[2][2]={ {1,2}, {3,4} };
    int (*p)[2]=d;
    int temp=*(*(p+0)+1);
    *(*(p+0)+1)=*(*(p+1)+0);
    *(*(p+1)+0)=temp;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", *(*(p+i)+j));
        }
        printf("\n");
    }
    return 0;
}