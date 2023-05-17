#include<iostream>
using namespace std;
//Check wheather a number is positive, negative or Zero
int main(){
    int a;
    cout<<"Enter A Number : ";
    cin>>a;
    switch((a>0)){
        case 1 : cout<<"Positive"<<endl;break;
        case 0 : 
            switch(a<0){
                case 1 : cout<<"Negative"<<endl;break;
                case 0 : cout<<"Zero"<<endl;break;
            }
        break;
    }
    return 0;
}