#include<iostream>
using namespace std;
//Find the sum of the upper triangular a matrix
int main(){
    int arr1[3][3];
    cout<<"Enter Elements of The first matrix : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    int sum = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i<j){
               sum += arr1[i][j];
            }
        }
    }
    cout<<"Sum of the upper triangular elements of a matrix is : "<<sum<<endl;
    return 0;
}