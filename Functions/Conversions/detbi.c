#include<stdio.h>
// Decimal To Binary Coversion
int main(void){
    int a,k=0;
    scanf("%d", &a);
    int n=a;
    int arr[15];
    while(a!=0){
        arr[k] = a%2;
        k++;
        a/=2;
    }
    printf("The Octal Value of %d is : ", n);
    for(int i=k-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}