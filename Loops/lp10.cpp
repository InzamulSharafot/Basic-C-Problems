#include<iostream>
using namespace std;
//Printing A Calendar
int main(){
    int i, j, k, day, dt = 1;
    cout<<"Enter The Total Number Of Days In A Month : "<<endl;
    cin>>day;
    cout<<"Enter 0 for Monday : "<<endl;
    cout<<"Enter 1 for Tuesday : "<<endl;
    cout<<"Enter 2 for Wednesday : "<<endl;
    cout<<"Enter 3 for Thursday : "<<endl;
    cout<<"Enter 4 for Friday : "<<endl;
    cout<<"Enter 5 for Saturday : "<<endl;
    cout<<"Enter 6 for Sunday : "<<endl;
    cout<<"Chose Between 0 to 5 : ";
    cin>>k;
    cout<<"Mon \tTue \tWed \tThu \tFri \tSat \tSun"<<endl;
    cout<<"___________________________________________________"<<endl;
    for(j=0;j<k;j++){
        cout<<"\t";
    }
    while(dt<=day){
        if(k!=0){
            if(k%7==0){
                cout<<endl;
            }
        }
        cout<<dt<<"\t";
        dt++;
        k++;
    }
    return 0;
}