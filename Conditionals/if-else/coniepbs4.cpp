#include<iostream>
using namespace std;
// Check wheather a number is divisible and 11 or not
int main(void){
    int a;
    cout<<"Enter A Number : ";
    cin>>a;
    if(a%5==0){
        cout<<a<<" is divisible by 5"<<endl;
    }
    if(a%5!=0){
        cout<<a<<" is not divisible by 5"<<endl;
    }
    if(a%11==0){
        cout<<a<<" is divisible by 11"<<endl;
    }
    if(a%11!=0){
        cout<<a<<" is not divisible by 11"<<endl;
    }
    return 0;
} 