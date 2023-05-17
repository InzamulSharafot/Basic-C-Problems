#include<stdio.h>
// Find Maximum and Minimum Elements Of An Array By Using Recursion
int maximum(int arr[], int n){
    int max;
    if(n==1){
        max = arr[0];
        return max;
    }
    else{
        return max = arr[n] > maximum(arr, n-1)?arr[n]:maximum(arr, n-1);
    }
}
int minimum(int arr[], int n){
    int max;
    if(n==1){
        max = arr[0];
        return max;
    }
    else{
        return max = arr[n] < minimum(arr, n-1)?arr[n]:minimum(arr, n-1);
    }
}
int main(void){
    int array[100],n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    int max = maximum(array,n-1);
    int mini = minimum(array,n-1);
    printf("Maximum Elements In The Array : %d\n", max);
    printf("Minimum Elements In The Array : %d", mini);
    return 0;
}