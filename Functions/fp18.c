#include<stdio.h>
// Print All The Elements Of An Array By Using Recursion
void shardi(int arr[], int x, int a){
    if(a==x){
        return ;
    }
    else{
        printf("%d ", arr[a]);
        shardi(arr, x, a+1);
    }
}
int main(){
    int array[50],n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    printf("Printing Array Elements Using Recurssion : ");
    shardi(array, n, 0);
    return 0;
}