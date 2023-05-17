#include<iostream>
#include<cstring>
using namespace std;
// Removing All Vowels From A String
int main(){
    char str[30];
    cout<<"Enter A String : ";
    fgets(str, 30, stdin);
    char *ar;
    ar = str;
    while(*ar!='/0'){
        switch(*ar){
            case 'a' : *ar='1';break;
            case 'A' : *ar='1';break;
            case 'e' : *ar='1';break;
            case 'E' : *ar='1';break;
            case 'i' : *ar='1';break;
            case 'I' : *ar='1';break;
            case 'o' : *ar='1';break;
            case 'O' : *ar='1';break;
            case 'u' : *ar='1';break;
            case 'U' : *ar='1';break;
            default : break;
        }
        ar++;
    }
    puts(str);
    return 0;
}