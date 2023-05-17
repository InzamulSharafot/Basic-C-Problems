//Toggle case of each character of a string 
#include<stdio.h>
#include<string.h>
int main(void){
    char s1[100];
    scanf(" %[^\n]", s1);
    for(int i=0;i<strlen(s1);i++){
        if(s1[i]!=' '){
            if(s1[i]>='A'&&s1[i]<='z'){
                if(s1[i]>='A'&&s1[i]<='Z'){
                    s1[i] = s1[i]+32;
                }
                else{
                    s1[i] = s1[i]-32;
                }
            }
        }
    }
    for(int i=0;i<strlen(s1);i++){
        printf("%c", s1[i]);
    }
    return 0;
}