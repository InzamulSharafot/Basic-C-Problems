#include<iostream>
using namespace std;
//Find the sum of each row and column of a matrix
int main(){
    int arr1[3][3];
    cout<<"Enter Elements of The first matrix : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum += arr1[i][j];
        }
        cout<<"Sum of row "<<i+1<<" is "<<sum<<endl;
    }
    for(int j=0;j<3;j++){
        int sum = 0;
        for(int i=0;i<3;i++){
            sum += arr1[i][j];
        }
        cout<<"Sum of column "<<j+1<<" is "<<sum<<endl;
    }
    return 0;
}