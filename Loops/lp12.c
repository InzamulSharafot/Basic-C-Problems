#include<stdio.h>
//Determining A Number Wheather Divisible by 11 or not by using vedic rule 
int main(){
    int a;
    printf("Enter Your Number : ");
    scanf("%d", &a);
    int even=0, odd = 0, rev = 0, i =1;
    int no = a;
    while(no!=0){
        int re = no%10;
        rev = rev*10 + re;
        no = no/10;
    }
    while(a!=0){
        int x = a%10;
        if(i%2==0){
            even = even + x;
        }
        else{
            odd = odd + x;
        }
        i++;
        a = a/10;
    }
    if(even==odd){
        printf("Is Divisible By 11\n\n");
    }
    else{
        printf("Is not Divisible By 11\n\n");
    }
}