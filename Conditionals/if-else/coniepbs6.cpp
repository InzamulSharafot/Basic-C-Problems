#include<iostream>
using namespace std;
// Input Any Alphabet And Check Whether It Is Vowel Or Consonant
int main(){
    char l;
    cout<<"Enter A Character : ";
    cin>>l;
    if((l=='a')||(l=='A')||(l=='e')||(l=='E')||(l=='i')||(l=='I')||(l=='o')||(l=='0')||(l=='u')||(l=='U')){
        cout<<l<<" Is An Vowel;."<<endl;
    }
    else{
        cout<<l<<" Is A Consonant."<<endl;
    }
    return 0;
}