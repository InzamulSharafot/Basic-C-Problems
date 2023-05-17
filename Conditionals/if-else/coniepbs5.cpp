#include<iostream>
using namespace std;
// Find Wheateher A Number Is even or odd;
int main(void){
    int a;
    cout<<"Enter A Number : ";
    cin>>a;
    if(a%2==0){
        cout<<a<<" is a even number"<<endl;
    }
    else if(a%2!=0){
        cout<<a<<" is a odd number"<<endl;
    }
    return 0;
}