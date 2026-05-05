#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr = &a;
    int **p2=&ptr;
    // cout<<&a<<endl;
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;
    cout<<a<<" "<<ptr<<" "<<p2<<" "<<&p2<<endl;
    cout<< *ptr<<" "<<*p2<<" "<<**p2<<endl;
}
