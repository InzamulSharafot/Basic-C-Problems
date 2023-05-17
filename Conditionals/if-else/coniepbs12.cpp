#include<iostream>
using namespace std;
// Calculate Profit or Loss
int main(){
    float a,b;
    cout<<"Enter First Price :";
    cin>>a;
    cout<<"Enter Last Price :";
    cin>>b;
    if(b>a){
        cout<<"The amount of profit is : "<<((b-a)/a)*100<<"%"<<endl;
    }
    else if(a==b){
        cout<<"No Profit Or Loss"<<endl;
    }
    else if(a>b){
        cout<<"The amount of loss is : "<<((a-b)/a)*100<<"%"<<endl;
    }
}
