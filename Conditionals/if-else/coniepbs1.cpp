#include<iostream>
// The Greatest Number Among Given Three Number
// Greates Among Three Numbers
// Find The Maximum Between The Three Numbers
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter Three Numbers : ";
    cin>>a>>b>>c;
    if((a==b)&&(b==c)&&(c==a)){
        cout<<"All Three Numbers Are Equal"<<endl;
    }
    else if((a>=b)&&(a>=c)){
        cout<<"The Maximum Among The Three Number Is : "<<a<<endl;
    }
    else if((b>=a)&&(b>=c)){
        cout<<"The Maximum Among The Three Number Is : "<<b<<endl;
    }
    else if((c>=b)&&(c>=a)){
        cout<<"The Maximum Among The Three Number Is : "<<c<<endl;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}