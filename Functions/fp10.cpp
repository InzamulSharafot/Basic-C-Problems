#include<iostream>
//Finding Perfect Numbers In A Given Interval By Using Functio
using namespace std;
void PerfectInterval(int m, int n){
    int count = 0;
    for(int j = m;j<=n;j++){
        int sum = 0;
        for(int i = 1;i<j;i++){
            if(j%i==0){
                sum += i;
            }
        }
        if(sum==j){
            count++;
        }
    }
    cout<<"The Total Perfect Number Are : "<<count<<endl;
}
int main(){
    int m,n;
    cout<<"Enter The Strating Point : ";
    cin>>m;
    cout<<"Enter The Ending Point : ";
    cin>>n;
    PerfectInterval(m,n);
    return 0;
}