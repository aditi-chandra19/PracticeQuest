#include<iostream>
using namespace std;
 class test{
    public:
    int a, *b;
    test(int x=0,int y=0){
        a=x;
        b=new int(y);
    }
    test(test &obj)//copy constructor &obj is must to have
    {a=obj.a;
    b=obj.b;}
 };
 int main(){
    test obj1(10,20);
    test obj2=obj1;
    obj1.a=100;
    cout<<obj2.a<<endl;
    cout<<obj1.a<<endl;
 }