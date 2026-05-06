#include <iostream>
using namespace std;


class A{
    public:
    // Constructor
    A(){cout<< "C";}
    // Destructor
    ~A(){cout<<"D";}
};
void fun() { static A x;}
int main(){
    
    fun();
   fun();//not read due to static
}