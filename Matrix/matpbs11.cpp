#include<iostream>
using namespace std;
// The Sum of Minor Diagonals of a Matrix
int main(){
    int arr1[50][50];
    int a,b;
    cout<<"Enter the numbers row of the matrix : "<<endl;
    cin>>a;
    cout<<"Enter the numbers row of the matrix : "<<endl;
    cin>>b;
    cout<<"Enter Elements of The matrix : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr1[i][j];
        }
    }
    int sum = 0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i+j==a-1){
               sum += arr1[i][j];
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}