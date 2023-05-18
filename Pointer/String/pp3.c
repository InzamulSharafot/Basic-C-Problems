#include<stdio.h>
#include<string.h>
//Compare Two String Using Pointers
int compare(char a1[], char *a2[]){
    int flag = 0, i=0;
    while(i<strlen(a1) && i<strlen(a2)){
        if(a1[i]!=a2[i]){
            flag = 1;
            break;
        }
        i++;
    }
    if(flag==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(void){
    char s1[50], s2[50];
    scanf(" %[^\n]", s1);
    scanf(" %[^\n]", s2);
    int l = compare(s1, s2);
    if(l == 0){
        printf("Same\n");
    }
    else{
        printf("Not Same\n");
    }
    return 0;
}