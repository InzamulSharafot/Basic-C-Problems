#include<iostream>
using namespace std;
// Calculator
int main(){
    char ch;
    int a,b;
    cout<<"Enput Two Numbers : ";
    cin>>a>>b;
    cout<<"Enput Oparand : ";
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
    return 0;
}