#include<stdio.h>
//Printing Number of Digits In A Given Number
int main(){
    int a;
    printf("Enter Your Number:");
    scanf("%d",&a);
    int i=0,remain;
    while(a!=0){
        remain = a%10;
        i++;
        a = a/10;
    }
    printf("Number Of Digits In This Number : %d", i);
}