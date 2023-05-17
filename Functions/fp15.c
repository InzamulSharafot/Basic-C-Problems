#include<stdio.h>
// Print All Even & Odd numbers In A Given Range By Using Recursion
void prineve(int a, int b){
    if(a>b){
        return ;
    }
    else if(a%2==0){
        printf("%d ", a);
        return prineve(a+1, b);
    }
    else{
        return prineve(a+1,b);
    }
}
void prinodd(int a, int b){
    if(a>b){
        return ;
    }
    else if(a%2!=0){
        printf("%d ", a);
        return prinodd(a+1, b);
    }
    else{
        return prinodd(a+1,b);
    }
}
int main(void){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("Printing Even Number : ");
    prineve(a,b);
    printf("\n");
    printf("Printing odd Number : ");
    prinodd(a,b);
    return 0;
}