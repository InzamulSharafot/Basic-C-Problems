#include<stdio.h>
// Search an element in an array using pointers
int main(void){
    int n;
    printf("Declare Array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d", (arr+i));
    }
    int a, i, flag = 0;
    printf("Enter Desired Number : ");
    scanf("%d", &a);
    int *b = &a;
    for(i=0;i<n;i++){
        if(*b==*(arr+i)){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("Element Didn't Found");
    }
    else{
        printf("Element Found At : %d",i+1);
    }
    return 0;
}