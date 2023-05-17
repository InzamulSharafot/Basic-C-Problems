#include<stdio.h>
// Find The The Sum Of All Even & Odd numbers In A Given Range By Using Recursion
int evenrec(int x, int y){
    if(x>y){
        return 0;
    }
    else if(x%2==0){
        return (x+evenrec(x+1, y));
    }
    else{
        return (evenrec(x+1, y));
    }
}
int oddrec(int x, int y){
    if(x>y){
        return 0;
    }
    else if(x%2!=0){
        return (x+oddrec(x+1, y));
    }
    else{
        return (oddrec(x+1, y));
    }
}
int main(void){
    int n,m;
    scanf("%d %d", &n, &m);
    int sum1 = evenrec(n,m);
    int sum2 = oddrec(n,m);
    printf("Sum Of Even Number : %d\n", sum1);
    printf("Sum Of Odd Numbers : %d\n", sum2);
}
