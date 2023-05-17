// Binary To Octal Coversion
#include<stdio.h>
int main(void){
    int a;
    scanf("%d",  &a);
    int sum = 0,j=1;
    while(a!=0){
       int y=a%10;
       sum = sum + y*j;
       j*=2;
       a/=10;
    }
    printf("The Octal Value Of %d is : %o", a,sum);
    return 0;
}
