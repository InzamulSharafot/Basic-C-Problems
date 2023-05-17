#include<stdio.h>
// Decimal To Octal Coversion
int main(void){
    int a,k=0;
    scanf("%d", &a);
    int octal = 0, i=1;
    while(a!=0){
        int re = a%8;
        octal = octal + re*i;
        i*=10;
        a/=8;
    }
    printf("Octal Value of %d is : %d",a,octal);
    return 0;
}