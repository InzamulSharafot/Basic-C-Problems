#include<iostream>
//Finding Prime Numbers In A Given Interval By Using Function
using namespace std;
void primeinterval(int x, int y);
int main(){
    int m,n;
    cout<<"Enter The Strating Point : ";
    cin>>m;
    cout<<"Enter The Ending Point : ";
    cin>>n;
    primeinterval(m, n);
    return 0;
}
void primeinterval(int x, int y){
    int numpri = 0;
    for(int i = x;i<=y;i++){
        int c = 0;
        for(int j = 1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            numpri++;
        }
    }
    printf("%d\n", numpri);
}