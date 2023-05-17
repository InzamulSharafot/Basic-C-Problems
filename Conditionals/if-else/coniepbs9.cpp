#include<iostream>
using namespace std;
// Check Whether An Uppercase Or Lowercase Alphabet
int main(void){
    char a;
    cout<<"Enter An Alphabet : ";
    cin>>a;
    if((a>='a')&&(a<='z')){
        cout<<"The Alphabet You've Entered Is A LowerCase Alphabet"<<endl;
    }
    else if((a>='A')&&(a<='Z')){
        cout<<"The Alphabet You've Entered Is A UpperCase Alphabet"<<endl;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}