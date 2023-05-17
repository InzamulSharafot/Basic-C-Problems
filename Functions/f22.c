#include<stdio.h>
// Determine A Given Number Is Polindrome or Not By Using Recursion
int prinrev(int x, int y){
    if(x==0){
        return y;
    }
    else{       
        y = y*10 + (x%10);
        x = x/10;
        return (prinrev(x, y));
    }
}
int main(void){
    int x;
    scanf("%d", &x);
    int y = prinrev(x, 0);
    if(y==x){
        printf("Polindrone\n");
    }
    else{
        printf("Not Polindrome\n");
    }
    return 0;
}