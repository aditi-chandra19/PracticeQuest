#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter numb";
    cin>>n;
    int sum=0,count=0;
    int fact=1;
    while(n>0){
        count++;
        int last_dig=n%10;
        sum+= last_dig;
        n/=10;
        fact*=last_dig;
    }
    // count=int(log10(n)+1);
    
    cout<<sum<<" "<<count<<" "<<fact;
    return 0;
}