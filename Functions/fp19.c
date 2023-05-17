#include<stdio.h>
// Find The Sum Of All Array Elements By Using Recursion
int arsrec(int ar[], int n){
    if(n==0){
        return 0;
    }
    else{
        return (ar[n]+arsrec(ar,n-1));
    }
}
int main(){
    int n,array[50];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d", &array[i]);
    }
    int s = arsrec(array,n);
    printf("%d",s);
    return 0;
}