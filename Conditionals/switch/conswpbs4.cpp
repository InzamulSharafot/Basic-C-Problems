#include<iostream>
using namespace std;
//Find the maximum between two numbers using the switch case
int main(){
    int a,b;
    cout<<"Enter Two Numbers : ";
    cin>>a>>b;
    switch(a>b){
        case 0 : cout<<b<<endl;break;
        case 1 : cout<<a<<endl;break;
    }
    return 0;
}