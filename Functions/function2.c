#include<stdio.h>

void sum(void);    // function declaration (void--> the fun takes no argument)

int main(){
    sum();   // function calling
}

void sum()  // function definition
{
    int a, b, sum=0;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    sum=a+b;
    printf("Sum is: %d", sum);
}