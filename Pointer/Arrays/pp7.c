#include<stdio.h>
// Reverse An Array Using pointer
int main(void){
    int n;
    printf("Declare Array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d", (arr+i));
    }
    printf("Printing ReverseArray Elements Using Pointers : ");
    for(int i=n-1;i>=0;i--){
        printf("%d ", *(arr+i));
    }
    return 0;
}