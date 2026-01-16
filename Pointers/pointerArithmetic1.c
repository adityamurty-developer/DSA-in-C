#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int *p, *q;
    p=a;

    printf("-----Post increment-----\n");
    // printf("value is: %d\n", *p++);   // 1
    printf("Value is: %d\n", *p);
    printf("value is: %d %d\n", *p++, *p++);  // 2, 1
    printf("Value is: %d\n", *p);  // 3

    q=a;
    printf("-----Pre increment------\n");
    // printf("value is %d\n", *++q); // 2
    printf("value is %d %d\n", *++q, *++q);  // 3 2
    printf("Value is: %d\n", *q);  // 3

    return 0;
}