#include<iostream>
using namespace std;
// Input any character and check whether it is the alphabet, digit or special character 
int main(void){
    char a;
    cout<<"Enter Any Character : ";
    cin>>a;
    if(((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z'))){
        cout<<"Alphabet"<<endl;
    }
    else if((a>=000)&&(a<=064)){
        cout<<"Special Character"<<endl;
    }
    else{
        cout<<"Digit"<<endl;
    }
    return 0;
}