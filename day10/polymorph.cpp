#include<iostream>
using namespace std; //scope resolution operator- cout inside std namespace
class test{
    public:
    void sum(int a,int b){
        cout<<"sum is called"<<endl;
    }//  these two function are overloading
    void sum(int a,int b,int c){//here deafault parameter is int c=0 nd due to this no overload will occur
        cout<<"sum2 is called"<<endl;
    }
    // void sum(int a,int b){
    //     cout<<"sum is called"<<endl;
    // }//  these two function are not overloading since data return type since argument is same
    // int sum(int a,int b){ 
    //     cout<<"sum2 is called"<<endl;
    // }
};
//for overload - name same; arg different;return type doesnot matter
// void sum(int a,int b){
    //     cout<<"sum is called"<<endl;
    // }//  these two function are  overloading 
    // int sum(int a,float b){ 
    //     cout<<"sum2 is called"<<endl;
    // }
int main(){
    test obj;
    obj.sum(10,20);
}