#include <iostream>
using namespace std;


class A{
    public:
    // Constructor
    A(){cout<< "C";}
    // Destructor
    ~A(){cout<<"D";}
};
void fun() { A x;}
int main(){
    A a1;
    fun();
    A a2;
}