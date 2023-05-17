#include<iostream>
//Finding Diameter, Circumference & Area of A Circule Using Function
using namespace std;
void cda(float x);
int main(void){
    float r;
    cout<<"Enter Radius Of The Circle(in meter) : ";
    cin>>r;
    cda(r);
    return 0;
}
void cda(float x){
    cout<<"The Diameter is : "<<2*x<<" m"<<endl;
    cout<<"The Circumference is : "<<2*3.1416*x<<" m"<<endl;
    cout<<"The Area Is : "<<3.1416*x*x<<" m^2"<<endl;
}