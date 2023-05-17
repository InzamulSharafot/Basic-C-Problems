#include<iostream>
#include<cmath>
// Sum Of Generic Root Of A Given Number
using namespace std;
int main(){
    int n;
    cout<<"Enter Your Number : ";
    cin>>n;
    if(n==0){
        cout<<"Generic Root is "<<n<<endl;
    }
    else{
        int sum = 0,count = 0;
        int a = n;
        while(a!=0){
            int r = a%10;
            sum += r;
            a = a/10;
       }
       int sum2 = sum;
        while(sum2>0){
            sum2 = sum2/10;
            count++;
        }
        int sum1 = sum;
        int x = sum1%10;
        int l = count-1;
        long int k = round(pow(10, l));
        int y = sum1/k;
        if(sum<10){
            cout<<"Generic Root = "<<sum<<endl;
        }
        else if(n<10){
            cout<<"Generic Root = "<<n<<endl;
        }
        else{
            cout<<"Generic Root = "<<x+y<<endl;
        }
    }
    return 0;
}