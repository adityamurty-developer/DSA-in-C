// calculating length of string without using strlen() function

#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    int i=0, count=0;
    printf("Enter a string: ");
    fgets(str, 30, stdin);

// Remove newline if present
    if(str[strlen(str)-1] == '\n') {
        str[strlen(str)-1] = '\0';
    }

    while(str[i]!='\0'){
        count++;
        i++;
    }

    printf("length of string is: %d", count);
    return 0;

}