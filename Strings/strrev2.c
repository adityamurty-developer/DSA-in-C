// To reverse a string

#include<stdio.h>
#include<string.h>
int main(){
    int l, i, j;
    char s1[30], temp;
    printf("Enter a string: ");
    fgets(s1, 30, stdin);

    if(s1[strlen(s1)-1] == '\n') {
        s1[strlen(s1)-1] = '\0';
    }

    l=strlen(s1);

    for(i=0, j=l-1; i<j; i++, j--){
        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
    }

    printf("Reverse of string is: %s", s1);

    return 0;
}