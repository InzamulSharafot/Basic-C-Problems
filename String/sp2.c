// A String Anagaram Or Not
#include<stdio.h>
#include<string.h>
int main(void){
    char s1[100],s2[100];
    scanf(" %[^\n]", s1);
    scanf(" %[^\n]", s2);
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    int flag = 0;
    if(l1!=l2){
        printf("Not An Anagram\n");
        flag++;
    }
    else{
        for(int i=0;i<l1;i++){
            for(int j=i+1;j<l1;j++){
                if(s1[i]>s1[j]){
                    char temp = s1[i];
                    s1[i] = s1[j];
                    s1[j] = temp;
                }
                if(s2[i]>s2[j]){
                    char temp = s2[i];
                    s2[i] = s2[j];
                    s2[j] = temp;
                }
            }
        }
        for(int i=0;i<l1;i++){
            if(s1[i]!=s2[i]){
                printf("Not An Anagaram\n");
                flag++;
                break;
            }
        }
    }
    if(flag==0){
       printf("An Anagaram\n");
    }
   return 0;
}