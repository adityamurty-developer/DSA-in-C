// pointer Address(&) and indirection(*)
#include<stdio.h>
int main(){
    int a=10;
    int b=8;
    int *p=&a;
    int *q=&b;

    printf("----------------------------------------------------\n");

    printf("Address of a is: %x\n", &a);
    printf("Value of a is: %d\n", *p);

    printf("----------------------------------------------------\n");

    printf("Address of b is: %x\n", &b);
    printf("Value of b is: %d\n", *q);

    printf("----------------------------------------------------");
    

}