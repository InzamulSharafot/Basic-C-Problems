#include<stdio.h>
#include<string.h>
// A String Palindrome Or Not
int main(void){
    char S1[100];
    int flag = 0;
    scanf(" %[^\n]", S1);
    for(int i=0,j=strlen(S1)-1;i<strlen(S1)&&j>=0;i++,j--){
        if(S1[i]!=S1[j]){
            printf("NOT PALINDROME\n");
            flag++;
            break;
        }
    }
    if(flag==0){
        printf("Palindrome\n");
    }
    return 0;
}