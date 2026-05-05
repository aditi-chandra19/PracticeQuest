#include<iostream>
using namespace std;
void swap(int a,int b){
    int c=a;
    a=b;
    b=c;
}
int main(){
    int a=23,b=34;
    swap(a,b);
    cout<<a<<" "<<b;
}