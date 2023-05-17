#include<iostream>
//Determinig Maxima or Minimum Number Between Two Numbers Using Function
using namespace std;
void minmax(float x, float y){
    if(x>y){
        cout<<"The Maximum Number Is : A = "<<x<<endl;
        cout<<"The Minimum Number Is : B = "<<y<<endl;
    }
    else if(y>x){
        cout<<"The Maximum Number Is : B = "<<y<<endl;
        cout<<"The Minimum Number Is : A = "<<x<<endl;
    }
    else{
        cout<<"Both Numbers Are Equal"<<endl;
    }
}
int main(){
    float a,b;
    cout<<"Enter Two Numbers : "<<endl;
    cout<<"A = ";
    cin>>a;
    cout<<"B = ";
    cin>>b;
    minmax(a, b);
    return 0;
}