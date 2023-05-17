#include<iostream>
using namespace std;
// Leap Year
int main(void){
    long int a;
    cout<<"Enter Year : ";
    cin>>a;
    if(a%4==0){
        cout<<a<<" is a Leap Year"<<endl;
    }
    else if(a%4!=0){
        cout<<a<<" is  not a Leap Year"<<endl;
    }
    else{
        cout<<"INvalid Input!!!!!!!!"<<endl;
    }
    return 0;
}