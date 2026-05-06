#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year";

    cin>>year;
        
    if((year%4==0 && year %100!=0) || year % 400==0){
        cout<<"its a leap year"<<endl;
    
    }else{
        cout<<"its not a leap year"<<endl;
    }
    return 0;
}