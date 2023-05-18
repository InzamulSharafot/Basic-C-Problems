#include<stdio.h>
// Input and print array elements using pointers
int main(void){
    int n;
    printf("Declare Array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d", (arr+i));
    }
    printf("Printing Array Elements Using Pointers : ");
    for(int i=0;i<n;i++){
        printf("%d ", *(arr+i));
    }
    return 0;
}