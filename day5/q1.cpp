#include <iostream>
using namespace std;

// Approach:
// Object bante hi constructor call hota hai.
// Object ka scope khatam hote hi destructor call hota hai.
// Inner block ka object pehle destroy hota hai, fir outer scope ke objects destroy hote hain.

class A{
    public:
    // Constructor
    A(){cout<< "C";}
    // Destructor
    ~A(){cout<<"D";}
};
int main(){
    // a1 main scope me create ho raha hai
    A a1;
    // a2 inner scope me create hoga aur block end hote hi destroy ho jayega
    { A a2; }
    // a3 fir se main scope me create ho raha hai
    A a3;
}

// Answer / Output: CCDCDD
// Kaise aaya:
// 1. a1 create hua -> C
// 2. a2 create hua inner block me -> C
// 3. inner block end hua, to a2 destroy hua -> D
// 4. a3 create hua -> C
// 5. main end hua, to reverse order me pehle a3 destroy hua -> D
// 6. sabse last me a1 destroy hua -> D
// Isliye final output hai: CCDCDD