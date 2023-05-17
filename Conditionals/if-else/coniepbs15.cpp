#include<iostream>
using namespace std;
// Check Whether The Triangle is an Equilateral, Isosceles or Scalene Triangle
int main(void){
    float a,b,c;
    cout<<"Enter The Sides of The Triangle : ";
    cin>>a>>b>>c;
    if((a!=b)&&(b!=c)&&(c!=a)){
        cout<<"Scalene Triangle"<<endl;
    }
    else if((a==b)&&(a==c)&&(b==c)){
        cout<<"Equillateral Triangle"<<endl;
    }
    else if((a==c)||(b==c)||(a==b)){
        cout<<"Isoceles Triangle"<<endl;
    }
    return 0;
}