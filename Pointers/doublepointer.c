#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;

    printf("Value at address a is: %d\n", *p);
    printf("Value at address p is: %d\n", *(*q));
    printf("Value at address q is: %d\n", *(*(*r)));

    return 0;
}