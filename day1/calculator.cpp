#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    char op;

    cout << "Basic Calculator" << endl;
    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter an operator (+, -, *, /,%): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> n2;

    switch (op) {
        case '+':
            cout << "Result = " << n1 + n2 << endl;
            break;
        case '-':
            cout << "Result = " << n1 - n2 << endl;
            break;
        case '*':
            cout << "Result = " << n1 * n2 << endl; // % dont work on double therefore use int also can take long long
            break;
        case '/':
            if (n2 == 0) {
                cout << "invalid" << endl;
            } else {
                cout << "Result = " << n1 / n2 << endl;
            }
            break;
        case '%':
            cout << "Result = " << n1 % n2 << endl;
            break;
        default:
            cout << "Error: Invalid operator." << endl;
    }

    return 0;
}
