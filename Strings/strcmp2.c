// Compare two strings without using strcmp() function 

#include<stdio.h>
int main(){
    int flag=0, i;
    char s1[30], s2[20];
    printf("Enter string 1: ");
    fgets(s1, 30, stdin);

    printf("Enter string 2: ");
    fgets(s2, 20, stdin);

    for(i=0; s1[i]!='\0' || s2[i]!='\0'; i++){
        if(s1[i]!=s2[i]){
            flag=1;
            break;
        }
    }
    
    if(flag==0){
        printf("same");
    } else {
        printf("not same");
    }

    return 0;
}