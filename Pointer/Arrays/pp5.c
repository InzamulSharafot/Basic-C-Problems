#include<stdio.h>
// Swap two arrays using pointers
void swap_array(int *arr1, int *arr2, int x);
int main(void){
    int n;
    printf("Declare Both Array size : ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter First Array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d", (arr1+i));
    }
    int arr2[n];
    printf("Enter Second Array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d", (arr2+i));
    }
    swap_array(arr1, arr2, n);
    printf("Printing First Elements Of The Array : ");
    for(int i=0;i<n;i++){
        printf("%d ", *(arr1+i));
    } 
    printf("\n");
    printf("Printing Second Elements Of The Array : ");
    for(int i=0;i<n;i++){
        printf("%d ", *(arr2+i));
    }
    return 0;
}
void swap_array(int *arr1, int *arr2, int x){
    int *a1E = (arr1 + (x-1));
    int *a2E = (arr2 + (x-1));
    while(arr1<=a1E && arr2<=a2E){
        *arr1 ^= *arr2;
        *arr2 ^= *arr1;
        *arr1 ^= *arr2;
        arr1++;
        arr2++;
    }
}