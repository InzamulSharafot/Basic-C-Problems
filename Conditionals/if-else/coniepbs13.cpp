#include<iostream>
#include<cmath>
using namespace std;
// Find all roots of a quadriatic equation
int main(void){
    float a,b,c,x1,x2,realpart,imaginarypart;
    cout<<"Compare Your Equation With This Equation : "<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    float discriminant = b*b - 4*a*c;
    if(discriminant > 0){
        x1 = (-b + sqrt(discriminant))/(2*a);
        x2 = (-b - sqrt(discriminant))/(2*a);
        cout<<"Roots are real and all are different"<<endl;
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
    else if(discriminant==0){
        cout<<"All roots are same"<<endl;
        x1 = -b/(2*a);
        cout<<"x1 = x2 = "<<x1<<endl;
    }
    else{
        cout<<"Roots are complex and different"<<endl;
        realpart = -b/(2*a);
        imaginarypart = sqrt(-discriminant)/(2*a);
        cout<<"x1 = "<<realpart<<"+"<<imaginarypart<<"i"<<endl;
        cout<<"x2 = "<<realpart<<"-"<<imaginarypart<<"i"<<endl;
    }
    return 0;
}