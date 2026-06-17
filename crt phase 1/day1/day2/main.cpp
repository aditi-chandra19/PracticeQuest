#include<iostream>
using namespace std;
int main(){
    int a=0 , b=2;
    bool ok = a!=b && a++ && ++b ;
    cout<<ok<<" "<<a<<" "<<b<<endl;
    return 0;
}