#include<stdio.h>
// Sum Of A Natural Number
int main(){
    int a,i=0,sum=0;
    printf("Enter The Number:");
    scanf("%d", &a);
    while(i<=a){
        sum += i;
        i++;
    }
    printf("Sum = %d", sum);
    return 0;
}