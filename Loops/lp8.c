#include<stdio.h>
//Printing Fibonacci Number
int main(){
    int n;
    printf("Enter Your Number : ");
    scanf("%d", &n);
    int Next_value = 0, Second_value = 1, First_value = 0, i=0;
    while(i<n){
        if(i<=1){
            Next_value = i;
        }
        else{
            Next_value = First_value + Second_value;
            First_value = Second_value;
            Second_value = Next_value;
        }
        printf("%d\t", Next_value);
        i++;
    } 
    return 0;
}