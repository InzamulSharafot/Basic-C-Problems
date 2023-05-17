//Find the reverse of a string
#include<stdio.h>
#include<string.h>
int main(){
    char s1[200];
    scanf(" %[^\n]", s1);
    for(int i = strlen(s1)-1;i>=0;i--){
        printf("%c", s1[i]);
    }
    return 0;
}