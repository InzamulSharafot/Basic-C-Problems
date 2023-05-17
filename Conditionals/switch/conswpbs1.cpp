#include<iostream>
using namespace std;
// Temperature Conversion Celsius To Fahrenheit And Vice Versa
int main(){
    float tem, far, cel;
    int a;
    cout<<"Enter The Type Of Conversion You Want To Perform----->\n 1. Celsius To Faherenheit\n 2. Faherenheit To Celsius\n 3. For Exit"<<endl;
    cin>>a;
    cout<<"Enter Your Temprature : ";
    cin>>tem;
    switch (a)
    {
        case 1:
            cout<<((5*tem)/9)+32<<"F"<<endl; break;
        case 2:
            cout<<((tem-32)*5)/9<<"C"<<endl; break;
        case 3:
            cout<<"Have A Good Day"<<endl; break;
        default:
            cout<<"Invalid Input"<<endl;
           
    }
    return 0;
}