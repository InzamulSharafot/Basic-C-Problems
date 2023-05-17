#include<iostream>
//Checking A Number Is Even or Odd Using Function
using namespace std;
void choe(int a){
    if(a%2==0){
        cout<<"Yes\n";
    }
    else{
        cout<<"odd\n";
    }
}
int main(){
    int x;
    cout<<"Enter Number : ";
    cin>>x;
    choe(x);
    return 0; 
}