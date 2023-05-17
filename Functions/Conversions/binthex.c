#include<stdio.h>
#include<math.h>
#include<string.h>
//Binary To Hexadecimal
int bintdec(int b){
    int sum = 0,i=0;
    while(b!=0){
        int y = b%10;
        sum += y*pow(2,i);
        b/=10;
        i++;
    }
    return sum;
}

int main(void){
    int a, i=0;
    char hexa[10];
    scanf("%d", &a);
    int decimal = bintdec(a);
    while(decimal!=0){
        int y = decimal%16; 
        if(y<10){
            hexa[i++] = y+48;
        }
        else{
            hexa[i++] = y+55;
        }
        decimal/=16;
    }
    for(int j=i-1;j>=0;j--){
        printf("%c", hexa[j]);
    }
    return 0;
}