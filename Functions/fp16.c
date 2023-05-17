#include<stdio.h>
// Find Power Of A Given Number By Using Recursion
long int poX(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return (a*poX(a,b-1));
    }
}
int main(void){
    int x,y;
    scanf("%d %d", &x,&y);
    long int power = poX(x,y);
    printf("Power = %ld", power);
    return 0;
}