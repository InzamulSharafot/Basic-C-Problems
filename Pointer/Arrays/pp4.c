#include<stdio.h>
// Copy one array to another using pointer
int main(void){
    int n;
    printf("Declare Array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d", (arr+i));
    }
    int arr1[n];
    for(int i=0;i<n;i++){
        *(arr1+i) = *(arr+i); 
    }
    printf("Printing Copied Array Elements Using Pointers : ");
    for(int i=0;i<n;i++){
        printf("%d ", *(arr1+i));
    }
    return 0;
}