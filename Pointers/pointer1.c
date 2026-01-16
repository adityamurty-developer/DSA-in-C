// intro to pointers
#include<stdio.h>
int main(){
    // Pointer --> data type which holds the address of other data types
    int a=5;
    int *p=&a;

    // & --> Address of operator
    printf("Address of a is %d\n", p); //this will give the address of a
    printf("Address of a is %d\n", &a);  // this will also give the address of a

    // * --> (value at) Dereference operator
    printf("Value at address p is: %d", *p); 
}