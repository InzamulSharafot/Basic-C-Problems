// Last Occurance of a character in a string
#include<stdio.h>
#include<string.h>

int main(void){
    char s1[100];
    fgets(s1, 100, stdin);
    char s;
    scanf("%c", &s);
    int flag = 0,i;
    for(i=0;i<strlen(s1);i++){
        if(s1[i]==s){
           flag=i;  
        }
    }
    if(flag==0){
        printf("%c is not Found\n", s);
    }
    else{
        printf("%c is found at %d\n", s, flag);
    }
    return 0;
}
