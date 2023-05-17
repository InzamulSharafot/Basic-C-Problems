#include<iostream>
using namespace std;
//Check wheather a number is even or odd using a switch case
int main(){
    int a;
    cout<<"Enter A Number : ";
    cin>>a;
    switch(a%2==0){
        case 0 : cout<<"Odd"<<endl;break;
        case 1 : cout<<"Even"<<endl;break;
    }
    return 0;
}