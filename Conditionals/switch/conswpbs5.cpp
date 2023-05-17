#include<iostream>
#define pi 3.1416 
using namespace std;
// Find Radius, Circumference and Volume of Cylinder
int main(){
    int r,h;
    cout<<"Enter Radius of A Cylinder : ";
    cin>>r;
    cout<<"Enter Height of A Cylinder : ";
    cin>>h;
    cout<<"1. Circumference\n2. Volume\n";
    int b;
    cout<<"Enter Operation : ";
    cin>>b;
    switch(b){
        case 1 : cout<<2*pi*r<<endl;break;
        case 2 : cout<<pi*r*r*h<<endl;break;
        default: cout<<"Invalid Keyword"<<endl;break;
    }
    return 0;
}