#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int *p;
    p=&a[3];
    printf("Value is: %d %d\n", *p--, *p--);
    printf("Value is: %d\n", *p);

}