#include<stdio.h>
// Print Reverse Digits Of A Given Number By Using Recursion
void prinrev(int x){
    if(x==0){
        return ;
    }
    else{
        printf("%d ", x%10);
        return prinrev(x/10);
    }
}
int main(void){
    int x;
    scanf("%d", &x);
    prinrev(x);
    return 0;
}