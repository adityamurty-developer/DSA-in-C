#include<stdio.h>
int main(){
    int a[7]={1,2,3,4,51,16,17};
    int *p;
    p=a;
    printf("%d\n", *p);
    printf("%d %d %d\n", (*p)++, *p++, *++p);
    printf("%d\n", *p); 
    
}