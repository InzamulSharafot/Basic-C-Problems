#include<iostream>
#include<cmath>
//Fiinding Amstrong, Prime & Perfect Number In A Given Range By Using Function
using namespace std;
void Amstrong(int x);
void Prime(int y);
void Perfect(int z);
int main(){
    int o;
    cout<<"Enter Your Number : ";
    cin>>o;
    Amstrong(o);
    Prime(o);
    Perfect(o);
    return 0;
}
void Amstrong(int x){
    int l = x;
    int sum = 0;
    int count = 0;
    int m = x;
    while(m!=0){
        m = m/10;
        count++;
    }
    while(l!=0){
        int re = l%10;
        int r = round(pow(re, count));
        sum += r;
        l = l/10;
    }
    if(sum==x){
        cout<<x<<" Is An Amstrong Number"<<endl;
    }
    else{
        cout<<x<<" Is Not An Amstrong Number"<<endl;
    }
}
void Prime(int u){
    int f = u;
    int c;
    for(int i=1;i<=u;i++){
        if(u%i==0){
            c++;
        }
    }
    if(c==2){
        cout<<u<<" Is A Prime Number"<<endl;
    }
    else{
        cout<<u<<" Is Not A Prime Number"<<endl;
    }
}
void Perfect(int p){
    int v = p;
    int sum = 0;
    for(int i =1;i<p;i++){
        if(p%i==0){
            sum += i;
        }
    }
    if(sum==p){
        cout<<p<<" Is A Perfect Number"<<endl;
    }
    else{
        cout<<p<<" Is Not A Perfect Number"<<endl;
    }
}