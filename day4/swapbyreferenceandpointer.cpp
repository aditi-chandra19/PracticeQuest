#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After swap using value: " << a << " " << b << endl;
}

void swapByReference(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapByPointer(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;

    int x = a, y = b;
    int p = a, q = b;

    cout << "Original values: " << a << " " << b << endl;

    swapByValue(p, q);

    swapByReference(a, b);
    cout << "After swap using reference: " << a << " " << b << endl;

    swapByPointer(&x, &y);
    cout << "After swap using pointer: " << x << " " << y << endl;

    return 0;
}
