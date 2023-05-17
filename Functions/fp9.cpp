#include<iostream>
//Finding Strong Numbers In A Given Interval By Using Function
using namespace std;
void StronginterVal(int x, int y){
    int count = 0;
    for(int i = x;i<=y;i++){
        int l = i;
        int sum = 0;
        while(l!=0){
            int re = l%10;
            int fact = 1;
            for(int i=1;i<=re;i++){
                fact = fact*i;
            }
            sum += fact;
            l = l/10; 
        }
        if(sum==i){
           count++;
        }
    
    }
    cout<<"Total Strong Number : "<<count<<endl;
}
int main(){
    int m,n;
    cout<<"Enter The Strating Point : ";
    cin>>m;
    cout<<"Enter The Ending Point : ";
    cin>>n;
    StronginterVal(m,n);
    return 0;
}