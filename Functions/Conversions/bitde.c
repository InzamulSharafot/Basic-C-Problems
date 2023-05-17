#include<stdio.h>
#include<math.h>
// Binary To Decimal Conversion
int bintdec(int n){
    int sum = 0, y=0,i=0,pro = 0;
    while(n!=0){
        y = n%10;
        pro = y*pow(2,i);
        i++;
        sum+=pro;
        n/=10;
    }
    return sum;
}
int main(void){
    int a;
    scanf("%d", &a);
    int dec = bintdec(a);
    printf("The Decimal Form Of %d is : %d\n", a, dec);
    return 0;
}