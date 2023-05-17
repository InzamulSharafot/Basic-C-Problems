#include<stdio.h>
#include<math.h>
#include<string.h>
//Hexadecimal to Octal
int hextodec(char he[]){
    int len = strlen(he);
    len--;
    int decimal=0,val;
    for(int i=0;i<strlen(he);i++){
        if(he[i]>='A'&&he[i]<='F'){
            val = he[i]-65+10;
        }
        else if(he[i]>='a'&&he[i]<='f'){
            val = he[i]-97+10;
        }
        else if(he[i]>='0'&&he[i]<='9'){
            val = he[i]-48;
        }
        decimal += val*pow(16,len);
        len--; 
    }
    return decimal;
}
int dectocta(int oct){
    int octal = 0,val=0,j=1;
    while(oct!=0){
        val = oct%8;
        octal = octal + val*j;
        j*=10;
        oct/=8; 
    }
    return octal;

}
int main(void){
    char hex[10];
    scanf(" %[^\n]", hex);
    int decimal = hextodec(hex);
    int octal = dectocta(decimal);
    printf("%d\n", octal);
    return 0;
}