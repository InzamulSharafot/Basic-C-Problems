#include<iostream>
// To Find Cube Of A Number Using Function
using namespace std;
void cube(int a){
    int r = a*a*a;
    cout<<"The Cube Is "<<r<<endl;
}

int main(){
    int x;
    cout<<"Enter Number : ";
    cin>>x;
    cube(x);
    return 0;
}