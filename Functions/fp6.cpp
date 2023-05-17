#include<iostream>
//Sum of Even & Odd Number in a Given Range
using namespace std;
void entervalsum(int x, int y);
int main(){
    int a,b;
    cout<<"Enter Starting Point : ";
    cin>>a;
    cout<<"Enter Ending Point : ";
    cin>>b;
    entervalsum(a, b);
    return 0;
}
void entervalsum(int x, int y){
    int sum1 = 0, sum2 = 0;
    for(int i=x;i<=y;i++){
        if(i%2==0){
            sum1 += i;
        }
        else{
            sum2 += i;
        }
    }
    cout<<"Sum Of Even Elements Of The Interval Is "<<sum1<<endl;
    cout<<"Sum Of Odd Elements Of The Interval Is "<<sum2<<endl;
}