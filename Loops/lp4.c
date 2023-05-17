#include<stdio.h>
//Print Table Of A Given Number
int main(){
    int a;
    printf("Enter Your Number:");
    scanf("%d", &a);
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n", a,i,a*i);
    }
    return 0;
}