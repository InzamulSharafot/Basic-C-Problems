#include<stdio.h>
//Sort Array Using In Ascending Order Pointers
int main(void){
    int n;
    printf("Declare Array size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d", (arr+i));
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(arr+i)>*(arr+j)){
                int temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
    printf("Printing Sorted Array Elements Using Pointers : ");
    for(int i=0;i<n;i++){
        printf("%d ", *(arr+i));
    }
    return 0;
}