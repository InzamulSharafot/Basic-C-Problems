#include<stdio.h>
#include<math.h>
#include<string.h>
// Hexadecimal To Binary
int hextdec(char h[]){
    int len = strlen(h);
    len--;
    int decimal = 0,val;
    for(int i=0;i<strlen(h);i++){
        if(h[i]>='a'&&h[i]<='f'){
            val = h[i]-97+10;
        }
        else if(h[i]>='A'&&h[i]<='F'){
            val = h[i]-65+10;
        }
        else if(h[i]>='0'&&h[i]<='9'){
            val = h[i]-48;
        }
        decimal += val*pow(16,len);
        len--;
    }
    return decimal;
}
int dectbin(int b){
    int binary = 0,i=1;
    while(b!=0){
        int y = b%2;
        binary = binary + i*y;
        i*=10;
        b/=2;
    }
    return binary;
}
int main(void){
    char hex[10];
    scanf(" %[^\n]", hex);
    int decimal = hextdec(hex);
    int binary = dectbin(decimal);
    printf("%d\n", binary);
    return 0;
}