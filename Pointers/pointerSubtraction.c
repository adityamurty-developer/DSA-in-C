#include<stdio.h>
int main(){
    int a[5]={10, 20, 30, 40, 50};
    int *p=&a[0];
    int *q=&a[4];
    int d;
    d=p-q;
    printf("Value at d is: %d\n", d);
    *q=25;
    printf("value at pointer q is: %d\n", *q);

    d=q-p;
    printf("Value at d is: %d\n", d);

    *p=27;
    printf("Value at pointer p is: %d\n", *p);

    q=q-3;
    printf("value at pointer q is: %d\n", *q);

    p=p+3;
    printf("Value at pointer p is: %d\n", *p);

    return 0;
}