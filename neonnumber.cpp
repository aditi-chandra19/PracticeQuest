#include <iostream>
using namespace std;

int main() {
    int n, square, sum = 0, temp;

    cout << "Enter a number: ";
    cin >> n;

    square = n * n;
    temp = square;

    while (temp > 0) {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    if (sum == n) {
        cout << n << " is a neon number.";
    } else {
        cout << n << " is not a neon number.";
    }

    return 0;
}
