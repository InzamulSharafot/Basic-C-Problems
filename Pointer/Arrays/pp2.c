#include<stdio.h>
// Swap Two Numbers Using Pointers
int main(void){
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    int *p = &a;
    int *q = &b;
    int temp = *q;
    *q = *p;
    *p = temp;
    printf("a = %d b = %d", a,b);
    return 0;
}