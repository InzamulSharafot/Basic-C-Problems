#include<iostream>
using namespace std;
//Perform Scalar matrix multipication
int main(void){
    int arr1[100][100],arr2[100][100],arr3[100][100];
    int a,b;
    cout<<"Enter The Row and Column of Firt Matrix : ";
    cin>>a>>b;
    cout<<"Enter Elements of The first matrix : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr1[i][j];
        }
    }
    int c,d;
    cout<<"Enter The Row and Column of Second Matrix : ";
    cin>>c>>d;
    cout<<"Enter Elements of The second matrix : "<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            cin>>arr2[i][j];
        }
    }
    if(b!=c){
        cout<<"Not Multiplicable"<<endl;
    }
    else{
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                arr3[i][j] = 0;
                for(int k=0;k<b;k++){
                    arr3[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }
        cout<<"After multiplication of this two matrixes :---->"<<endl;
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                cout<<" "<<arr3[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}