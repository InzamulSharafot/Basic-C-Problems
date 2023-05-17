#include<iostream>
using namespace std;
// The Date Is Correct Or Not
int main(void){
    int a;
    cout<<"Enter A Date : ";
    cin>>a;
    if((a>=1)&&(a<=31)){
        cout<<"The Date You've Entered Is valid"<<endl;
    }
    else{
        cout<<"The Date You've Entered Is Invalid"<<endl;
    }
}