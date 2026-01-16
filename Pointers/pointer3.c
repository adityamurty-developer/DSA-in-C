// pointer assignment
#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int *p=&a;
    int *q=&b;

    *q=*p;   // *p is assigned to *q

    printf("Value of a is: %d b is: %d", *p, *q);
}