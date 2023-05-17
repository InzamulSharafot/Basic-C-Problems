#include<iostream>
using namespace std;
// Check The Identity Matrix
int main(){
    int arr1[50][50];
    int a,b;
    cout<<"Enter the numbers row of the matrix : "<<endl;
    cin>>a;
    cout<<"Enter the numbers row of the matrix : "<<endl;
    cin>>b;
    int flag1 = a, flag2 = 0;
    if(a==b){
        cout<<"Enter Elements of The matrix : "<<endl;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>arr1[i][j];
            }
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(i==j){
                   if(arr1[i][j]==1){
                      flag2++;
                    }
                }
            }
        }
        if(flag1==flag2){
            cout<<"Identity Matrix"<<endl;
        }
        else{
            cout<<"Not Identity  Matrix"<<endl;
        }
    }
    else if(a==0 && b==0){
        cout<<"Not Identity  Matrix"<<endl;
    }
    else if(a!=b){
        cout<<"Not Identity  Matrix"<<endl;
    }
    return 0;
}