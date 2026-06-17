#include <iostream>
using namespace std;


class A{
    public:
    // Constructor
    A(){cout<< "C";
    A obj;}
    
    // Destructor
    ~A(){cout<<"D";}
};
int main(){
    A a1;
    // { A a2;  A a3; }
}