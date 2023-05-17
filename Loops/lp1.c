#include<stdio.h>
//Reversing A Number
int main(){
    int a, rev=0;
    printf("Enter The Number:");
    scanf("%d", &a);
    while (a!=0)
    {
        int r = a%10;
        rev = rev*10 + r;
        a = a/10;
    }
    printf("REVERSE NUMBER : %d",rev);
    return 0;
}