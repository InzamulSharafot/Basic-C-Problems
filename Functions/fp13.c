#include<stdio.h>
//Print First N Natural Number By Using Recursion
void pnn(int n, int m){
    if(n>m){
        return ;
    }
    else{
        printf("%d ", n);
        pnn(n+1,m);
    }
}
int main(void){
    int n;
    scanf("%d", &n);
    pnn(1,n);
    return 0;
}