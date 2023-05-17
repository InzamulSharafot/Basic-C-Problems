#include<iostream>
using namespace std;
//Check wheather two matrices are equal or not
int main(void){
    int arr1[100][100],arr2[100][100];
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
    if((a!=c)||(b!=d)){
        cout<<"Not Equal"<<endl;
    }
    else{
        int flag;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(arr1[i][j]!=arr2[i][j]){
                    flag = 1;
                    break;
                }
            }
    }
    if(flag==1){
       cout<<"Not Equal"<<endl; 
    }
    else{
        cout<<"Equal"<<endl;
    }
    }
    return 0;
}