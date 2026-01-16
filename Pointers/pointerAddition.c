#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int *p=&a[0];
    
    printf("Value at address a is: %d\n", *p);  // 1

    p=p+1;
    printf("Value at address a is: %d\n", *p);  // 2

    p=p+2;
    printf("Value at address a is: %d\n", *p);  // 4

    return 0;
}