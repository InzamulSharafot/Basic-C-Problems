#include<iostream>
using namespace std;
// Check the sparse matrix
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
    int flag1 = 0,flag2 = 0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr1[i][j]==0){
                flag1++;
            }
            else{
                flag2++;
            }
        }
    }
    if(flag2<flag1){
        cout<<"Sparse Matrix"<<endl;
    }
    else{
        cout<<"Not Sparse Matrix"<<endl;
    }
    return 0;
}