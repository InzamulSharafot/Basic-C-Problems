#include<stdio.h>
//Find LCM of Two Numbers Using Recursion
int find_lcm(int x, int y){
    static int max=1;
    if(max%x==0 && max%y==0){
        return max;
    }
    else{
        max++;
        find_lcm(x,y);
        return  max;
    }
}
int main(void){
    int a,b;
    scanf("%d %d", &a, &b);
    int x = find_lcm(a,b);
    printf("Enter Lcm Of Two Numbers Are : %d", x);
    return 0;
}
// General Method Of Finding Gcd of Two Numbers
/*  int gcd = 0;
    for(int i=1; i!=a && int i!=b;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    int lcm = (a*b)/gcd;
*/