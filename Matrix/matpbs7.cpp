#include<iostream>
using namespace std;
//Perform Scalar matrix multipication
int main(void){
    int arr1[3][3],arr2[3][3],arr3[3][3];
    cout<<"Enter Elements of The first matrix : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter Elements of The second matrix : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr3[i][j] = 0;
            for(int k=0;k<3;k++){
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<"After multiplication of this two matrixes :---->"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<" "<<arr3[i][j];
        }
        cout<<endl;
    }
    return 0;
}