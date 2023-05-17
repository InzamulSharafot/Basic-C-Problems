#include<iostream>
#include<cstring>
using namespace std;
// Strlwr() Function (To Lower-Case) & Strupr() Function (To Upper-Case)
int main(){
    char* ch1[100], ch2[100], ch3[100], ch4[100];
    cout<<"Enter A String In Lower Case : ";
    fgets(ch1, 100, stdin);
    ch2[100] = strupr(ch1[100]);
    puts(ch2);
    cout<<"Enter A String In Upper Case : ";
    fgets(ch3, 100, stdin);
    ch4[100] = strlwr(ch3[100]);
    puts(ch2);
    return 0;
}