#include<iostream>
using namespace std;
// Find The Maximum Between Three Numbers
int main(void){
    int a,b;
    cout<<"Enter Two Numbers : ";
    cin>>a>>b;
    if(a>b){
        cout<<"The Maximum Between Two Number Is : "<<a<<endl;
    }
    else if(b>a){
        cout<<"The Maximum Between Two Number Is : "<<b<<endl;
    }
    else if(b==a){
        cout<<"Both are Equals"<<endl;
    }
    else{
        cout<<"Invalid Number"<<endl;
    }
    return 0;
}