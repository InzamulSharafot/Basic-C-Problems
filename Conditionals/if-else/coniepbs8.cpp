#include<iostream>
using namespace std;
// A Character Is An Alphabet or Not
int main(){
    char l;
    cout<<"Enter A Character : ";
    cin>>l;
    if((l>='A'&& l<='Z')||(l>='a'&& l<='z')){
        cout<<l<<" Is An Alphabet."<<endl;
    }
    else{
        cout<<l<<" Is Not An Alphabet."<<endl;
    }
    return 0;
}