#include<stdio.h>
int main(){
    int a=5;
    int *p1=&a;
    int *p2=NULL;

    printf("Value of a is: %d\n", *p1);
    printf("Value at pointer p2 is: %d\n", p2);

    return 0;
}