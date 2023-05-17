#include<iostream>
using namespace std;
// Input All Sides Of A Triangle And Check Wheateher It's Valid Or Not;
int main(void){
    float a,b,c;
    cout<<"Enter The Sides of The Triangle : ";
    cin>>a>>b>>c;
    if(((a+b)>=c)||((b+c)>=a)||((c+a)>=b)){
        cout<<"Valid Triangle"<<endl;
    }
    else{
        cout<<"Invalid Triangle"<<endl;
    }
    return 0;
}