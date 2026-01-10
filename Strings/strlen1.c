// calculating string length using library function 

#include<stdio.h>
#include<string.h>    // library for striing functions
int main(){
    char name[30];
    printf("Enter name: ");
    fgets(name, 30, stdin);

    int length=strlen(name);  // library function --> strlen()
    printf("Length of name is: %d", length);
    return 0;
}