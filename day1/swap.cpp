
#include <iostream>
using namespace std;

int main() {
    int a=4, b=5;

    // cout << "Enter two numbers: ";
    // cin >> a >> b;

    // temp = a;
    // a = b;
    // b = temp;

    a=a+b;
    b=a-b;
    a=a-b;
    cout << a << endl;
    cout <<  b << endl;
    return 0;
}
