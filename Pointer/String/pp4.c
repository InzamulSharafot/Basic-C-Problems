#include<stdio.h>
//Concatenate two strings using pointers
int main(void){
    char s1[20];
    char s2[20];
    printf("Enter 1st String : ");
    scanf(" %[^\n]", s1);
    printf("Enter 2nd String : ");
    scanf(" %[^\n]", s2);
    int i=0,j=0;
    char *str1, *str2;
    str1 = s1;
    str2 = s2;
    while(s1[i]!='\0'){
        ++str1;
        i++;
    }
    while(s2[j]!='\0'){
        *str1 = *str2;
        str1++;
        str2++;
        j++;
    }
    *str1 = '\0';
    printf("The Concatenated string id %s", s1);
    return 0;
}