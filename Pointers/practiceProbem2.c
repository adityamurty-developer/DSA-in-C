#include<stdio.h>
int main(){
    char str[]="Hello I am Aditya ";
    char *p=str;
    printf("%c\n", *p); // H
    printf("%c\n", *(p++ +1));   // *(100 +1) --> *(101) --> e 
    printf("%c\n", *((p-- +5)-1)+3);  // *(105)+3 --> #
    printf("%c\n", *(++p + 10)-5); // *(111)-5 --> <
    printf("%c %c %c", *p, *++p, *--p);   //  e e H

    return 0;
}