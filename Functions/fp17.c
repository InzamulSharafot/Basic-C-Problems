#include<stdio.h>
// Find The Sum Of All Digits In A Given Number
int sumdigit(long long int x){
    if(x==0){
        return 0;
    }
    else{
        return ((x%10)+sumdigit(x/10));
    }
}
int main(void){
    long int a;
    scanf("%d", &a);
    int sum = sumdigit(a);
    printf("Sum Of Digits : %d\n",sum);
    return 0;
}