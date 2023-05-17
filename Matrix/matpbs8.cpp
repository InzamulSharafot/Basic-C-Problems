#include<iostream>
using namespace std;
//Find upper triangular a matrix
int main(){
    int arr1[3][3];
    cout<<"Enter Elements of The first matrix : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    int flag = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j>i){
                if(arr1[i][j] == 0){
                flag++;
            }
            }
        }
    }
    if(flag==3){
        cout<<"Upper Triangular Matrix"<<endl;
    }
    else{
        cout<<"Not An Upper Triangular Matrix"<<endl;
    }
    return 0;
}