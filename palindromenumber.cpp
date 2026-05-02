#include <iostream>
using namespace std;

int main() {
    int n, original, reverse = 0, rem;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if (original == reverse) {
        cout << original << " is a palindrome number.";
    } else {
        cout << original << " is not a palindrome number.";
    }

    return 0;
}
