#include<iostream>
using namespace std;
// Input Angles Of A Triangle And Check Whether The Triangle Is Valid Or Not
int main(){
    float a,b,c,d;
    cout<<"Enter Three Angles Of An Triangle : ";
    cin>>a>>b>>c;
    d = a+b+c;
    if(d==180){
        cout<<"The Triangle Is Valid"<<endl;
    }
    else{
        cout<<"The Triangle Is Not Valid"<<endl;
    }
}