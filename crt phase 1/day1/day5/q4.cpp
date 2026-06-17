#include <iostream>
using namespace std;

// Approach:
// Ye program function ke through object return karna dikhata hai.
// fun() ke andar ek object x banta hai.
// Object bante hi constructor call hota hai, isliye C print hota hai.
// return x; me compiler copy elision kar sakta hai, isliye extra copy object nahi banta.
// main ke end me a1 destroy hota hai, isliye D print hota hai.

class A{
    public:
    // Constructor
    A(){cout<< "C";}
    // Destructor
    ~A(){cout<<"D";}
};
A fun(){
    A x;
    return x;
}
int main(){
    A a1=fun();

}

// Final Output: CD
// Kaise aaya:
// 1. fun() call hua
// 2. A x; bana -> C
// 3. return x; me compiler same object ko direct a1 me use kar leta hai
// 4. main end hua to a1 destroy hua -> D
// Isliye final output hai: CD