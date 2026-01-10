// Concatenates without using strcat() function

#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]="Hello";
    char s2[]="World";
    int l1, l2, i;

    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0; i<=l2; i++){
        s1[l1+i]=s2[i];
    }

    printf("String after concatenation is: %s", s1);

    return 0;

}