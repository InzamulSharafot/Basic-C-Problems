#include<stdio.h>
#include<string.h>
// In short How to Copy One String To Another
int main(void){
    char *c1;
    scanf(" %[^\n]", c1);
    char *c2 = c1;
    printf("%s", c2);
    return 0;
}