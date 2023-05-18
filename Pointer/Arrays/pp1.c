#include<stdio.h>
// Add Two Numbers Using Pointers
int main(void){
    int a,b;
    scanf("%d %d", &a, &b);
    int *p = &a, *q = &b;
    printf("%d", *p+*q);
    return 0;
}