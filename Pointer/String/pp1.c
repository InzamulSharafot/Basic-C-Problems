#include<stdio.h>
#include<string.h>
//Find The Length Of The String Using Pointers
int main(void){
    char s1[50];
    scanf(" %[^\n]", s1);
    char *s2 = s1;
    int count = 1;
    while(*s2 !='\0'){
        count++;
        s2++;
    }
    printf("String Length = %d", count);
    return 0;
}