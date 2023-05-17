#include<iostream>
using namespace std;
//Find The Determinatiion Of a Matrix
int main(void){
    int arr[4][4];
    int a,b;
    cout<<"Enter The Row and Column of Matrix : ";
    cin>>a>>b;
    cout<<"Enter Elements of The matrix : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    if(a==2&&b==2){
        cout<<(arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0])<<endl;
    }
    else{
        int a,b,c,d,e,f,g,h,i;
        a = arr[0][0];
        b = arr[0][1];
        c = arr[0][2];

        d = arr[1][0];
        e = arr[1][1];
        f = arr[1][2];

        g = arr[2][0];
        h = arr[2][1];
        i = arr[2][2];

        int det = a*((e*i)-(f*h))-b*((d*i)-(g*f))-c*((d*h)-(e*g));
        cout<<det<<endl;
    }
    return 0;
}