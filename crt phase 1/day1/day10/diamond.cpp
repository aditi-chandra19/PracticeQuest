#include<iostream>
using namespace std;
class A {
public:
    A() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
public:
    B() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A {
public:
    C() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    return 0;
}
