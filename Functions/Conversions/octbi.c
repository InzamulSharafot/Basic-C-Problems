#include<stdio.h>
#include<math.h>
// Octal To Binary Conversion
int octde(int n){
    int sum = 0,i=0;
    while(n!=0){
        int y=n%10;
        sum+=y*pow(8,i);
        i++;
        n=n/10;
    }
    return sum;
}
int detbi(int n){
    int bin = 0, i =1;
    while(n!=0){
        int y = n%2;
        bin = bin + y*i;
        i = i*10;
        n = n/2;
    }
    return bin;
}
int main(void){
    int a;
    scanf("%d", &a);
    int decimal = octde(a);
    int binary = detbi(decimal);
    printf("The Binary Value Of Octal %d is : %d", a, binary);
    return 0;
}