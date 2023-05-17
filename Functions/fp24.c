#include<stdio.h>
int find_gcd(int a, int b){
    while(a!=b){
        if(a>b){
            return find_gcd(a-b,b);
        }
        else{
            return find_gcd(a,b-a);
        }
    }
}
int main(void){
    int a,b;
    int gcd;
    scanf("%d %d", &a, &b);
    gcd = find_gcd(a,b);
    printf("GCD of Those Two Numbers Are : %d", gcd);
    return 0;
}
// General Method Of Finding Gcd of Two Numbers
/*  int gcd = 0;
    for(int i=1; i!=a && int i!=b;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
*/