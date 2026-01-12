// To compare two strings using strcmp() function 
#include<stdio.h>
#include<string.h>
int main(){
    int value;
    char s1[30], s2[20];
    printf("Enter string 1: ");
    fgets(s1, 30, stdin);

    printf("Enter string 2: ");
    fgets(s2, 20, stdin);

    value=strcmp(s1, s2);

    if(value==0){
        printf("same");
    } else {
        printf("not same");
    }

    return 0;
}