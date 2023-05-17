//Reverse order of words of a string
#include<stdio.h>
#include<string.h>

int main(void){
    char s1[100], s2[100];
    int k=0;
    scanf(" %[^\n]", s1);
    for(int i=0;i<strlen(s1);i++){
        if(s1[i]!=' '){
            s2[k] = s1[i];
            k++;
        }
        else{
            for(int i=k;i>=0;i--){
                printf("%c", s2[i]);
            }
            printf(" ");
            for(int i=0;i<100;i++){
                s2[i] = 0;
            }
            k=0;
        }
    }
    if(k!=0){
        for(int i=k;i>=0;i--){
            printf("%c", s2[i]);
        }
    }
    return 0;
}