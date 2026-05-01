#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter your number";
    cin>>num;
    if(num>=0){
        // cout<<"its positive"<<endl;
        if(num%2==0 ) cout<<"its positive even";
        else cout<<"its positive odd";
    }
    else{
        cout<<"its not positive"<<endl;
    }     
    return 0;
}