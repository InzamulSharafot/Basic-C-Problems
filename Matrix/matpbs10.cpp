#include<iostream>
using namespace std;
// The Transpose of a Matrix
int main(){
    int arr1[50][50],arr2[50][50];
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
    // Transposing the matrix
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            arr2[j][i] = arr1[i][j];
        }
    }
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}