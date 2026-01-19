#include<stdio.h>

void sum(){
    int a, b, sum=0;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum=a+b;
    printf("Sum is: %d\n", sum);
}

int main(){
    sum();
    sum();

    return 0;
}