#include<iostream>
//Checking Wheather A Number Is Palindrome or Not Using Function
using namespace std;
void palindrome(int x){
    int y = x;
    int rev = 0, re = 0;
    while(y!=0){
        re = y%10;
        rev = rev*10 + re;
        y = y/10;
    }
    int m = x-rev;
    if(m==0){
        cout<<"The Number You Have Entered Is Palindrome"<<endl;
    }
    else{
        cout<<"The Number You Have Entered Is Not Palindrome"<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter Number : ";
    cin>>a;
    palindrome(a);
    return 0;
}