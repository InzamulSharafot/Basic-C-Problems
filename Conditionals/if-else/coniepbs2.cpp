#include<iostream>
using namespace std;
// The Number Is Positive Or Negative
int main(){
    int a;
    cout<<"Enter A Number : ";
    cin>>a;
    if(a>0){
        cout<<a<<" is a positive number"<<endl;
    }
    else if(a<0){
        cout<<a<<" is a negative number"<<endl;
    }
    else if(a==0){
        cout<<"The Number You've is "<<a<<endl;
    }
    return 0;
}