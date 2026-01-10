// Concatenates using strcat() function

#include<stdio.h>
#include<string.h>
int main(){
    char a[30];
    printf("Enter a: ");
    fgets(a, 30, stdin);

    // Remove newline if present
    if(a[strlen(a)-1] == '\n') {
        a[strlen(a)-1] = '\0';
    }
    char b[]="World";

    strncat(a, b, 5);   // 5 characters from b
    printf("%s", a);

    return 0;
}