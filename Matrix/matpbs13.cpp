#include<iostream>
using namespace std;
// Check The Symmetric Matrix
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
    int flag1 = 0, flag2 = 0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            flag1+=arr1[i][j];
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
            flag2+=arr2[i][j];
        }
    }
    if(flag1==flag2){
        cout<<"Symmetric Matrix"<<endl;
    }
    else{
        cout<<"Not Symmetric Matrix"<<endl;
    }
    return 0;
}