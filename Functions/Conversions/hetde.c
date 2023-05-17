#include<stdio.h>
#include<math.h>
#include<string.h>
// Hexadecimal To Decimal Conversion
int bintdec(char ar[]){
    int len = strlen(ar);
    len--;
    int val,decimal=0;
    for(int i=0;ar[i]!='\0';i++){
       if(ar[i]>='a'&&ar[i]<='f'){
        val = ar[i]-97+10;
       }
       else if(ar[i]>='A'&&ar[i]<='F'){
           val = ar[i]-65+10;
       }
       else if(ar[i]>='0'&&ar[i]<='9'){
            val = ar[i]-48;
       }
       decimal += val*pow(16, len);
       len--;
    }
    return decimal;
    
}
int main(void){
    char arr[10];
    scanf(" %[^\n]", arr);
    int dec = bintdec(arr);
    printf("The Decimal Form Of %s is : %d\n", arr, dec);
    return 0;
}