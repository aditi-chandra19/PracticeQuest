#include <iostream>
using namespace std;

// Approach:
// Ye program temporary object ka concept dikhata hai.
// A(); likhne se ek temporary object create hota hai.
// Object bante hi constructor call hota hai, isliye C print hota hai.
// Statement khatam hote hi temporary object destroy ho jata hai, isliye D print hota hai.
// Final Output: CDCD
// Kaise aaya:
// 1. Pehla A(); -> C fir D
// 2. Doosra A(); -> C fir D
// Isliye output bana: CDCD

class A{
    public:
    // Constructor
    A(){cout<< "C";}
    // Destructor
    ~A(){cout<<"D";}
};
void fun() { A ();}
int main(){
    A();// temporary obj
    A();
}
