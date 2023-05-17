#include<iostream>
using namespace std;
//Check wheather an alphabet is avowel or consonant using a switch case
int main(){
    char x;
    cout<<"Enter An  Alphabet : ";
    cin>>x;
    switch(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U'){
        case 1 : cout<<"The Character is A Vowel"<<endl;break;
        case 0 : cout<<"The Character is Not A Vowel"<<endl;break;
        default : cout<<"Invalid Input"<<endl;break;
    }
    return 0;
}