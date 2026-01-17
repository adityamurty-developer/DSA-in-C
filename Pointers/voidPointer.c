#include<stdio.h>
int main(){
    // Void Pointer --> can store the address of any data type
    void *vp;
    int a=10;
    float b=15.78;
    char c='A';

    vp=&a;
    printf("a = %d\n", *(int*)vp);

    vp=&b;
    printf("b = %.2f\n", *(float*)vp);

    vp=&c;
    printf("c = %c\n", *(char*)vp);

    return 0;
}