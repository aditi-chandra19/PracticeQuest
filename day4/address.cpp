#include<iostream>
using namespace std;
int main(){
    // int a=5;
    // int *ptr = &a;
    // int **p2=&ptr;
    // // cout<<&a<<endl;
    // // cout<<*ptr<<endl;
    // // cout<<ptr<<endl;
    // cout<<a<<" "<<ptr<<" "<<p2<<" "<<&p2<<endl;
    // cout<< *ptr<<" "<<*p2<<" "<<**p2<<endl;
    //--------------------------------------
    // int a=100;
    // int *p=&a;
    // // *p=53;
    // // cout<<a;
    // //---------------------------------------
    // int *x=p;
    // *x-=5;
    // cout<<a;
    //---------------------------
    // int a=1,b=3;
    // int *p=&a;
    // p=&b;
    // *p=7;
    // cout<<a<<" "<<b;
    // return 0;
    // //------------------------------
    int a=3;
    int *p=&a;
    int **q=&p;
    *p=*p+2;
    **q=**q+3;
    cout<<a;
    return 0;


}
