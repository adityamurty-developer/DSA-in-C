// To reverse a string 

#include<stdio.h>
#include<string.h>
int main(){
    char s1[30], temp;
    int l, i;

    printf("Enter a string: ");
    fgets(s1, 30, stdin);

    if(s1[strlen(s1)-1] == '\n') {
        s1[strlen(s1)-1] = '\0';
    }

    l=strlen(s1);

    for(i=0; i<l/2; i++){
        temp=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=temp;
    }

    printf("%s", s1);
    return 0;
}