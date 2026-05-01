#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks";

    cin>>marks;
        
    if(marks>90){
        cout<<"O"<<endl;
    }else if(marks>80 && marks<=90){
        cout<<"A"<<endl;
    }else if(marks>70 && marks<=80){
        cout<<"B"<<endl;
    }else{
        cout<<"F"<<endl;
        
    return 0;
}