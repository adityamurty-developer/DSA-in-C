// to convert a string into lower case

#include<stdio.h>
#include<string.h>
int main(){
    char s1[30];
    printf("Enter a string: ");
    fgets(s1, 30, stdin);

    if(s1[strlen(s1)-1] == '\n') {
        s1[strlen(s1)-1] = '\0';
    }

    for(int i=0; s1[i]!='\0'; i++){
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]=s1[i]+32;
        }
    }
    printf("String is: %s", s1);
    return 0;
}