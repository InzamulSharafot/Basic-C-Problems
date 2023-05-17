// All Occurance of a character in a string
#include<stdio.h>
#include<string.h>

int main(void){
    char s1[100];
    int pos[10];
    fgets(s1, 100, stdin);
    char s;
    scanf("%c", &s);
    int flag =0,k=0;
    for(int i=0;i<strlen(s1);i++){
        if(s1[i]==s){
            pos[k] = i+1;
            k++;
            flag++;
        }
    }
    if(flag==0){
        printf("%c is not Found\n", s);
    }
    else{
        printf("%c is found at : ", s);
        for(int i=0;i<k;i++){
            printf("%d ", pos[i]);
        }
    }
    return 0;
}